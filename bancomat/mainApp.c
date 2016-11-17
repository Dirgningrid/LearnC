//
// Created by ingrid on 16/11/16.
//
#include "mainApp.h"

int main(){
    bool exit = true;
    while(exit){
        int scelta = 0;
        printf("MENU:\n1. Preleva\n2. Versa\n3. Mostra Estratto Conto\n4. Exit\nCOSA DESIDERI FARE? ");
        scanf("%d", &scelta);
        switch(scelta){
            case 1:{
                preleva();
                break;
            }

            case 2:{
                versa();
                break;
            }

            case 3:{
                estrattoconto();
                break;
            }

            case 4:{
                exit = false;
                break;
            }

            default:{
                printf("Scelta non valida");
            }
        }
    }
    return 0;
}

void preleva(){
    printf("quanto vuoi prelevare? \n");
    int value;
    scanf("%d", &value);

    if (saldo - value >= 0){
        saldo -= value;

        Movimento *mov = malloc(sizeof(Movimento));
        mov->valore = value;
        mov->data = time(NULL);
        mov->tipo_mov = 'P';
        aggiungi(&lista, mov);
        printf("hai prelevato: %d \n", value);
    } else {
        printf("Non puoi prelevare dal conto, il tuo saldo è esaurito!!");
    }
}

void versa(){
    printf("quanto vuoi versare? \n");
    int value;
    scanf("%d", &value);
    if (saldo + value < MASSIMO){
        saldo += value;

        Movimento *mov = malloc(sizeof(Movimento));
        //mov->valore = value;
        (*mov).valore = value;
        mov->data = time(NULL);
        mov->tipo_mov = 'V';
        aggiungi(&lista, mov); //passo l'indice di memoria dei puntatori
        printf("hai versato: %d \n", value);
    } else {
        printf("Hai raggiunto il limite massimo di fondo");
    }
}

void aggiungi(Lista *lista, Movimento *mov){
    if(lista->testa == NULL){
        lista->testa = mov;
    } else if(lista->coda == NULL){
        lista->coda = mov;
        lista->testa->next = lista->coda;
    } else {
        lista->coda->next = mov;
        lista->coda = mov;
    }
}

void estrattoconto(){
    Movimento *punt = lista.testa;
    while(punt != NULL){
        printf("Lista movimenti: %c %d \n", punt->tipo_mov, punt->valore);
        punt = punt->next;
    }
}
//
// Created by ingrid on 29/11/16.
//

#include <stdio.h>
#define PREZZO_GIORNI 500
#define PREZZO_TENDA 400
#define PREZZO_ROULETTE 450
#define PREZZO_AUTO 550
#define PREZZO_MOTO 350

int gg;
int nPersone;
char tipoAbitacolo;
char tipoVeicolo;
float preventivo;


void prezzoGiorni(int *,int *);
void prezzoAbitacolo(char *);
void prezzoVeicolo(char *);


int main(){

    printf("Ciao! Quante persone siete?\n");
    scanf(" %d", &nPersone);
    printf("Per quanti giorni avete soggiornato?\n");
    scanf(" %d", &gg);
    prezzoGiorni(&nPersone,&gg);
    printf("Con quale tipo di abitacolo? T: tenda R: roulette\n");
    while(tipoAbitacolo != 'T' && tipoAbitacolo != 'R'){
        scanf(" %c", &tipoAbitacolo);
    }
    prezzoAbitacolo(&tipoAbitacolo);
    printf("E con quale veicolo? A: auto M: moto\n");
    while(tipoVeicolo != 'A' && tipoVeicolo != 'R'){
        scanf(" %c", &tipoVeicolo);
    }
    prezzoVeicolo(&tipoVeicolo);
    printf("Il saldo da pagare è: %.2f", preventivo);
    return 0;
}

void prezzoGiorni(int *n, int *g){
    preventivo =(float) ((*n * *g) * PREZZO_GIORNI)/100;
}

void prezzoAbitacolo(char *abitacolo){
    if(*abitacolo == 'T'){
        preventivo +=(float) (PREZZO_TENDA * gg)/100;
    } else if(*abitacolo == 'R'){
        preventivo +=(float) (PREZZO_ROULETTE * gg)/100;
    } else {
        printf("Non hai digitato l'opzione corretta\n");
    }
}

void prezzoVeicolo(char *veicolo){
    if(veicolo == 'A'){
        preventivo +=(float) (PREZZO_AUTO * gg)/100;
    } else if(veicolo == 'M'){
        preventivo +=(float) (PREZZO_MOTO * gg)/100;
    } else {
        printf("Non hai digitato la lettera correttamente\n");
    }
}



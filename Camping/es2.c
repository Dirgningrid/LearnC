//
// Created by ingrid on 29/11/16.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *nome;
    int ggPermanenza;
    int componentiFamiglia;
} prenotazione;

void inserisciPrenotazione(prenotazione p);
prenotazione casette[10];
int count = 0;

int main(){
    int n4 = 0;
    int n2 = 0;
    prenotazione p;
    do {
        p.nome = (char*) malloc(256*sizeof(char));
        printf("A nome di chi prenoto?\n");
        scanf(" %s", &p.nome[0]);
        printf("Per quanti giorni vuoi prenotare?\n");
        scanf(" %d", &p.ggPermanenza);
        printf("Quanti siete?: \n");
        if(scanf(" %d", &p.componentiFamiglia) > 4) {
            printf("Mi dispiace, ma non è possibile prenotare un posto per più di 4 persone\n");
            free(p.nome);
        } else if (p.componentiFamiglia >2 && p.componentiFamiglia >= 4 && n4 <= 7){
            n4++;
            inserisciPrenotazione(p);
        } else if (n2 <= 2){
            n2++;
            inserisciPrenotazione(p);
        } else {
            printf("Mi dispiace siamo al completo\n");
        }

        printf("Prenotazione registrata a nome di: %s per %d giorni per %d persone. \n", p.nome, p.ggPermanenza, p.componentiFamiglia);
    } while(count != 10);

    return 0;
}

void inserisciPrenotazione(prenotazione c){
    if(count != 10){
        casette[count] = c;
        count++;
    } else {
        printf("Mi dispiace siamo al completo");
    }

}
#include <stdio.h>
#include <stdlib.h>
#define MIO_FILE "un_file.txt"

// Questa è la definizione di un TIPO di variabile, non di una variabile
typedef struct op {
    int saldo;
    char *string;
    struct op *next; // collegamento all'operazione successiva
} Operazione;

void prelievo(int *);

void versamento(int *);

void estratto_conto(Operazione *);

void menu(int, Operazione *);

void letturaFile();

int const saldo_iniziale = 1000;

int main() {
    int saldo = saldo_iniziale;
    // Operazione storico[100];
    // int count = 0;
    Operazione * head = NULL;
    menu(saldo, head);
    return 0;
}

void prelievo(int *saldo) {
    int p;
    printf("digita importo del prelievo:");
    scanf("%d", &p);
    *saldo = *saldo - p;

}

void versamento(int *saldo) {
    int v;
    printf("digita importo del versamento:");
    scanf("%d", &v);
    *saldo = *saldo + v;
}

void estratto_conto(Operazione *aHead) {
   /* int i;
    for (i = count; i >= 0; i--) {
        printf("saldo: %i\n", storico[i].saldo);
        printf("operazione di %s\n", storico[i].string);
    } */

    Operazione * tmp = aHead;
    while(tmp != NULL){
        printf("saldo: %i\n", tmp->saldo);
        printf("operazione di %s\n", tmp->string);
        tmp = tmp->next; // uso il puntatore come un cursore, sposto quindi il cursore sull'operazione successiva altrimenti ho un loop
    }
}
void letturaFile(){
    char *str;
    FILE * file;
    file = fopen(MIO_FILE, "r"); // w= write r=read a=append
    if(file!=NULL){
        while(!feof(file)){ // indicatore nascosto del documento per indicare che è finito, file end of file
            fscanf(file, "%s", str);
            printf("%s", str);
        }
        printf("\n");
        fclose(file); //il file va sempre chiuso altrimenti consuma memoria, a meno che non ci siano numerose op. successive
    } else {
        printf("Errore, impossibile aprire il file");
    }
}

void menu(int saldo, Operazione *aHead) {
    int input;
    char risposta;
    Operazione * nuova_operazione;

    do {
        // pulisce lo schermo
        // system("cls");
        // mostro il menu
        printf("1. prelievo\n");
        printf("2. versamento\n");
        printf("3. estratto_conto\n");
        printf("4. leggi file\n");
        printf("5. exit\n");
        // prendo da input la risposta
        scanf("%d", &input);

        switch (input) {
            case 1:
                prelievo(&saldo);
                nuova_operazione = malloc(sizeof(Operazione));
                /*nuova_operazione.string = "prelievo";
                nuova_operazione.saldo = saldo;
                storico[count] = nuova_operazione;
                count++;*/
                nuova_operazione->string = "prelievo";
                nuova_operazione->saldo = saldo;
                nuova_operazione->next = aHead;
                aHead = nuova_operazione; // ???
                break;
            case 2:
                versamento(&saldo);
               /* nuova_operazione.string = "versamento";
                nuova_operazione.saldo = saldo;
                storico[count] = nuova_operazione;
                count++;*/
                nuova_operazione = malloc(sizeof(Operazione));
                nuova_operazione->saldo = saldo;
                nuova_operazione->string = "versamento";
                nuova_operazione->next = aHead;
                aHead = nuova_operazione;
                break;
            case 3:
                estratto_conto(aHead);
                break;
            case 4:
                letturaFile();
                break;
            case 5:
                printf("Thanks for playing!\n");
                menu(saldo, aHead);
                break;
            default:
                printf("input errato \n");
                break;
        }
        printf("prova del saldo %d\n\n", saldo);

        printf("vuoi fare altro? (s/n):");
        scanf(" %c", &risposta);
    } while (risposta == 's');
}








































//
// Created by ingrid on 23/11/16.
//

/*
 * Esercizio 2
 * Dato un file (numbers.txt) con N elementi di tipo Integer, eseguirne la somma e stamparla a video
 * Risultato = 4922
 */

#include <stdio.h>
#define MIO_FILE "numbers.txt"

void letturaFile(FILE *, int *);

int main(){
    FILE *fp = NULL;
    int x = 0;

    letturaFile(fp, &x);
    printf("la somma di numbers.txt è: %d \n", x);


    return 0;
}

void letturaFile(FILE *file, int *nmb){
    int tmp = 0;
    file = fopen (MIO_FILE,"r");
    if (file != NULL) {
        while(!feof(file)){
            fscanf(file, "%d \n", &tmp);
            *nmb += tmp;
        }
    } else {
        printf ("Impossibile aprire il file %s in lettura\n", MIO_FILE);
    }
    printf("\n");
    fclose(file);
}
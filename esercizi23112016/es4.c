//
// Created by ingrid on 23/11/16.
//

/*
 * Esercizio 4
 * Dato un file (numbers.txt) con N elementi di tipo Int, eseguirne la moltiplicazione e stamparli a video
 * Risultato = 4.135566e+154
 */

#include <stdio.h>
#define MIO_FILE "numbers.txt"

void letturaFile(FILE *, double *);

int main(){
    FILE *fp = NULL;
    double x = 1;

    letturaFile(fp, &x);
    printf("la moltiplicazione di numbers.txt è: %e \n", x);

    return 0;
}

void letturaFile(FILE *file, double *nmb){
    int tmp = 1;
    file = fopen (MIO_FILE,"r");
    if (file != NULL) {
        while(!feof(file)){
            fscanf(file, "%d \n", &tmp);
            *nmb *= tmp;
        }
    } else {
        printf ("Impossibile aprire il file %s in lettura\n", MIO_FILE);
    }
    printf("\n");
    fclose(file);
}
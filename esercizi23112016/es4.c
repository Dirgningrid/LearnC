//
// Created by ingrid on 23/11/16.
//

/*
 * Esercizio 4
 * Dato un file (numbers.txt) con N elementi di tipo Int, eseguirne la moltiplicazione e stamparli a video
 */

#include <stdio.h>
#define MIO_FILE "numbers.txt"

void letturaFile(FILE *, double *);

int main(){
    FILE *fp = NULL;
    double x = 1;

    letturaFile(fp, &x);
    printf("la moltiplicazione di numbers.txt è: %lf \n", x);

    return 0;
}

void letturaFile(FILE *file, double *nmb){
    int tmp = 1;
    file = fopen (MIO_FILE,"r");
    if (file != NULL) {
        while(!feof(file)){
            fscanf(file, "%d", &tmp);
            *nmb *= tmp;
        }
    } else {
        printf ("Impossibile aprire il file %s in lettura\n", MIO_FILE);
    }
    printf("\n");
    fclose(file);
}
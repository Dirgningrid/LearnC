//
// Created by ingrid on 23/11/16.
//

/*
 * Esercizio 5
 * Dato un file (numbers.txt) con N elementi di tipo Int,
 * eseguirne la MEDIA ARITMETICA e stamparne il risultato a video
 * Risultato = 48
 */

#include <stdio.h>
#define MIO_FILE "numbers.txt"

void letturaFile(FILE *, int *);

int main(){
    FILE *fp = NULL;
    int x = 0;

    letturaFile(fp, &x);
    printf("la media di numbers.txt è: %d \n", x);

    return 0;
}

void letturaFile(FILE *file, int *nmb){
    int tmp = 0;
    int sum = 0;
    int count = 1;
    file = fopen (MIO_FILE,"r");
    if (file != NULL) {
        while(!feof(file)){
            fscanf(file, "%d \n", &tmp);
            //printf("%d \n", count);
            count++;
            sum += tmp;
        }
        *nmb = sum / count;
    } else {
        printf ("Impossibile aprire il file %s in lettura\n", MIO_FILE);
    }
    printf("\n");
    fclose(file);
}
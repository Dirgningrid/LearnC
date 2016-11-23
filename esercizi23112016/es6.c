//
// Created by ingrid on 23/11/16.
//

/*
 * Esercizio 6
 * Dato un file (numbers.txt) con N elementi di tipo Int, indicare il maggiore, il minore e il valore medio,
 * stamparne il risultato a video
 * Risultato = min 2 max 100 media 49
 */

#include <stdio.h>
#define MIO_FILE "numbers.txt"

void letturaFile(FILE *, int *, int *, int *);

int main(){
    FILE *fp = NULL;
    int min = 0;
    int max = 0;
    int avg = 0;

    letturaFile(fp, &avg, &min, &max);
    printf("il numero minimo di numbers.txt è: %d \n", min);
    printf("il numero massimo di numbers.txt è: %d \n", max);
    printf("la media di numbers.txt è: %d \n", avg);


    return 0;
}

void letturaFile(FILE *file, int *avg, int *min, int *max){
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
        *avg = sum / count;
    } else {
        printf ("Impossibile aprire il file %s in lettura\n", MIO_FILE);
    }
    printf("\n");
    fclose(file);
}
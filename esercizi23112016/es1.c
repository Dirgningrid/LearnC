//
// Created by ingrid on 23/11/16.
//

/*
 * Esercizio 1
 * Dato un file (numbers.txt) con N elementi di tipo Int, leggerli e stamparli a video
 */

#include <stdio.h>
#define MIO_FILE "numbers.txt"

void letturaFile();

int main(){
    letturaFile();
    return 0;
}

void letturaFile(){
    int x;
    FILE *fp;
    fp = fopen (MIO_FILE,"r");
    if (fp != NULL) {
        while(!feof(fp)){
            fscanf(fp, "%d", &x);
            printf("%d, ", x);
        }
    }else {
        printf ("Impossibile aprire il file %s in lettura\n",MIO_FILE);
    }
    printf("\n");
    fclose(fp);
}
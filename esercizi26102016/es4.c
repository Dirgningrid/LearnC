//
// Created by ingrid on 26/10/16.
//
/*
 *  Esercizio 4
 *  Dato un array con N elementi di tipo Float, eseguirne la moltiplicazione e stamparli a video con un numero di cifre decimali pari a 2.
 */

#include <stdio.h>

int main() {
    float array[10];
    float molt = 1;

    // popolo l'array con 10 interi da 1 a 10
    for (int i = 0; i < 10; i++ ) {
        array[i]= i + 1;
    }

    // eseguo la sottrazione

    for (int j = 0; j < 10; j++) {
        molt *= array[j];
    }

    printf("La moltiplicazione degli elementi è %.2f\n", molt);
    return 0;
}
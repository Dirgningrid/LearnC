//
// Created by ingrid on 26/10/16.
//
/*
 * Esercizio 5
    Dato un array con N elementi di tipo Float, eseguirne la sottrazione e stamparli a video con un numero di cifre decimali pari a 2.
 */

#include <stdio.h>

int main(){
    float array[10];
    float sottr = 0;

    // popolo l'array con 10 interi da 1 a 10
    for (int i = 0; i < 10; i++ ) {
        array[i]= i + 1;
    }

    // eseguo la sottrazione

    for (int j = 0; j < 10; j++) {
        sottr -= array[j];
    }

    printf("La sottrazione degli elementi è %.2f\n", sottr);
    return 0;
}

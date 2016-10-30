//
// Created by ingrid on 26/10/16.
//
/*
    Esercizio 2
    Dato un array con N elementi di tipo Integer, eseguirne la somma e stamparla a video
 */

#include <stdio.h>

int main() {
    int array[10];
    int somma;

    // popolo l'array con 10 interi da 1 a 10
    for (int i = 0; i < 10; i++ ) {
        array[i]= i + 1;
    }

    // eseguo la somma

    for (int j = 0; j < 10; j++) {
        somma -= array[j];
    }

    printf("La somma degli elementi è %d\n", somma);
    return 0;
}
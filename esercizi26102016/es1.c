//
// Created by ingrid on 26/10/16.
//
/*  Esercizio 1
    Dato un array con N elementi di tipo Integer, stamparli a video, con indicazione sulla posizione del singolo elemento.
    es.: [0] = 25
*/

#include <stdio.h>



int main() {
    int array[10];
    int i, j;

    // popolo l'array con 10 interi da 1 a 10
    for ( i = 0; i < 10; i++ ) {
        array[ i ] = i + 1;
    }

    // li stampo a video
    for (j = 0; j < 10; j++ ) {
        printf("[%d] = %d\n", j, array[j] );
    }

    return 0;
}

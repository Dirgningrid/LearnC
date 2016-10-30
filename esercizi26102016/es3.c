//
// Created by ingrid on 26/10/16.
//
/*
    Esercizio 3
    Dato un array con N elementi di tipo Integer, eseguirne la sottrazione e stamparla a video
*/

#include <stdio.h>

int main() {
    int array[10];
    int sottrazione;

    // popolo l'array con 10 interi da 1 a 10
    for (int i = 0; i < 10; i++ ) {
        array[i]= i + 1;
    }

    // eseguo la sottrazione

    for (int j = 0; j < 10; j++) {
        sottrazione -= array[j];
    }

    printf("La sottrazione degli elementi è %d\n", sottrazione);
    return 0;
}

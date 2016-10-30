//
// Created by ingrid on 26/10/16.
//
/*
 * Esercizio 7
    Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float,
    eseguirne la MEDIA PONDERATA con pesi pari alla corrispondente posizione inversa, e stamparne il risultato a video
*/

#include <stdio.h>

int main(){
    float array[] = { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };
    float sum = 0;
    int cont = 5;
    float avg_pond = 0;

    for (int i = 0; i < cont/2; i++){
        cont++;
        sum += array[i];
    }

    avg = sum / cont;

    printf("%.2f", avg);
}


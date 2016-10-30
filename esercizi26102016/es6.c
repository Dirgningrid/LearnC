//
// Created by ingrid on 26/10/16.
//
/*
 *  Esercizio 6
    Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float,
    eseguirne la MEDIA ARITMETICA e stamparne il risultato a video
 */

#include <stdio.h>

int main(){
    float array[] = {35.4, 46.7, 77.55, 11.1, 9.04, 0.75};
    float sum = 0;
    int cont = 0;
    float avg = 0;

    for (int i = 0; i < 6; i++){
        cont++;
        sum += array[i];
    }

    avg = sum / cont;

    printf("%.2f", avg);

    return 0;
}


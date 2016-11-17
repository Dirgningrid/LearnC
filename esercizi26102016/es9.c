//
// Created by ingrid on 26/10/16.
//
/*
 * Esercizio 9
    Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float,
    eseguire l’ordinamento crescente e decrescente, stamparne il risultato a video
 */

#include <stdio.h>

int compara_crescente (const void * a, const void * b)
{
    return ( *(float*)a - *(float*)b ); //dereferenzio il puntatore generico castato in foat
}

int compara_descrescente (const void * a, const void * b)
{
    return -( *(float*)a - *(float*)b ); //dereferenzio il puntatore generico castato in foat
}

int main(){
    float array[] = { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };

        qsort(array, 6, sizeof(float), compara_crescente);

        int n;

        printf("Before sorting the list is: \n");
        for( n = 0 ; n < 6; n++ )
        {
            printf("%.2f ", array[n]);
        }

        qsort(array, 6, sizeof(float), compara_descrescente);

        printf("\nAfter sorting the list is: \n");
        for( n = 0 ; n < 6; n++ )
        {
            printf("%.2f ", array[n]);
        }

        return(0);

}


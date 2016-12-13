//
// Created by ingrid on 13/12/16.
//

/*
 *  Esercizio 8
    Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float, indicare il maggiore, il minore e il valore medio, stamparne il risultato a video
 */

#include <iostream>

using namespace std;

int main(){
    float array[] = { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };
    float max, min, avg;

    max = array[0];
    min = array[0];
    for(int i = 0; i < 6; i++){
        if(array[i]>max){
            max = array[i];
        }
        if(array[i]<min){
            min = array[i];
        }

        avg += array[i];
    }
    avg = avg /6;

    cout << "Il valore massimo dell'array è: " << max << endl
         << "quello minimo: " << min << endl
         << "e la media: " << avg;
}
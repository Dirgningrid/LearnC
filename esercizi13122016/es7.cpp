//
// Created by ingrid on 13/12/16.
//

/*
 * Esercizio 7
    Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float,
    eseguirne la MEDIA PONDERATA con pesi pari alla corrispondente posizione inversa, e stamparne il risultato a video
*/

#include <iostream>

using namespace std;

int main() {
    float array[] = { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };
    int length = 6;
    int pond = 0;
    float avg = 0;
    float tmp = 0;
    for(int i = 0; i < length; i++){
        pond += (length - i);
        tmp += array[i] * pond;
    }

    avg = tmp / pond;

    cout << "La media ponderata dell'array è: " << avg;
}
//
// Created by ingrid on 13/12/16.
//

/*  Esercizio 6
Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float,
eseguirne la MEDIA ARITMETICA e stamparne il risultato a video
*/

#include <iostream>

using namespace std;
int main(){
    float array[] = {35.4, 46.7, 77.55, 11.1, 9.04, 0.7};
    float sum = 0;
    int cont = 0;
    float avg = 0;

    for(int i = 0; i < 6; i++){
        cont++;
        sum += array[i];
    }

    avg = sum / cont;

    cout.precision(2);
    cout << "La media aritmentica degli elementi dell'array è: " << avg;
}

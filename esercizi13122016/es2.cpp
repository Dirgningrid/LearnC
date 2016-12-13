//
// Created by ingrid on 13/12/16.
//

#include <iostream>

using namespace std;


int main(){
    /*
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
     */

    int array[] = { 35, 46, 77, 11, 9, 0 };
    int length = 6;
    int i = 0;
    int somma = 0;
    for(i = 0; i < length; i++){
        somma += array[i];
    }

    cout << "la somma dei valori dell'array è: " << somma << endl;
}
//
// Created by ingrid on 13/12/16.
//

#include <iostream>

using namespace std;

int main(){
    int array[] = { 35, 46, 77, 11, 9, 1 };
    int length = 6;
    // eseguo la moltiplicazione
    long molt = 1;
    for (int j = 0; j < length; j++) {
        molt *= array[j];
    }

    //printf("La moltiplicazione degli elementi è %.2f\n", molt);

    cout.precision(2);
    cout << "La moltiplicazione degli elementi è: " << molt << endl;

}
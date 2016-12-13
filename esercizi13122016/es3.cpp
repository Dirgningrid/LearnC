//
// Created by ingrid on 13/12/16.
//

#include <iostream>

using namespace std;

int main(){
    int array[] = { 35, 46, 77, 11, 9, 0 };
    int length = 6;
    int i = 0;
    int minus = 0;
    for(i = 0; i < length; i++){
        minus -= array[i];
    }

    cout << "la somma dei valori dell'array è: " << minus << endl;
}

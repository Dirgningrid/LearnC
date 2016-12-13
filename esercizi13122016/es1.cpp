//
// Created by ingrid on 13/12/16.
//

#include "es1.h"
#include <iostream>

using namespace std; //per poter utilizzare le classi che sostituiscono printf e scanf del C

int main(){
    int i = 10;
    cout << "Hello, World!\n" << "ciao " << i << endl;

    cin >> i;
    cout << "nuovo valore di i: " << i;
    return 0; //si può fare a meno di scrivere questo return
}

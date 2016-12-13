//
// Created by ingrid on 13/12/16.
//

/* SOMMA DELLE COLONNE */

#include <iostream>

using namespace std;

int main() {
    int matrice[10][10];
    srand((unsigned)time(NULL));

    int i = 0;
    int tmpArray[10] = {};

    for (i=0; i <10; i++)
    {
        int j = 0;
        for (j=0;j<10;j++){
            matrice[i] [j] = rand() % 50;
            cout << matrice[i][j] << "\t";
            tmpArray[j] = tmpArray[j] + matrice[i][j];
        }
        cout << endl;
    }

    for(i=0; i <10; i++) {
        cout << "la somma della COLONNA " << i << " è = " << tmpArray[i] << endl;
    }
    return 0;
}
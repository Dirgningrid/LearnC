//
// Created by ingrid on 13/12/16.
//

#include <iostream>

using namespace std;

int main() {
    // dichiarazione di una matrice (array multidimensionale)
    int matrice[2][2];

    // inizializzo il seme della funzione random
    srand((unsigned)time(NULL));

    int i = 0;
    double molt = 1;
    // scorro le righe
    for (i=0; i <10; i++)
    {
        int j = 0;
        // scorro le colonne
        for (j=0;j<10;j++){
            // assegno all'elemento [X][Y] il valore
            matrice[i] [j] = (rand() % 50) + 1;
            cout << matrice[i][j] << "\t";

            molt *= matrice[i] [j];
        }
        cout << endl;
    }

    cout << "La moltiplicazione è: " << molt;

    return 0;
}
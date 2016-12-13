//
// Created by ingrid on 13/12/16.
//

/*
PARTE 2


Es. 1
data una matrice di numeri random effettuare la somma dei valori di ogni riga


es. 2
data una matrice di numeri random effettuare la somma dei valori di ogni colonna


es. 3
data una matrice di numeri random trovare il valore più piccolo per ogni riga


es. 4
data una matrice di numeri random trovare il valore più piccolo per ogni colonna
 */


#include <iostream>

using namespace std;

int main() {
    // dichiarazione di una matrice (array multidimensionale)
    int matrice[10][10];

    // inizializzo il seme della funzione random
    srand((unsigned)time(NULL));

    int i = 0;
    int somma = 0;
    // scorro le righe
    for (i=0; i <10; i++)
    {
        int j = 0;
        // scorro le colonne
        for (j=0;j<10;j++){
            // assegno all'elemento [X][Y] il valore
            matrice[i] [j] = rand() % 50;
            cout << matrice[i][j] << "\t";
            somma += matrice[i][j];
        }
        cout << endl;
        cout << "la somma della RIGA " << i << " è = " << somma << endl;
        somma = 0;
    }

    return 0;
}
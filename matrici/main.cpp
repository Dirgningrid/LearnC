/*
PARTE 1


es. 1
data una matrice di numeri random effettuare la somma dei valori


es. 2
data una matrice di numeri random effettuare la moltiplicazione


es. 3
data una matrice di numeri random effettuare la media dei valori
 */

#include <iostream>

using namespace std;

int main() {
    // dichiarazione di una matrice (array multidimensionale)
    int matrice[10][10];

    // inizializzo il seme della funzione random
    srand((unsigned)time(NULL));

    int i = 0;
    // scorro le righe
    for (i=0; i <10; i++)
    {
        int j = 0;
        // scorro le colonne
        for (j=0;j<10;j++){
            // assegno all'elemento [X][Y] il valore
            matrice[i] [j] = rand() % 50;
            cout << matrice[i][j] << "\t";
        }
        cout << endl;

    }

    return 0;
}
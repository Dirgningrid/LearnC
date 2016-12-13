//
// Created by ingrid on 13/12/16.
//

/*es. 3
data una matrice di numeri random trovare il valore più piccolo per ogni riga
 */

#include <iostream>

using namespace std;

int main() {
    int matrice[10][10];
    srand((unsigned)time(NULL));

    int min = -1;
    for (int i=0; i <10; i++) {
        for (int j=0;j<10;j++){
            matrice[i] [j] = rand() % 50;
            cout << matrice[i][j] << "\t";
            if(matrice[i][j] < min){
                min = matrice[i][j];
            } else if(min == -1){
                min = matrice[i][j];
            }
        }
        cout << endl;
        cout << "il numero minore della RIGA " << i << " è = " << min << endl;
        min = -1;
    }

    return 0;
}
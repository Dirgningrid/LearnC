//
// Created by ingrid on 13/12/16.
//

#include <iostream>

using namespace std;

int main() {
    int matrice[10][10];
    srand((unsigned)time(NULL));

    int tmpArray[10];
    for(int z = 0; z<10; z++){
        tmpArray[z] = -1;
    }
    for (int i=0; i <10; i++) {
        for (int j=0;j<10;j++){
            matrice[i] [j] = rand() % 50;
            cout << matrice[i][j] << "\t";
            if(matrice[i][j] < tmpArray[j]){
                tmpArray[j] = matrice[i][j];
            } else if(tmpArray[j] == -1){
                tmpArray[j] = matrice[i][j];
            }
        }
        cout << endl;
    }
    for(int i = 0; i<10; i++){
        cout << "il numero minore della COLONNA " << i << " è = " << tmpArray[i] << endl;
    }
    return 0;
}
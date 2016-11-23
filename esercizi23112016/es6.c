//
// Created by ingrid on 23/11/16.
//

/*
 * Esercizio 6
 * Dato un file (numbers.txt) con N elementi di tipo Int, indicare il maggiore, il minore e il valore medio,
 * stamparne il risultato a video
 */

void letturaFile(FILE *, int *);

int main(){
    FILE *fp = NULL;
    int x = 0;

    letturaFile(fp, &x);
    printf("la moltiplicazione di numbers.txt è: %d \n", x);

    return 0;
}

void letturaFile(FILE *file, int *nmb){
    int tmp = 1;
    file = fopen (MIO_FILE,"r");
    if (file != NULL) {
        while(!feof(file)){
            fscanf(file, "%d", &tmp);
            *nmb *= tmp;
        }
    } else {
        printf ("Impossibile aprire il file %s in lettura\n", MIO_FILE);
    }
    printf("\n");
    fclose(file);
}
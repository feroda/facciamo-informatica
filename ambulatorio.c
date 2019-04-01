#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    // 0. Definizione di sala_di_attesa che contiene elementi di tipo char[]
    char paziente[20];
    char sala_di_attesa[10][20];
    int ne;
    int i;
    char tasto;

    // 1. Richiesta di quanti pazienti sono presenti
    do {
        printf("Quanti pazienti sono presenti [da 1 a 10]? ");
        scanf("%i", &ne);
    } while (ne > 10);

    printf("Bene, %i pazienti presenti\n", ne);

    // 2. Richiesta nomi in input e inserimento nella sala_di_attesa
    for (i = 0; i<ne; i++) {
        printf("Nome: ");
        scanf("%s", paziente);
        strcpy(sala_di_attesa[i], paziente);
    }

    // 3. Lettura del carattere premuto -> 
    //      se è '*' => toglie il paziente che è arrivato per primo e aspetta 2 secondi
    //      altrimenti non fa nulla.
    i = 0;
    while (i<ne) {
        tasto = getchar();
        if (tasto == '*') {
            printf("Entra %s\n", sala_di_attesa[i]);
            i++;
        }
    }
}

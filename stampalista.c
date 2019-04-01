#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    // 0. Definizione di sala_di_attesa che contiene elementi di tipo char[]
    char paziente[20];
    char sala_di_attesa[10][20];
    int ne;
    int i;
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

    // 3. Fare un ciclo su ogni elemento della sala di attesa:
    //  3a. Stampare il nome contenuto
    printf("I pazienti sono: ");
    for (i = 0; i<ne; i++) {
        printf("%s ", sala_di_attesa[i]);
    }
    printf("\n");
}

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // 0. Definizione di sala_di_attesa che contiene elementi di tipo char[]
    // char[] paziente;
    int paziente;
    int sala_di_attesa[10];
    int ne;
    int i;
    // 1. Richiesta di quanti pazienti sono presenti
    printf("Quanti pazienti sono presenti? ");
    scanf("%i", &ne);
    printf("Bene, %i pazienti presenti\n", ne);

    // 2. Richiesta nomi in input e inserimento nella sala_di_attesa
    for (i = 0; i<ne; i++) {
        printf("Numero: ");
        scanf("%i", &paziente);
        sala_di_attesa[i] = paziente;
    }

    // 3. Fare un ciclo su ogni elemento della sala di attesa:
    //  3a. Stampare il nome contenuto
    printf("I pazienti sono: ");
    for (i = 0; i<ne; i++) {
        printf("%i ", sala_di_attesa[i]);
    }
    printf("\n");
}

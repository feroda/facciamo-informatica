
/* INSERTION SORT in place
 * Step 1. si creano 2 variabili di lavoro "i" e "j"
 * Step 2. si usa "i" per scorrere l'array dato a partire dall'elemento "j"-esimo
 * Step 3. si individua il numero più piccolo
 * Step 4. se il numero più piccolo è diverso da j
   * Step 4a. il numero più piccolo viene scambiato con l'elemento "j"-esimo
 * Step 5. si incrementa di 1 la variabile "j"
 * Step 6. se j < DIM, si riprende il ciclo dallo Step 2.
 */
#include <stdio.h>
#include <stdlib.h>

#define DIM 11



int main(void) {
    int vet[DIM] = {12, 45, 2, 1, 43, 7000, 4, 100, 62, 5, 1};
    int i = 0;
    int j = 0;
    int piccolo;
    int ipiccolo = 0;
    int tmp;
    do {
        piccolo=10000;
        for (i=j; i<DIM; i++) {
            if (vet[i] < piccolo) {
                piccolo = vet[i];
                ipiccolo = i; 
            }
        }

        if (j != ipiccolo) {
            tmp = vet[j];
            vet[j] = piccolo;
            vet[ipiccolo] = tmp;
        }

        j++;
    } while (j<DIM);

    for (i=0; i < DIM; i++) {
        printf("%d, ", vet[i]);
    }
    printf("\n");
    return 0;
}
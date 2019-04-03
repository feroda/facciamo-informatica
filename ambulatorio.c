#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_num_pazienti(int max_pazienti);
void get_sala_di_attesa(int ne, char sala_di_attesa[10][20]);
void uscita_pazienti(int ne, char sala_di_attesa[10][20]);

int main(void) {

    // 0. Definizione di sala_di_attesa che contiene elementi di tipo char[]
    char sala_di_attesa[10][20];
    int ne;

    // 1. Richiesta di quanti pazienti sono presenti
    ne = get_num_pazienti(10);
    printf("Bene, %i pazienti presenti\n", ne);

    // 2. Richiesta nomi in input e inserimento nella sala_di_attesa
    get_sala_di_attesa(ne, sala_di_attesa);

    // 3. Lettura del carattere premuto -> 
    //      se è '*' => toglie il paziente che è arrivato per primo e aspetta 2 secondi
    //      altrimenti non fa nulla.
    uscita_pazienti(ne, sala_di_attesa);
}

int get_num_pazienti(int max_pazienti) {
    // Restituisce il numero di pazienti inserito dall'utente
    int ne;
    do {
        printf("Quanti pazienti sono presenti [da 1 a %i]? ", max_pazienti);
        scanf("%i", &ne);
    } while (ne > max_pazienti);
    return ne;
}

void get_sala_di_attesa(int ne, char sala_di_attesa[10][20]) {
    int i;
    char paziente[20]; 

    for (i = 0; i<ne; i++) {
        printf("Nome: ");
        scanf("%s", paziente);
        strcpy(sala_di_attesa[i], paziente);
    }
}

void uscita_pazienti(int ne, char sala_di_attesa[10][20]) {
    int i = 0;
    char tasto;

    while (i<ne) {
        tasto = getchar();
        if (tasto == '*') {
            printf("Entra %s\n", sala_di_attesa[i]);
            i++;
        }
    }
}


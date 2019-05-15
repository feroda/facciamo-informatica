/* Realizzare una anagrafica: un elenco di persone.
 * Bisogna memorizzare:
 * - Nome e cognome
 * - Età
 * 
 * Su questa anagrafica deve poter essere possibile:
 * - inserire una nuova persona
 * - eliminare una persona inserita
 * - visualizzare le persone più giovani di 30 anni
 * - ordinare le persone per età
 * - ordinare le persone per nome completo
 */
#include <stdio.h>

#define DIM 10

typedef struct {
    char name[25];
    int age;
} SPerson;

int insert_person(SPerson anagrafica[], int *ne);
int delete_person(SPerson anagrafica[], int *ne, int pos);
int print_people(SPerson anagrafica[], int ne);

void main(void) {
    SPerson vet[DIM];
    int ne = 0;
    int i = 0;
    SPerson x;

    /* Step 1: visualizza messaggio iniziale di scelta
     * Step 2: differenzia (con uno switch) il carattere inserito
     * Step 3: se tasto "I" => chiama la funzione insert_person()
     * Step 4: se tasto "R" => chiama la funzione remove_person()
     * Step 5: se tasto "A" => chiama la funzione sort_people_by_age()
     * Step 6: se tasto "N" => chiama la funzione sort_people_by_name()
     */
    insert_person(vet, &ne);
    print_people(vet, ne);
    delete_person(vet, &ne, 0);
    print_people(vet, ne);
}

int print_people(SPerson anagrafica[], int ne) {
    int i;
    SPerson x;

    if (!ne) {
        printf("Non ci sono persone in lista\n");
    }
    for (i=0; i<ne; i++) {
        x = anagrafica[i];
        printf("Persona: %s %d\n", x.name, x.age);
    }

    return 1;
}


int insert_person(SPerson anagrafica[], int *ne) {

    SPerson x;

    printf("Name: ");
    scanf("%s", &x.name);
    printf("Age: ");
    scanf("%i", &x.age);

    // TODO: prima di inserire l'elemento in "anagrafica" bisogna verificare che ne sia < di DIM

    anagrafica[*ne] = x;
    (*ne)++;
    return 1;
}

int delete_person(SPerson anagrafica[], int *ne, int pos) {
    int i;
    for (i = pos+1; i <= *ne; i++) {
        anagrafica[i-1] = anagrafica[i];
    }    
    (*ne)--;
    return 1;
}


/* Realizzare una anagrafica: un elenco di persone.
 * Bisogna memorizzare:
 * - Nome e cognome
 * - Età
 * 
 * Su questa anagrafica deve poter essere possibile:
 * - inserire una nuova persona
 * - eliminare una persona inserita
 * - ordinare le persone per età
 * - ordinare le persone per nome completo
 */
#include <stdio.h>

typedef struct 
{
    char name[25];
    int age;
} SPerson;

int insert_person(SPerson *anagrafica[10]) {

    SPerson x;

    printf("Name: ");
    scanf("%s\n", &x.name);
    printf("Age: ");
    scanf("%i\n", &x.age);

    *anagrafica[0] = x;
}


void main(void) {
    SPerson vet[10];

    /* Step 1: visualizza messaggio iniziale di scelta
     * Step 2: differenzia (con uno switch) il carattere inserito
     * Step 3: se tasto "I" => chiama la funzione insert_person()
     * Step 4: se tasto "R" => chiama la funzione remove_person()
     * Step 5: se tasto "A" => chiama la funzione sort_people_by_age()
     * Step 6: se tasto "N" => chiama la funzione sort_people_by_name()
     */
    insert_person(&vet);


}



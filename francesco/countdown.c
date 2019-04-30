#include <stdio.h>
#include <stdlib.h>

void visualizza_countdown_per_riferimento(int *ne);
void visualizza_countdown_per_valore(int ne);

int main(void) {
	int ne=3;
	
	visualizza_countdown_per_valore(ne);
    visualizza_countdown_per_riferimento(&ne);
	return 0; 
}
void visualizza_countdown_per_riferimento(int *ne) {

	while (*ne>=0){
 		//visualizza il valore 
 		printf("[RIF] ne ha valore %i\n", *ne);
		printf("[RIF] ne=%i\n", *ne);
 		//decremento di 1 
 		(*ne)--;
	}
}

void visualizza_countdown_per_valore(int ne) {

	while (ne>=0){
 		//visualizza il valore 
 		printf("[VAL] ne ha valore %i\n", ne);
		printf("[VAL] ne=%i\n", ne);
 		//decremento di 1 
 		ne--;
	}
}
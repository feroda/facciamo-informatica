#include <stdio.h>
#include <stdlib.h>

void visualizza_countdown(int ne) {

	while (ne>=0){
 		//visualizza il valore 
 		printf("ne ha valore %i\n", ne);
		//printf("ne=%i\n", ne);
 		//decremento di 1 
 		ne--;
    }
}

int main(void) {
	int ne = 10;
      
	visualizza_countdown(ne);
	printf("ne ha valore %i\n", ne);
    
	 
}

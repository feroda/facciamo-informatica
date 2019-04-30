#include <stdio.h>
#include <stdlib.h>


void visualizza_countdown(long *c);


int main (void) {
    long c;

    printf("quanto vale c?\n");
    scanf("%lu", &c);
   
    if (c>=0) 
    {
        visualizza_countdown(&c);
	    printf("c ha valore %lu\n", c);
    } 
    else 
    { 
        printf("countdown non disponibile con numeri minori di 0\n");
    }

// system("pause");
return 0;
}



void visualizza_countdown(long *c) {
    int i=0;
	while (*c>=0){
        i++;
        //visualizza il valore 
 		printf("c ha valore %lu\n", *c);
		//printf("ne=%i\n", ne);
 		//decremento di 1 
 		(*c)--;
        if(i>=20)
        {
             break;
        }
    }
}
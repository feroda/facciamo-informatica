#include <stdio.h>
#include <stdlib.h>


void Countdown();
int main(void){
        
        Countdown();
        
        return 0;
}


void Countdown(){
        int c;
        printf("quanto vale c?");
        scanf("%i", &c);
        while (c>=0) {
        printf("c ha valore %i\n",c);
        printf("c=%i\n",c);
        c--;
        }
}
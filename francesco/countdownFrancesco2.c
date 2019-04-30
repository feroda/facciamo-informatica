#include <stdio.h>
#include <stdlib.h>


void Countdown(int *c);
//void Countdown(int &c);
int main(void)
{
    int c;
    printf("quanto vale c?");
    scanf("%i", &c);

    Countdown(&c);
    return 0;
}

void Countdown(*c)
{
    while (*c >= 0) {
        printf("c ha valore %i\n", *c);
        printf("c=%i\n", *c);
        (*c)--;

    }
}


/*void Countdown(&c)
{
    while (c >= 0) {
        printf("c ha valore %i\n", c);
        printf("c=%i\n", c);
        c--;

    }
}
*/
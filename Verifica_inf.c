#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 100

typedef struct 
{
    char tipo;
    char mat[4];
    float voto;

}Svoto;




void main(void)
{
    Svoto tab[DIM];
    int ne;
    Svoto x;
    int pos;
    char ch;


}

void MostraMenu(void){
    system("cls");
    printf("[1] Aggiungi\n");
    printf("[2] Elimina\n");
    printf("[3] Visualizza\n");
    printf("[4] Visualizza singola mat\n");
    printf("[*] Esci\n");
    printf("scegli: ");


}






int carica(char Verifica_inf[],Svoto tab[],int *ne)
{
    int i;
    FILE* f;
    *ne = 0;
    f = fopen(Verifica_inf,"rb");
    if(f == 0)
    return 0;
    fread(ne,sizeof(int),1,f);
    for(i= 0; i<*ne;i++)
    fread(&tab[i],sizeof(Svoto),i,f);
    fclose(f);
    return 1;
}

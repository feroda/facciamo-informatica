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

int carica(char Verifica_inf[],Svoto tab[],int *ne);
int Salva(char Verifica_inf,Svoto tab[],int ne);
int insert_voto(Svoto tab[],int* ne,Svoto x);



void main(void)
{
    Svoto tab[DIM];
    int ne;
    Svoto x;
    int pos;
    char ch;

    Carica("voti.bin",tab,&ne);

    do
    {
        MostraMenu();
        ch = _getch();
        switch(ch)
        {
            
            case '1' :
            system("cls");
            printf("materia:");
            scanf("%s",x.mat);
            fflush(stdin);
            printf("Voto: ");
            scanf("%f",&x.voto);
            fflush(stdin);
            insert_voto(tab,&ne,x);
            Salva("voti.bin",tab,ne);
            break;
          
            case '2':
            Visualizza(tab,ne);
            system("pause");
            break;
            
            case '3':
            Visualizza(tab,ne);
            printf("N.riga da cancellare:");
            scanf("%i", &pos);
            break;
                    
            }
        
    } while (ch != '*');
    system("pause");
    return 0;
    


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

int insert_voto(Svoto tab[],int* ne,Svoto x)
{
    if(*ne >= DIM)
    return 0;
    tab[*ne]=x;
    *ne = *ne+1;
    return 1;
}

void Visualizza(Svoto tab[],int ne)
{
    int i;
    system("cls");
    printf("Lista dei voti\n");
    printf("materia tipo voto\n");
    for(i=0;i<ne;i++)
    printf("%2i %-6s %-4c  %.2f\n",i,tab[i].mat,tab[i].tipo,tab[i].voto);
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
int Salva(char Verifica_inf,Svoto tab[],int ne)
{
    int i;
    FILE* f;
    f = fopen(Verifica_inf,"wb");
    if ( f== 0)
    return 0;
    fwrite(&ne,sizeof(int),1,f);
    for(i=0;i<ne;i++)
    fwrite(&tab[i],sizeof(Svoto),1,f);
    fclose(f);
    return 1;

}

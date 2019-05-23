//esercizio verifica

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



#define DIM 100

typedef struct{

    char materia[20];
    char tipo;
    float voto;

}SVoto;

void MostraMenu();
int AggiungiVoto(SVoto tab[],SVoto x,int* ne);
int Visualizza(SVoto tab[], int* ne);
int VisualizzaIns(SVoto tab[], int* ne);
int Salva(SVoto tab[], FILE* f, int ne);
int EliminaVoto(SVoto tab[],int* ne,int pos);


int main(void)
{
        char ch = 'a';
        SVoto x;
        SVoto tab[DIM];
    
        int ne = 0;
        int pos = 0;
        FILE* f;

        do {
            if (ch != '\n')
                MostraMenu();
            ch = getc(stdin);
            
            switch(ch)
            {
            
                case '1' :
                    system("cls");
                    printf("Qual'e' la materia?\n");
                    scanf("%s",x.materia);
                    fflush(stdin);
                    printf("Che tipo di voto e'?\n");
                    scanf("%c", &x.tipo);
                    fflush(stdin);
                    printf("Qual'e'il voto?\n");
                    scanf("%f", &x.voto);
                    fflush(stdin);
                    AggiungiVoto(tab, x, &ne);
                    break;

                case '2' :
                    system("cls");
                    Visualizza(tab,&ne);
                    printf("Quale voto desideri eliminare?");
                    scanf("%i",&pos);
                    EliminaVoto(tab,&ne,pos);
                    break;

                 case '3' :
                    system("cls");
                    Visualizza(tab,&ne);
                    break;

                 case '4' :
                    VisualizzaIns(tab,&ne);
                    break;       
           }
        } while (ch != '*');

}




void MostraMenu()
{

        printf("[1] Aggiungi voto");
        printf("[2] Elimina voto");
        printf("[3] Visualizza voti");
        printf("[4] Visualizza tutte le insufficenze");
        printf("[*] Esci");
}


int AggiungiVoto(SVoto tab[],SVoto x,int* ne)
{
        if(*ne >= DIM)
           return 0;

        tab[*ne] = x;
        *ne = *ne + 1;
        return 1;
}


int Visualizza(SVoto tab[], int* ne)
{
    int i;

    for(i=0;i<*ne;i++)

        printf("Materia: %s   , Tipo: %c,     Voto: %f\n", tab[i].materia,tab[i].tipo, tab[i].voto );

}


int EliminaVoto(SVoto tab[],int* ne,int pos)
{
        int i;
        if(*ne <= pos)
            return 0;

        for(i=pos;i<*ne;i++)
        tab[i] = tab[i+1] ;
        *ne = *ne - 1;

        return 1;
}



int VisualizzaIns(SVoto tab[], int* ne)
{
    int i;
    for(i=0;i<*ne;i++)
    {
        if(tab[i].voto < 6)
            printf("Materia: %s   , Tipo: %c,     Voto: %f\n", tab[i].materia,tab[i].tipo, tab[i].voto );
    }
}


int Salva(SVoto tab[], FILE* f, int ne)
{
    int i;
    f = fopen("output.txt", "wb");
    if( f == 0)
       return 0;

    fwrite(&ne, sizeof(int),1,f);
    for(i=0;i<ne;i++)
       fwrite(&tab[i],sizeof(SVoto),1,f);
    fclose(f);
    return 1;

}














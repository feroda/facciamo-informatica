#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


#define DIM 10




//assegna valori iniziali ai puntatori
void Init(int* p, int* u, int* l);


// inserimento in coda di un dato x
int InsCoda( char v[DIM][20], int* u, int* l, char x[20]); 

// estrazione dalla coda di un dato x
int EstraiTesta( char v[DIM][20], int* p, int* l, char x[20]); 

int main(void)
{
	
	
	
	// scrittura della coda
	char vet[20]; 
	int p=0, u=0, l=0;
	char nome [20];
	char ch = 0;
	int x;
	
	do
	{

		printf("CARATTERE %c\n", ch);
		system("cls");
		printf("Benvenuti nello studio del dottor rossini francesco\n"); 
		ch = getchar();
		switch ( ch )
		{
			case 'p':
			
				system("cls");
				printf("che prestazione ha eseguito? \n");
				scanf("%s[^\n]", nome);
				fflush(stdin);

				if ( EstraiTesta( vet, &p, &l, nome) == 0)
					printf("Aggiunto a database  \n");
				else
				printf("tocca a : %s\n", nome);
				sleep(1);
				break;

		case '+':   
			printf("come si chiama?");  
			scanf("%s[^\n]", nome);
			fflush(stdin);

			if ( InsCoda( vet, &u, &l, nome) == 0) 
				printf("coda piena...\n");
			else
				printf("la chiameremo al piu' presto: %s\n", nome); 
			sleep(1);
			break; 

		case '-':
			
			printf("il laboratorio e' libero, prego \n");
			if ( EstraiTesta( vet, &p, &l, nome) == 0)
				printf("coda vuota , buona giornata \n");
			else
				printf("tocca a : %s\n", nome);
			sleep(1);
			break;
		}
		

	} while (ch != '*');




}

char vet[DIM][20];


								
void Init(int* p, int* u, int* l)
{
	*p = *u = *l = 0;
}







// inserimento in coda di un dato x
int InsCoda( char v[DIM][20], int* u, int* l, char x[20])
{
	if( *l == DIM)
		return 0;		// non c'e' posto

	strcpy(v[*u], x);

	*u = *u + 1;			// sposto in avanti u
	if( *u == DIM)			//  dal fondo, lo riporto a capo
		*u = 0;
	*l = *l + 1;
	return 1;
}


// estrazione dalla coda di un dato x
int EstraiTesta( char v[DIM][20], int* p, int* l, char x[20]) 
{
	if (*l == 0)
		return 0;			// non c'e' nulla in coda


	strcpy(x ,v[*p]);

	*p = *p + 1;			// sposto in avanti u
	if( *p == DIM)			//  dal fondo, lo riporto a capo
		*p = 0;

	*l = *l - 1;
	return 1;

}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int MarcaA, MarcaB, MarcaC;
	
	printf("\tDigite a quantidade de chuteiras da marca A: \n");
	scanf("%d",&MarcaA);
	
	printf("\tDigite a quantidade de chuteiras da marca B: \n");
	scanf("%d",&MarcaB);
	
	printf("\tDigite a quantidade de chuteiras da marca C: \n");
	scanf("%d",&MarcaC);
	
	
	printf("Existem %d chuteiras da marca A\n", MarcaA);
	printf("Existem %d chuteiras da marca B\n", MarcaB);
	printf("Existem %d chuteiras da marca C\n", MarcaC);
	
	printf("\tExistem %d chuteiras da marca A, %d da marca B e %d da marca C\n", MarcaA, MarcaB, MarcaC);
	
	
	printf("\t\t Quantidade de Chuteiras em Estoque\n");
	
	printf("\t\tMarca A \t Marca B \t Marca C\n");
	
	printf("\t\t %d       \t  %d         \t  %d\n\n", MarcaA, MarcaB, MarcaC);
	
	getch();
}
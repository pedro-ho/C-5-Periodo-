#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int AuxNum;
	
	printf("---- Tabuada ----\n\n");
	printf("Digite um numero: ");
	scanf("%d", &AuxNum);
	
	printf("\n\n\t%d x 1 = %d\n", AuxNum,AuxNum*1);
	printf("\n\n\t%d x 2 = %d\n", AuxNum,AuxNum*2);
	printf("\n\n\t%d x 3 = %d\n", AuxNum,AuxNum*3);
	printf("\n\n\t%d x 4 = %d\n", AuxNum,AuxNum*4);
	printf("\n\n\t%d x 5 = %d\n", AuxNum,AuxNum*5);
	printf("\n\n\t%d x 6 = %d\n", AuxNum,AuxNum*6);
	
	
	
	getch();
}
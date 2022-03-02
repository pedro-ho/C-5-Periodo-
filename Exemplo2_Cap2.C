#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int n1;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &n1);
	
	printf("Tabuada do %d: \n\n", n1);
	printf("\t%d x 1 = %d\n", n1, n1*1);
	printf("\t%d x 2 = %d\n", n1, n1*2);
	printf("\t%d x 3 = %d\n", n1, n1*3);
	printf("\t%d x 4 = %d\n", n1, n1*4);
	printf("\t%d x 5 = %d\n", n1, n1*5);
	printf("\t%d x 6 = %d\n", n1, n1*6);
	printf("\t%d x 7 = %d\n", n1, n1*7);
	printf("\t%d x 8 = %d\n", n1, n1*8);
	printf("\t%d x 9 = %d\n", n1, n1*9);
	printf("\t%d x 10 = %d\n", n1, n1*10);
	
	getch();
	
	
	return 0;
}
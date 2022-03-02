#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int n1;
	
	printf("Digite um numero na base decimal: \n");
	scanf("%d", &n1);
	
	printf("O numero %d na base octal eh: %o\n", n1,n1);
	printf("O numero %d na base hexadecimal eh: %x\n", n1,n1);	
	
	getch();	
	
	return 0;
}
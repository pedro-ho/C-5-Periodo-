#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	
	int Total, Susp, Mort, Conf;
	
	printf("Preencha com as seguintes informacoes sobre a dengue em Varginha: \n");
 	
 	printf("\tCasos suspeitos: \n");
 	scanf("%d", &Susp);
 	
 	printf("\tCasos Confirmados: \n");
 	scanf("%d",&Conf);
 	
 	printf("\tQuantidade de Mortes: \n");
 	scanf("%d", &Mort);
 	
 	printf("\nInformacoes sobre a dengue em Varginha: \n");
 	
 	printf("\tCasos Suspeitos: %d\n",Susp);
 	printf("\tCasos Confirmados: %d\n",Conf);
 	printf("\tQuantidade de Mortes: %d\n",Mort);
 	
 	Total = Susp + Conf + Mort;
 	
 	printf("\tTotal de dados: %d\n",Total);
 	
 	
	
	
	
	
	
	getch();
}

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float x,m,soma;
	char resp;
	resp='s';
	int i;
	i=0;
	soma=0;
	while ((resp=='s')||(resp=='S'))
	{
		i++;
		printf("informe o %d valor: ",i);
		scanf("%f",&x);
		soma=soma+x;
		printf("continuar a leitura? s ou n: ");
		fflush(stdin);
		scanf("%c",&resp);
	}
	m=soma/i;
	printf("\nmedia: %.1f\n",m);
	system("pause");
	return 0;
}


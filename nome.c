#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,n,e;
	char nome[30];
	i=0;
	n=0;
	e=0;
	//scanf("%s",nome);
	gets(nome);
	printf("\n");
	while (nome[i]!='\0')
	{
		while ((nome[i]!=' ') && (nome[i]!='\0'))
		{
			n++;
			i++;
		}
		e++;

		if (e==1)
			printf("%c%d",nome[0],n);
		else
			printf("%c%d",nome[i-n],n);
		n=0;
		i++;
	}
	printf("\n");
	system ("pause");
	return 0;
}

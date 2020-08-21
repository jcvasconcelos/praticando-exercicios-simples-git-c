#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int vet[8],i,rr,ri;
	i=7;
	rr=0;
	scanf("%d",&ri);
	if ((ri>=0) && (ri<256))
	{
		while (i>=0)
		{
			vet[i]=0;
			i--;
		}
		i=7;
		while (ri>=1)
		{
			rr=(ri%2);
			ri=(ri/2);
			vet[i]=rr;
			i--;
		}
		i=0;
		printf("\n\n");
		while (i<8)
		{
			printf("%d",vet[i]);
			i++;
		}
		printf("\n\n");
	}
	else
	printf("\n\n");
	printf("numero invalido\n");
	printf("\n\n");

system ("pause");
return 0;
}


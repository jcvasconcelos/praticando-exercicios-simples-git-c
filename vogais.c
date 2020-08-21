#include <stdio.h>
#include <stdlib.h>
int main ()
{
	char c;
	int v,i;
	i=0;
	v=0;
	while (i<10)
	{
		fflush(stdin);
		scanf("%c",&c);
		if ((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u'))
		v++;
		i++;
	}
	printf("\nvogais: %d consoantes: %d ",v,i-v);
	system("pause");
	return 0;
}

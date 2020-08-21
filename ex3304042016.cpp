#include<stdio.h>
#include<stdlib.h>
#include<math.h>>
int main()
{
	int i, x=0;
	int n;
		
	for (i=0; i<5; i++)
	{
    	printf("Numero? \n");
	    scanf("%d", &n);
		if (n%2!=0) 
		{
			x = x + 1;
		}
	}
	printf("%d numeros impares \n", x);
	system("pause");
return 0;
}

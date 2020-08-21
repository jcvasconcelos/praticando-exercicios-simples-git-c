#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
int main()
{
	int N=0;
     int n;
	int i;
		
	for (i=0; i< 5; i++)
	{
    	printf("Número? \n");
	    scanf("%d", &n);
		if (n% 2 !=0) 
		{
			N = N + 1;
		}
	}
	printf("%d numeros impares \n", N);
	system("pause");
return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	float num, maior, menor;

    	printf("Numero? \n");
	    scanf("%f", &num);
	    maior=num;
	    menor=num;
	
	for (i=0; i<10; i++){
    	printf("Proximo numero? \n");
	    scanf("%f", &num);

		if (num > maior) {
			maior = num;
		}
		if (num < menor){
			menor = num;
		}
	}
	printf("O maior numero eh %f e o menor eh %f: ", maior, menor);
	system("pause");
return 0;
}

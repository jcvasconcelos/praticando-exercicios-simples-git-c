#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main( )
{
	setlocale(LC_ALL, "Portuguese");
	printf("Utilizando caracteres e acentua��o da l�ngua portuguesa!\n\n");
	system("pause");
	return 0;
}

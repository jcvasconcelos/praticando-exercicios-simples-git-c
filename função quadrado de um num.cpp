#include <stdio.h>
/* Função que imprime na tela o quadrado de um número */
square (int x) {
	printf ("O quadrado e %d",(x*x));
}
main () {
	int num;
	printf ("Entre com um numero: ");
	scanf ("%d",&num);
	square(num);
}


#include <stdio.h>
/* Fun��o que imprime na tela o quadrado de um n�mero */
square (int x) {
	printf ("O quadrado e %d",(x*x));
}
main () {
	int num;
	printf ("Entre com um numero: ");
	scanf ("%d",&num);
	square(num);
}


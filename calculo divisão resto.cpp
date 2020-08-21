#include <stdio.h>
#include<stdlib.h>
main ()
{
    int x, y;
    float resultado;
    float resultado2;
    x=10;
    y=3;
    resultado = (float) x/y;
    resultado2 = x%y;

    printf("A divisao de %d por %d e %.1f \n",x,y,resultado);
    printf("O resto da divisao de %d por %d e %.2f\n",x,y,resultado2);
    system("pause");
}


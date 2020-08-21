#include <stdio.h>
#include <stdlib.h>
int main()
{
int n;
printf("Digite o numero: "); /* mostra mensagem na tela */
scanf("%d", &n); /* le informacao do teclado */
if (n>0)
   printf("o numero e positivo ");
     
else
 if(n<0)
   printf("o numero e negativo");
  else
  printf("o numero e nulo");
system("PAUSE");
return 0;
}

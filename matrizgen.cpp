#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int x,y,iy,ix;
	iy=0;
	ix=0;
	x=0;
	y=0;
	printf("valor de X: ");
	scanf("%d",&x);
	printf("valor de Y: ");
	scanf("%d",&y);
	while (iy<y)
	{
	iy++;
	if (ix<x)
	{
	printf("%d ",iy);
	ix++;
	}
	else
	{
	printf("\n %d ",iy);
	ix=1;
	}
}
system("pause");	
	return 0;
}

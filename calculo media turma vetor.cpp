#include <stdio.h>
#include <stdlib.h>
int main()
{
	char vet_nome_aluno [10] [30];
	float vet_mediafinal [10];
	int contador_alunos;
	float acum_media=0, mediaturma;
	for(contador_alunos=0; contador_alunos < 10; contador_alunos++)
	{
		system("cls");
		printf("Informe Nome do Aluno(a) - %d:", contador_alunos+1);
		fflush(stdin);
		gets(vet_nome_aluno[contador_alunos]);
		printf("Informe sua media final:");
		scanf("%f",&vet_mediafinal[contador_alunos]);
		if (vet_mediafinal[contador_alunos] >= 7.0)
		    printf("%s   Voce esta aprovado(a)", vet_nome_aluno[contador_alunos]);
	    else
	    if (vet_mediafinal[contador_alunos] >=5.0)
	       printf("%s Voce esta EM EXAME", vet_nome_aluno[contador_alunos]);
	    else
	       printf("%s Voce esta reprovado(a)",vet_nome_aluno[contador_alunos]);
	       acum_media=acum_media+vet_mediafinal[contador_alunos];
	       //_sleep(1500);
	   }
	   mediaturma=acum_media/contador_alunos;
	   system("cls");
	   printf("\n media da turma: %.2f", mediaturma);
	   for (contador_alunos=0;contador_alunos<10;contador_alunos++)
	   {
	   	if (vet_mediafinal[contador_alunos] > mediaturma)
	   	    printf("\n %s - media: %.2f - Bom Aluno(a)", vet_nome_aluno[contador_alunos],vet_mediafinal[contador_alunos]);
	   	else
	   	  if (vet_mediafinal[contador_alunos] < mediaturma)
			 printf("\n %s - media:%.2f - Aluno(a) com baixo desempenho", vet_nome_aluno[contador_alunos], vet_mediafinal[contador_alunos]);
		  else
		     printf("\n %s - media: %.2f - Aluno(a) medio(a)", vet_nome_aluno[contador_alunos], vet_mediafinal[contador_alunos]);
		 }
		 printf("\n >>>>>");
		 system("pause");
		 return 0;
}
	   
	    

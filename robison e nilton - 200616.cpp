/*
Criar um programa capaz de calcular o tempo entre dois horários quaisquer de um determinado dia.
O programa deve ler dois horários, compostos por três números inteiros, representando horas, minutos e segundos. 
O programa deve verificar se o horário é válido(horas entre 0 e 23, minutos entre 0 e 59, e segundos entre 00 e 59).
O programa deve ter uma função para calcular a quantidade de segundos em um horário, e outra função para calcular e 
imprimir a quantidade de horas, minutos e segundos em uma quantidade de segundos
*/
#include <stdio.h>
#include <stdlib.h>

void converte_horario (int tempo)
{
	
	int horas_seg=3600;
	int horas = (tempo/horas_seg); //resultado da hora
   	int minutos = (tempo -(horas_seg*horas))/60;
   	int segundos = (tempo -(horas_seg*horas)-(minutos*60));
   	printf("A diferenca entre os dois horarios em horas, minutos e segundos: %dh : %dm : %ds \n",horas,minutos,segundos);  	
}

int conversao (int h, int min, int seg)
{
	h *= 60;// minutos
	h *= 60; //segundos
	min *= 60; //segundos
	
	return h+min+seg;
}
 
int verificar_horas (int h)
{
	if ((h>23) || (h <0))
		return 0;
	else
		return 1;	
}

int verificar_minutos (int min)
{
	if ((min>59) || (min <0))
		return 0;
	else
		return 1;	
}

int verificar_segundos (int seg)
{
	if ((seg>59) || (seg <0))
		return 0;
	else
		return 1;	
}


int main ()
{
	int h, min, seg, verificar, total, total1, total2;
	
	while (true)
	{
		printf ("Insira o horario em horas: \n");
		scanf ("%d", &h);
		verificar = verificar_horas (h);
		if (verificar == 1)
		break;
	}
	while (true)
	{
		printf ("Insira o horario em minutos: \n");
		scanf ("%d", &min);
		verificar = verificar_minutos (min);
		if (verificar == 1)
		break;
	}
	
	while (true)
	{
		printf ("Insira o horario em segundos: \n");
		scanf ("%d", &seg);
		verificar = verificar_segundos (seg);
		if (verificar == 1)
		break;
	}
	
	total1 = conversao (h, min, seg);
	printf ("Total em segundos do primeiro horario: %ds\n\n",total1);
	
	while (true)
	{
		printf ("Insira o segundo horario em horas: \n");
		scanf ("%d", &h);
		verificar = verificar_horas (h);
		if (verificar == 1)
		break;
	}
	while (true)
	{
		printf ("Insira o segundo horario em minutos: \n");
		scanf ("%d", &min);
		verificar = verificar_minutos (min);
		if (verificar == 1)
		break;
	}
	
	while (true)
	{
		printf ("Insira o segundo horario em segundos: \n");
		scanf ("%d", &seg);
		verificar = verificar_segundos (seg);
		if (verificar == 1)
		break;
	}
	
	total2 = conversao (h, min, seg);
	printf ("Total do segundo horario em segundos: %ds\n\n",total2);
	
	if (total1 >total2)
	total = total1 - total2;
	else 
	total = total2 - total1;
	
 	converte_horario (total);
 	printf ("A diferenca entre os dois horarios em segundos: %ds", total);  	
}

#include <stdio.h> 
#include <stdbool.h> 
#include <locale.h>
#include <math.h>
int diferenca_horas,diferenca_minutos,diferenca_segundos; 
int para_seg(int hora, int minuto, int segundo) { 
   return (((hora * 60) + minuto) * 60 + segundo); 
} 

void de_seg(int tot_seg) { 
   int h, m, s, tot_segundos;
   char lc_all;
	setlocale (lc_all,"portuguese"); 
   s = tot_seg % 60; 
   tot_seg /= 60; 
   m = tot_seg % 60; 
   h = tot_seg / 60; 
   s = s;
   m = m * 60;
   h = h * 3600;
   tot_segundos = (s+m+h);
   printf("A diferença dos horários em segundos corresponde a: %d \n", tot_segundos); 
} 

bool valida_horario( int hora, int minuto, int segundo) { 
   if (((hora < 0) || (hora > 23)) || ((minuto < 0) || (minuto > 60)) || ((segundo < 0) || (segundo > 60))) 
      return false; 
   else 
      return true; 
} 

int main() { 
   int h1, m1, s1, ts1, h2, m2, s2, ts2,diferenca_horas,diferenca_minutos,diferenca_segundos; 
   char lc_all;
	setlocale (lc_all,"portuguese"); 
   printf("Informe o primeiro horário [hh:mm:ss]: "); 
   scanf("%d:%d:%d", &h1, &m1, &s1); 
   while (!valida_horario(h1, m1, s1)) { 
      printf("Horário inválido. Reinforme o primeiro horário [hh:mm:ss]: "); 
      scanf("%d:%d:%d", &h1, &m1, &s1); 
   } 
   ts1 = para_seg(h1, m1, s1);  
   printf("Informe o segundo horário [hh:mm:ss]: "); 
   scanf("%d:%d:%d", &h2, &m2, &s2); 
   while (!valida_horario(h2, m2, s2)) { 
      printf("Horário inválido. Reinforme o segundo horário [hh:mm:ss]: "); 
      scanf("%d:%d:%d", &h2, &m2, &s2); 
   }
if (h1 > h2)
diferenca_horas = (h1 - h2);
else
diferenca_horas = (h2 - h1);
if (m1 > m2)
diferenca_minutos = (m1 - m2);
else
diferenca_minutos = (m2 - m1);
if (s1 > s2)
diferenca_segundos = (s1 - s2);
else
diferenca_segundos = (s2 - s1);
printf ("A diferença dos horários corresponde a: %d:%d:%d \n", diferenca_horas,diferenca_minutos,diferenca_segundos); 
   ts2 = para_seg(h2, m2, s2); 
   de_seg( ts1 + ts2); 
   return 0; 
}

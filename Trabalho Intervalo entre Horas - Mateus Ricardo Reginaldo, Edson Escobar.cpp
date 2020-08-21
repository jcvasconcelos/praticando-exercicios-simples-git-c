#include <stdio.h> 
#include <stdbool.h> 
#include <stdlib.h>
#include <iostream>

int para_seg(int hora, int minuto, int segundo) { 
   return (((hora*60)+minuto)*60+segundo); 
} 

void de_seg(int tot_seg) { 



   int h, m, s; 

   s = tot_seg % 60; 
   tot_seg /= 60; 
   m = tot_seg % 60; 
   h = tot_seg / 60; 
   printf("\n%.2d:%.2d:%.2d\n", h, m, s); 
} 

bool valida_horario( int hora, int minuto, int segundo) { 
   if (((hora<0) || (hora>23)) || ((minuto<0) || (minuto>60)) || ((segundo<0) || (segundo>60))) 
      return false; 
   else 
      return true; 
} 

int main() { 
   int h1, m1, s1, ts1, h2, m2, s2, ts2; 
   printf("Digite o primeiro horário [horas:minutos:segundos]: "); 
   scanf("%d:%d:%d", &h1, &m1, &s1); 
   while (!valida_horario(h1, m1, s1)) { 
      printf("Horário não válido. Digite novamente o primeiro horario [horas:minutos:segundos]: "); 
      scanf("%d:%d:%d", &h1, &m1, &s1); 
   } 
   ts1 = para_seg(h1, m1, s1); 
   printf("Digite o segundo horário [horas:minutos:segundos]: "); 
   scanf("%d:%d:%d", &h2, &m2, &s2); 
   while (!valida_horario(h2, m2, s2)) { 
      printf("Horário não válido. Digite novamente o segundo horário [horas:minutos:segundos]: "); 
      scanf("%d:%d:%d", &h2, &m2, &s2); 
   } 
   ts2 = para_seg(h2, m2, s2);
   printf("Intervalo entre horários é de: "); 
   de_seg((ts2 > ts1) ? ts2 - ts1 : ts1 - ts2); 
   return 0; 
}

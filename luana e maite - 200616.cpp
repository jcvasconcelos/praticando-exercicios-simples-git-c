#include <stdio.h>   
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <time.h>
#include <stdbool.h>

 int para_seg(int hora, int minuto, int segundo) { 
    return (((hora * 60) + minuto) * 60 + segundo); 
 }

 void de_seg(int tot_seg) { 
    int h, m, s; 
    s = tot_seg % 60; 
    tot_seg /= 60; 
    m = tot_seg % 60; 
    h = tot_seg / 60; 
 printf("\n A DIFERENÇA ENTRE OS HORÁRIOS É:\n");
    printf("\n%.2d:%.2d:%.2d\n", h, m, s); 
    
 } 
 bool valida_horario( int hora, int minuto, int segundo) { 
    if (((hora < 0) || (hora > 23)) || ((minuto < 0) || (minuto > 60)) || ((segundo < 0) || (segundo > 60))) 
       return false; 
    else 
       return true; 
 }

 int main() { 
 setlocale(LC_ALL,"portuguese");
    int h1, m1, s1, ts1, h2, m2, s2, ts2; 
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
    ts2 = para_seg(h2, m2, s2); 
    de_seg((ts2 > ts1) ? ts2 - ts1 : ts1 - ts2); 
    return 0; 
 }

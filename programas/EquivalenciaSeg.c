#include <stdio.h> 

int main()
{
    int semana,dias,horas,minutos,segundos; 

    printf("\nIngrese una cantidad de segundos: ");
    scanf("%d",&segundos); 

    semana = segundos / 604800; 
    dias = segundos / 86400; 
    horas = segundos / 3600; 
    minutos = segundos / 60;
    segundos = segundos % 60; 

    printf("\nsemana(s) = %d",semana);
    printf("\ndia(s)    = %d",dias);
    printf("\nHora(s)   = %d",horas);
    printf("\nmin:seg   = %d:%d\n\n",minutos,segundos);  
 
    return 0;  
}
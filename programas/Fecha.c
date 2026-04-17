#include <stdio.h>

int New_year(int year); 

int main()
{
    int dia,mes,anio,nuevo; 
    printf("Ingrese una fecha: "); 
    scanf("%d, %d, %d",&dia,&mes,&anio);
    nuevo = New_year(anio);  
    printf("%d/%d/%d",dia,mes,nuevo); 
    return 0; 
}

int New_year(int year)
{
    int new; 
    new = year % 100; 
    return new; 
}
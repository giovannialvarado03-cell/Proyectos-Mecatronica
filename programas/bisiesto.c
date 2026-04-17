#include <stdio.h>

int main()
{
    int anio; 
    printf("Ingrese un anio: "); 
    scanf("%d",&anio); 

    if(((anio % 4) == 0) && ((anio % 100) == 0) && ((anio % 400) == 0))
        printf("El anio %d es bisiesto",anio); 
        else
            printf("El anio %d no es bisiesto ",anio); 
    return 0; 
}
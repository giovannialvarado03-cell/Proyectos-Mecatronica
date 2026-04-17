#include <stdio.h>
#include <math.h>

int main()
{
    float radio,area,diametro,log_cir,pi; 
    printf("\nIngres el radio de la circunferencia: "); 
    scanf("%f",&radio); 

    pi= 3.1416; 
    area = pi*(pow(radio,2));
    diametro = 2*radio; 
    log_cir = 2 * pi * radio; 

    printf("\nArea = %.2f",area); 
    printf("\nDiametro = %.2f",diametro);  
    printf("\nLongitud = %.2f",log_cir); 

    return 0; 
}
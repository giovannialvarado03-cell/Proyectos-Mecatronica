#include <stdio.h> 

int main()
{
    float Celsius, Fahrenhei; 

    printf("\nIntroduzca la temperatura en grado Celsius: "); 
    scanf("%f",&Celsius); 

    Fahrenhei = (Celsius*(9.0/5.0))+32.0; 

    printf("La temperatura Celsius de %.1f grado a Fahrenherit = %.1f\n\n",Celsius,Fahrenhei); 


    return 0; 
}
#include <stdio.h> 
#include <math.h>

int main()
{
    float area,volumen,radio,altura,pi;
    pi=3.1416;

    printf("\nIngrese el radio del cilindro: "); 
    scanf("%f",&radio); 
    printf("Ingrese la altura del cilindro: "); 
    scanf("%f",&altura); 

    area = 2*pi*radio*altura; 
    volumen = pi*pow(radio,2)*altura; 
    
    printf("El area de un cilindro de radio %.2f y con altura %.2f = %.2f",radio,altura,area);
    printf("\nEl volumen del cilindro es = %.2f\n\n",volumen); 

    return 0;
}
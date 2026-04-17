#include <stdio.h>
#include <math.h>

int main()
{
    double masa_1, masa_2,distancia, fuerza_atrac,G; 

    printf("\nIngese la masa del cuerpo 1: "); 
    scanf("%lf",&masa_1); 
    printf("Ingrese la masa del cuerpo 2: "); 
    scanf("%lf",&masa_2); 
    printf("Ingrese la distancia de separacion: "); 
    scanf("%lf",&distancia); 

    G = 6.673 * (pow(10,-8));
    fuerza_atrac = (G*masa_1*masa_2)/(pow(distancia,2)); 

    printf("La fuerza de atraccion es de = %lf g . mc/s²\n\n",fuerza_atrac); 
    return 0;
}
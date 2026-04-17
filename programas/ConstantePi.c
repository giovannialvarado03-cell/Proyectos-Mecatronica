#include <stdio.h> 

int main()
{
    float terminos,numerador = 4, denominador = 1;
	float pi=0;
    int operador =1; 
	
	printf("Ingrese el numero de terminos: ");
	scanf("%f",&terminos);
	for (int i=0; i<=terminos; i++)
	{
        pi += operador * (numerador/denominador); 
        denominador += 2;
        operador *= -1; 
        
	}
	printf("El valor aproximado de PI es: %f", pi);

    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c;
    printf("\nIngrese un lado del triangulo: "); 
    scanf("%f",&a);
    printf("Ingrese un segundo lado del triangulo: ");
    scanf("%f",&b); 

    c = pow(a,2)+pow(b,2); 
    c = sqrt(c); 

    printf("\nLa hipotenusa es = %.2f",c); 

    return 0;
}
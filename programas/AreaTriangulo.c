#include <stdio.h> 
#include <math.h>

int main()
{
    float a,b,c,p,area; 
    printf("\nIngrese un lado del triangulo: "); 
    scanf("%f",&a);
    printf("Ingrese el segundo del triangulo: "); 
    scanf("%f",&b); 
    printf("Ingrese el tercer del triangulo: "); 
    scanf("%f",&c);

    p = (a+b+c)/2; 
    area = pow((p*(p-a)*(p-b)*(p-c)),0.5);

    printf("\nEl area del triangulo es = %.2f\n\n",area);     


    return 0; 
}
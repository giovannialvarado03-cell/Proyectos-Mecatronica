#include <stdio.h>
#include <math.h>

int funcion(int x); 

int main()
{
    double x,result; 
    printf("Ingrese un parametro: ");
    scanf("%lf",&x);

    result = funcion(x);  
    printf("R = %.1lf",result); 
}

int funcion(int x)
{
    int result; 
    result = pow(x,5)*(pow(exp(1),2*x)-1); 
    return result;    
}
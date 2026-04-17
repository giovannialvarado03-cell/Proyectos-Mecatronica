#include <stdio.h>
#include <math.h>

float funcion_1(int x,int n); 
float funcion_2(int x,int n); 

int main()
{
    float x,n; 
    float result; 
    printf("Ingrese un parametro para x: "); 
    scanf("%f",&x);
    printf("Ingrese un parametro para n: "); 
    scanf("%f",&n); 

    if(x>0)
    {
        result = funcion_1(x,n); 
        printf("r = %.2f",result);
    }
    else
    {
        result = funcion_2(x,n); 
        printf("r = %.2f",result);
    }

    return 0; 
}

float funcion_1(int x,int n)
{
    float result; 
    result = x + ((pow(x,n))/n) - ((pow(x,n+2))/(n+2)); 
    return result;   
}
float funcion_2(int x,int n)
{
    float result; 
    result = pow(x,(n+1))/(n+1) - pow(x,(n-1))/(n-1); 
    return result;  
}
#include <stdio.h>
#include <math.h>

//PROTOTIPO DE LA FUNCION
float Area_T(float a,int b, int c); 

int main()
{
    float a,b,c,area; 
    printf("\nIngrese los tres lados del triangulo (a,b,c): "); 
    scanf("%f,%f,%f",&a,&b,&c);

    area = Area_T(a,b,c);
    // LLAMADA A LA FUNCION  
    printf("result = %.1f\n\n",area); 
    return 0; 
}

//FUNCION 
float Area_T(float a,int b, int c)
{
    float p,area; 
    p = (a+b+c)/2; 
    area = sqrt(p*(p-a)*(p-b)*(p-c));
    return area;  
}
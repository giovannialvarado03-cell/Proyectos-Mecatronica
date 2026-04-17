#include <stdio.h>
#include <math.h>
#define pi 3.1416

void funciones_Trigonometricas(float angulo); 

int main()
{
    float angulo; 
    printf("\nIngrese un angulo: "); 
    scanf("%f",&angulo); 
    angulo = angulo * pi/180; 
    funciones_Trigonometricas(angulo); 
    return 0; 
}

void funciones_Trigonometricas(float angulo)
{
    float sen,cosen,tang;
    double arcos,arsin,artan;
    sen = sin(angulo); 
    cosen = cos(angulo);
    tang = tan(angulo);
    arcos = acos(angulo); 
    arsin = asin(angulo); 
    artan = acos(angulo); 
    printf("\nSeno = %.2f",sen); 
    printf("\nCoseno = %.2f",cosen); 
    printf("\nTangente = %.2f",tang); 
    printf("\nArco seno = %f",arsin); 
    printf("\nArco coseno = %f",arcos); 
    printf("\nArco tangente = %f\n\n",artan); 
}
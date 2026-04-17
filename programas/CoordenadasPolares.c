#include <stdio.h>
#include <math.h>
#define PI 3.1416


float print_x(float radio, float a); 
float print_y(float radio, float a); 


int main()
{ 
    float radio,x,y,angulo; 
    printf("\n\nIngrese la coordenada polar (radio, angulo): "); 
    scanf("%f,%f",&radio,&angulo);   

    x = print_x(radio,angulo); 
    y = print_y(radio,angulo);

    printf("\nCoordenada rectangular = (%.2f,%.2f)\n\n",x,y); 

    return 0; 
} 

float print_x(float radio, float a)
{
    float result,rad;
    rad = a * PI / 180;
    result = radio * (cos(rad));  
    return result; 

}
float print_y(float radio, float a)
{
    float result,rad;
    rad = a * PI / 180;
    result = radio * (sin(rad));  
    return result; 
}
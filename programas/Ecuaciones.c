#include <stdio.h>
#include <stdio.h>

int main()
{
    int x,y,a,b,c,d,e,f,frac; 

    printf("\nIntroduzca los valores para (a,b,c): "); 
    scanf("%d,%d,%d",&a,&b,&c); 
    printf("Introduzca los valores para (d,e,f): "); 
    scanf("%d,%d,%d",&d,&e,&f); 


    x = (c*e-b)/(a*e-b*d);
    y = (a*f-b)/(a*e-b*d);  

    printf("\nEl resultado de x = %d",x); 
    printf("\nEl resultado de y = %d\n\n",y); 

    return 0; 
}
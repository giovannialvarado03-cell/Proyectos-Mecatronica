#include <stdio.h> 
#include <math.h>

int Progrecion(int x,int n); 
int pot(int x, int n); 

int main()
{
    int number_x,number_n,result = 0,i; 
    printf("Ingrese dos numeros (x,n): ");
    scanf("%d,%d",&number_x,&number_n); 
    result = Progrecion(number_x,number_n); 
    printf("r = %d",result); 
    return 0; 
}

int Progrecion(int x,int n)
{
    int result = 0;
    n = pot(x,n);  
    result = result + 1 + n; 
    return result; 
}

int pot(int x, int n)
{
    int p = 0; 
    for(int i= 1; i<= n; i++)
    {
        p = p + pow(x,i);  
    }
    return p;  
}
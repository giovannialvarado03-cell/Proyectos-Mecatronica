#include <stdio.h>
#define MAX_NUM 30

void get_number(int number[],int size); 
void invierte(int number[],int invertido[],int size); 
void print_array(int invertido[], int size); 

int main()
{
    int number[MAX_NUM],invertido[MAX_NUM],tam;
    printf("Cuantos numeros desea ingresar: "); 
    scanf("%d",&tam);  
    get_number(number,tam); 
    invierte(number,invertido,tam);
    printf("\n");  
    print_array(invertido,tam); 
}

void get_number(int number[],int size)
{
    int x =1; 
    for( int i = 0; i< size; i++)
    {
        printf("Number %d: ",x++);
        scanf("%d",&number[i]);  
    }
}

void invierte(int number[],int invertido[],int size)
{
    int j = size-1; 
    for(int i = 0; i < size; i++)
    {
        invertido[i] = number[j--] ;  
    }
}

void print_array(int invertido[], int size)
{
    int x = 1,i; 
    for( i = 0; i<size ; i++)
    {
        printf("Numero %d: %d\n",x++,invertido[i]); 
    }
}
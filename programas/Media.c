#include <stdio.h> 
#include <math.h>
#define MAX_T 50 

void get_arreglo(float array[],int tam); 
int media(float array[], int tam); 
int varianza(float array[],float media,int tam); 
int desviacion(float var); 

int main()
{
    float arreglo[MAX_T],med,var,des; 
    int tam; 
    printf("Cuantos numeros desea ingresar: "); 
    scanf("%d",&tam); 
    get_arreglo(arreglo,tam);
    med = media(arreglo,tam); 
    printf("La media es de: %.2f",med);
    var = varianza(arreglo,med,tam); 
    printf("\nLa varianza es de: %.2f",var); 
    des = desviacion(var); 
    printf("\nLa desviacion estandar es: %.2f",des); 
    return 0; 
}

void get_arreglo(float array[],int tam) 
{
    int x = 1; 
    for(int i = 0; i<tam; i++)
    {
        printf("Numero %d: ",x++); 
        scanf("%f",&array[i]);
    } 
}

int media(float array[], int tam)
{
    float suma = 0.0,media; 
    for(int i = 0; i<tam; i++)
    {
        suma = suma+ array[i];
        media = suma/tam; 
    } 
    return media; 
}

int varianza(float array[],float media,int tam)
{
    float varianza = 0.0, rango;
    for(int i = 0;i <tam ; i++)
    {
        rango = pow(array[i]-media, 2); 
        varianza = varianza + rango; 
    } 
    return varianza; 
}

int desviacion(float var)
{
    float desviacion = sqrt(var); 
    return desviacion; 
}
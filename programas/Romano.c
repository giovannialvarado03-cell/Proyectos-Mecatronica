#include <stdio.h>
#include <string.h>

int print_entero(char [],int); 

int main()
{
    char numero[10];
    int suma, tam;
    printf("\nIngrese un numero : ");
    scanf("%s", &numero);
    tam = strlen(numero);
    suma = print_entero(numero,tam); 
    printf("Numeracion arabiga: %d\n\n", suma);
    return 0;
}

int print_entero(char numero[],int tam)
{
    int suma = 0; 
    for (int i = 0; i < tam; i++)
    {
        if (numero[i] == 'M')
            suma = suma + 1000;
        if (numero[i] == 'C' && numero[i+1] == 'M')
        {
            suma = suma + 900;
            i = i+1; 
        }
        if(numero[i] == 'D')
            suma = suma + 500;
        if(numero[i] == 'C' && numero [i+1]== 'D')
        {
            suma = suma + 400; 
            i++; 
        }
        if(numero[i]== 'C')
            suma = suma + 100; 
        if(numero[i]== 'X' && numero[i+1]== 'C')
        {
            suma = suma + 90;
            i++;  
        }
        if(numero[i]== 'L')
            suma = suma + 50; 
        if(numero[i]== 'X' && numero[i+1] == 'L')
        {
            suma = suma + 40; 
            i++; 
        }
        if(numero[i]== 'X')
            suma = suma + 10; 
        if(numero[i]== 'I' && numero[i+1]== 'X')
        {
            suma = suma + 9; 
            i++; 
        }
        if(numero[i]== 'V')
            suma = suma + 5;
        if(numero[i]== 'I' && numero[i+1]=='V')
        {
            suma = suma + 4; 
            i++; 
        }
        if(numero[i]== 'I')
            suma = suma + 1; 
    }
    return suma; 
}

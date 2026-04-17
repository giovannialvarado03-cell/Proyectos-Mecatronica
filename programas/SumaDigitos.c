#include <stdio.h> 

int Suma_Digitos(int numero); 
void Multiplo_S_N(int suma); 

int main()
{
    int num,suma_1;  
    printf("Ingrese un numero: "); 
    scanf("%d",&num); 

    suma_1 = Suma_Digitos(num);
    printf("La suma de digitos es de %d ",suma_1); 
    Multiplo_S_N(suma_1);

    return 0; 
}

int Suma_Digitos(int numero)
{
    int suma = 0; 
    while (numero > 0)
    { 
        suma = suma + (numero % 10);  
        numero = numero / 10;  
    }
    return suma;  
}

void Multiplo_S_N(int suma)
{
    if(suma % 3 == 0)
        printf("Es multiplo"); 
        else
            printf("No es multiplo"); 
}

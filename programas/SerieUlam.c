#include <stdio.h>

void Imprime_Serie(int numero); 

int main()
{
    int numero,result,aux;
    printf("Ingrese un numero: ");
    scanf("%d",&numero);
    Imprime_Serie(numero); 
    return 0; 
}

void Imprime_Serie(int numero)
{
    while (numero > 1 )
    {
        printf("%d ",numero);
        if(numero % 2 == 0)
        {
            numero= numero/2;
        }
        else
        {
            numero = (numero * 3)+1; 
        }
        if (numero == 1)
                printf("%d", numero);
    }

}
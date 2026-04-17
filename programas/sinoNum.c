#include <stdio.h>
int main()
{
    int Numero;
    printf("\nIngrese el numero: ");
    scanf("%d",&Numero);
    if (Numero>=0){
        printf("Signo Positivo");
    }
    else
    printf("signo negativo");
    return 0; 
}
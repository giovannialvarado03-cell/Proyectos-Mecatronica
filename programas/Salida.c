#include <stdio.h>

void Imprime_Salida(int numero); 

int main()
{
    int i,c,num,j;
    printf("Ingrese un numero: ");
    scanf("%d",&num);
    Imprime_Salida(num); 
    return 0;
}

void Imprime_Salida(int numero)
{
    int i,c,j = 1; 
    for(i=1; i<=numero ; i++){
        for(c=0; c<i; c++,j++)
            printf("%d ",j);
        printf("\n");
        j-=i; 
    }
    for(i=numero-1; i > 0 ; i--){
        for(c=0; c<i; c++,j++)
            printf("%d ",j);
        printf("\n");
        j -=i;
    }
}
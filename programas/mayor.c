#include <stdio.h> 

int main()
{
    int number1,number2,number3; 

    printf("Ingrese tres numeros enteros: "); 
    scanf("%d %d %d",&number1,&number2,&number3); 

    if(number1>number2 && number3<number1)
        printf("El mayor es: %d",number1); 
        else 
            if(number2>number1 && number2>number3)
                printf("El mayor es: %d",number2); 
                else
                    printf("El mayor es: %d",number3);
    return 0; 
}
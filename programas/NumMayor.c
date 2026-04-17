#include <stdio.h> 

int main()
{
    int num_1,num_2; 

    printf("Introduzca dos numeros: "); 
    scanf("%d %d",&num_1,&num_2); 

    
    if(num_1>num_2)
        printf("El mayor es: %d",num_1); 
        else
            printf("El mayor es: %d",num_2); 

    return 0; 
}
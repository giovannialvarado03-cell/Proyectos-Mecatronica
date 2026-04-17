#include <stdio.h>

int main()
{
    int num;
    printf("\nIngrese un numero: "); 
    scanf("%d",&num); 

    while ( num > 0)
    {
        if(num % 2 == 0 )
        {
            printf("Ingrese un numero: "); 
            scanf("%d",&num); 
        }
        else
        {
            printf("El numero es primo\n\n");
            break; 
        }
    }
    
    return 0;
}
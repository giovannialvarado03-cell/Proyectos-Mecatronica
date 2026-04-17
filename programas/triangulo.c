#include <stdio.h>

int main()
{
    int i,c,num;
    printf("Ingrese un numero: ");
    scanf("%d",&num);
    for(i=1; i<=num ; i++){
        for(c=0; c<i; c++)
            printf("*");
        printf("\n");
    }
    return 0;
}
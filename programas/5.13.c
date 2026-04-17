#include <stdio.h>

int main()
{
    int i,c,num,j;
    printf("Ingrese un numero: ");
    scanf("%d",&num);
    j=1; 
    for(i=1; i<=num ; i++){
        for(c=0; c<i; c++,j++)
            printf("%d ",j);
        printf("\n");
        j-=i; 
    }
    for(i=num-1; i > 0 ; i--){
        for(c=0; c<i; c++,j++)
            printf("%d ",j);
        printf("\n");
        j -=i;
    }
    return 0;
}
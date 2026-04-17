#include <stdio.h>

int main()
{
    int numero,A,B,C,D; 

    printf("\nIngrese un numeRo de 4 digitos\n");
    printf("A :"); 
    scanf("%d",&A);
    printf("B :"); 
    scanf("%d",&B);
    printf("C :"); 
    scanf("%d",&C);
    printf("D :"); 
    scanf("%d",&D); 

    if(B==9)
    {
        A++;
        B =0;
        C =0;
        D = 0;
        printf("Redon = %d%d%d%d",A,B,C,D);
    }
    if(C>5)
    { 
        C=0; 
        D=0; 
        B++; 
        printf("Redon = %d%d%d%d",A,B,C,D);
    }
    else 
    {
        if(C<5)
        {
            C = 0; 
            D = 0;
        }
        printf("Redon = %d%d%d%d",A,B,C,D);
    }
    return 0;
}
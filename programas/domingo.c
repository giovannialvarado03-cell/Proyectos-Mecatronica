#include <stdio.h>

int main()
{
    int anio, A,B,C,D,E,N; 
    printf("Ingrese un anio: "); 
    scanf("%d",&anio);

    A=anio % 19; 
    B = anio % 4; 
    C = anio % 7; 
    D = (19*A + 24 ) % 30; 
    E = (2 *B + 4 * C + 6 *D +5) % 7; 
    N = (22 + D + E); 

    if(N <= 31)
        printf("Es el %d de marzo",N); 
        else 
            if(N > 31)
                printf("Es el %d de abril",N-31); 

    return 0; 
}
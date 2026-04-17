#include <stdio.h>

long fibonacciRecursivo(long posicion); 

int main()
{
    long n; 
    printf("\nIngrese un numero: "); 
    scanf("%ld",&n); 
    printf("Serie Fibonacci: "); 
    for(long i = 0; i<= n; i++)
    {
        long res; 
        res = fibonacciRecursivo(i); 
        printf("%ld ", res);
    }
    printf("\n\n"); 
    return 0;  
}

long fibonacciRecursivo(long posicion) {
    if (posicion < 2)
        return posicion;
    return fibonacciRecursivo(posicion - 1) + fibonacciRecursivo(posicion - 2);
}
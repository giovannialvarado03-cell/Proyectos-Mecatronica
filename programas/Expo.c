#include<stdio.h>
int main(){
    int n,fact;
    float x,expo,pot;
    printf("Ingrese el valor de X: ");
    scanf("%f",&x);
    expo=1;
    pot=1;
    fact=1;
    for(n=1;n<=12;n++){
        pot=pot*x;
        fact=fact*n;
        expo=expo+(pot/fact);
    }
    printf("El exponencial de %.0f es: %f ",x,expo);
    return 0;
}
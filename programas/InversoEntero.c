#include <stdio.h>

void Invierte(int number); 

int main()
{
    int numero; 
    printf("\nIngrese un numero: "); 
    scanf("%d",&numero);  
    Invierte(numero); 
    return 0; 
}

void Invierte(int number)
{
    int resto,invertido=0; 
    while(number!=0)
      {
          resto=number%10;
          number=number/10;
          invertido=invertido*10+resto;
       }
    printf("%d \n\n",invertido);
}
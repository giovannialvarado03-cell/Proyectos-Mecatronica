#include <stdio.h> 

int main()
{
    int num_1,num_2,resultado; 
    char caracter;

    printf ("\nIngrese una operacion: "); 
    scanf( "%d %c %d",&num_1,&caracter,&num_2); 
 
    
    switch ( caracter)
    {
    case '+' : resultado = num_1 + num_2; 
        break;
    case '-' : resultado = num_1 - num_2; 
        break;
    case '*' : resultado = num_1 * num_2; 
        break;
    case '/' : resultado = num_1 / num_2; 
        break;
    case '%' : resultado = num_1 % num_2; 
        break;
    } 
    printf("%d %c %d = %d\n\n",num_1,caracter,num_2,resultado);

    return 0;

}
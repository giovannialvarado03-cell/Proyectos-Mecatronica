#include <stdio.h>

int main(){
    float num1,num2,res; 
    char caracter; 
    printf("Ingrese operacion: "); 
    scanf("%f %c %f",&num1,&caracter,&num2); 

    switch (caracter)
    {
    case '+':
        res=num1+num2; 
        break;
    case '-' :
        res=num1-num2; 
        break;
    case '*' :
        res=num1*num2; 
        break;
    case 'd' :
        res=num1 / num2; 
        break;
    default:
        break;
    }
    printf("= %.2f",res); 

    return 0; 
}
#include <stdio.h>

int main()
{
    int salario,aumento,suma;
    suma = 0; 

    do
    {
        printf("\nIngrese el salario actual (-1 para terminar): "); 
        scanf("%d",&salario);


        if((salario >= 0) && (salario <= 9000) )
        {
            aumento = (salario / 100) * 20;
            suma = salario + aumento; 
            printf("\nEl salario nuevo es de: %d\n",suma);
        }
        if((salario >= 9001) && (salario <= 15000))
        { 
            aumento = (salario / 100)*10; 
            suma = salario + aumento; 
            printf("\nEl salario nuevo es de: %d\n",suma);
        }
        if((salario >= 15001) && (salario <= 20000))
        {
            aumento = (salario/100)*5;
            suma = salario + aumento; 
            printf("\nEl salario nuevo es de: %d\n",suma);
        }
        if((salario >= 20001))
        {
            aumento = 0;
            suma = salario + aumento; 
            printf("\nEl salario nuevo es de: %d\n",suma); 
        } 
    }while(salario != -1); 
    return 0; 
}
#include <stdio.h>

int main()
{
    int nums,i,num1,num2=0,may=0,men,j,sum=0;
    float media;
    printf("MEDOA, NUMERO MAYOR Y NUMERO MENOR");
    printf("\n\nCuantos numeros quiere sumar?");
    scanf("%d",&nums);

    for(i=0;i<nums;i++)
    {
        printf("Escriba el numero: ");
        scanf("%d",&num1);
        if(num1>may)
        {
            may=num1;
        }   
        if(num1<may)
        {
            men=num1;
        }   
        j=num1;
        sum=j+sum;      
    }
    media=sum/i;
    printf("\nLa media es:%.2f",media);
    printf("\nEl numero mayor es:%d",may);
    printf("\nEl numero menor es:%d",men);
    return 0; 
}
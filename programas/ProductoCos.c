#include <stdio.h>

int main()
{
    int num_1,num_2,producto,cociente,resto; 

    printf("\nIntroduzca dos enteros: "); 
    scanf("%d %d",&num_1,&num_2); 

    producto = num_1*num_2; 
    cociente = num_1/num_2; 
    resto = num_1%num_2; 

    printf("\n%d x %d = %10d",num_1,num_2,producto); 
    printf("\n%d / %d = %10d",num_1,num_2,cociente);
    printf("\n%d mod %d = %8d",num_1,num_2,resto);  

    return 0;
}
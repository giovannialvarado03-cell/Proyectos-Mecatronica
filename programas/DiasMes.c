#include <stdio.h>

int main()
{ 
    int mes,anio,bisiesto; 
    printf("\nIngrese el numer del mes (1-12): "); 
    scanf("%d",&mes);
    printf("Ingrese el anio: "); 
    scanf("%d",&anio); 

    bisiesto = 0;

    if((anio % 4 == 0) || (anio % 100 == 0) && (anio % 400 == 0))
        bisiesto++;  
    switch (mes)
    {           
    case 1:
    case 3:
    case 5:
    case 7: 
    case 8:
    case 10: 
    case 12: printf("El mes tiene 31 dias"); 
        break;
    case 2: if(bisiesto == 1 ){
            printf("El mes tiene 29 dias"); 
            }else{
                if(bisiesto == 0)
                    printf("El mes tiene 28 dias."); 
            }
        break;
    case 4: 
    case 6: 
    case 9:
    case 11: printf("El mes tiene 30 dias"); 
    
    default:
        break;
    }
    printf("\n\n"); 
    return 0; 
}
#include <stdio.h> 
#include <string.h> 

void print_Dias(int mes,int anio); 
void print_dia(char in[]); 

int main()
{
    char Iniciales[20]; 
    int op = 0,mes,anio; 
    while (op <= 0 || op >= 3 )
    {
        printf("\t*** Menu *** "); 
        printf("\n1.Dia de la semana.\n2.Dias de un mes.\nOpcion: "); 
        scanf("%d",&op); 
    }
    if(op == 1)
    {
        print_dia(Iniciales);  
    }
    if(op == 2)
    {
        printf("Ingrese una fecha (mes,anio): "); 
        scanf("%d,%d",&mes,&anio); 
        print_Dias(mes,anio); 
    }
    return 0; 
}

void print_dia(char in[])
{
    char ini[50]; 
    printf("Ingrese la primera inicial: "); 
    scanf("%s",&ini);  
    for(int i= 0; i<2 ; i++)
    {
        if(ini[i] =='L' || ini[i]== 'l')
        {
            printf("Lunes");
            i++;
        } 
        if((ini[i] =='M' && ini[i+1] == 'A') || (ini[i]== 'm' && ini[i+1]== 'a'))
        {
            printf("Martes");
            i++;
        }
        if((ini[i] =='M' && ini[i+1] == 'I') || (ini[i]== 'm' && ini[i+1] == 'i'))
        {
            printf("Miercoles");
            i++;
        }
        if(ini[i] =='J' || ini[i]== 'j')
        {
            printf("Jueves");
            i++;
        }
        if(ini[i] =='V' || ini[i]== 'v')
        {
            printf("Viernes");
            i++;
        }
        if(ini[i] =='S' || ini[i]== 's')
        {
            printf("Sabado");
            i++;
        }
        if(ini[i] =='D' || ini[i]== 'd')
        {
            printf("Domingo");
            i++;
        }
    } 
}


void print_Dias(int mes,int anio)
{
    int bisiesto = 0;
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
}

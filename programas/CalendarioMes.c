#include <stdio.h>


int Bisiesto(int a); 
int Max_dia(int mes,int anio, int b);
void print_calendario(int,int,int,int); 
int zeller(int anio, int mes); 
void Imprime_mes(int mes); 


int main()
{
    int mes, anio, limite,bis, z;
    printf("Ingrese un mes: "); 
    scanf("%d",&mes); 
    printf("Ingrese un anio: "); 
    scanf("%d",&anio); 
    
    bis = Bisiesto(anio); 
    limite = Max_dia(mes, anio, bis); 
    z = zeller(anio,mes);
    
    printf("\n"); 
    Imprime_mes(mes); 
    printf(" %d \n",anio); 
    printf("\nLU      MA      MI      JU      VI      SA      DO\n"); 
    print_calendario(mes,anio,limite,z); 
    printf("\n\n"); 
    return 0; 
}

int Bisiesto(int a)
{
    if(a % 4 == 0 || a % 100 == 0 && a % 400 == 0 )
        return 1; 
    else 
        return 0; 
}
void Imprime_mes(int mes)
{
    switch (mes)
    {
    case 1:printf("\t\tenero"); 
        break;
    case 2:printf("\t\tfebrero"); 
        break;
    case 3:printf("\t\tmarzo"); 
        break; 
    case 4:printf("\t\tabril"); 
        break;
    case 5:printf("\t\tmayo"); 
        break;
    case 6:printf("\t\tjunio"); 
        break;
    case 7:printf("\t\tjulio"); 
        break;
    case 8:printf("\t\tagosto"); 
        break;
    case 9:printf("\t\tseptiembre"); 
        break;
    case 10:printf("\t\toctubre"); 
        break;
    case 11:printf("\t\tnoviembre"); 
        break;
    case 12:printf("\t\tdiciembre"); 
        break;
    
    default:
        break;
    }
}

int Max_dia(int mes,int anio, int b)
{ 
    switch (mes)
    {           
    case 1:
    case 3:
    case 5:
    case 7: 
    case 8:
    case 10: 
    case 12: return 31; 
        break;
    case 2: if(b == 1)
                return 29; 
                else 
                    return 28; 
        break;
    case 4: 
    case 6: 
    case 9:
    case 11: return 30; 
    
    default:
        break;
    }
}

void print_calendario(int anio ,int mes, int limit,int z)
{
    int i, j, k;
    z-=1; 
    for(k = 0; k < z ; k++)
    {
        printf("\t"); 
    }  
    for(i = 1; i<= limit ; i++)
    {
        printf("%d\t",i);
        z++; 
        if(z % 7 == 0) 
            printf("\n");
    }
}

int zeller(int anio, int mes)
{
    int a = (14-mes)/12; 
    int y = anio - a; 
    int m = mes + 12 * a - 2; 
    int dia = 1, d; 
    d = (dia + y + y / 4 -y / 100 + y/ 400 + (31 *m))/12 % 7;
    return d;   
}

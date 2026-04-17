#include <stdio.h>

int Bisiesto(int a); 
int Max_dia(int mes,int anio, int b); 
int Dia_siguiente(int dia,int mes, int anio, int limite3); 
int Mes_s(int dia, int mes, int anio, int limite2);
int Anio_Sig(int dia, int mes, int anio, int limite);  
void Imprime_mes(int mes); 

int main()
{
    int mes,dia, anio, bisiesto,Limit_dia,DiaSig,MesSig,AnioS; 
    printf("\nDia: "); scanf("%d",&dia);
    printf("Mes: "); scanf("%d",&mes); 
    printf("Anio: "); scanf("%d",&anio);  

    bisiesto = Bisiesto(anio);
    Limit_dia = Max_dia(mes,anio,bisiesto); 
    DiaSig = Dia_siguiente(dia,mes,anio,Limit_dia);
    MesSig = Mes_s(dia,mes,anio,Limit_dia);
    AnioS = Anio_Sig(dia, mes, anio, Limit_dia);  

    printf("%d ",DiaSig); 
    Imprime_mes(MesSig);
    printf(" %d\n\n",AnioS);     
    return 0; 

}

int Bisiesto(int a)
{
    if(a % 4 == 0 || a % 100 == 0 && a % 400 == 0 )
        return 1; 
    else 
        return 0; 
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

int Dia_siguiente(int dia,int mes, int anio,int limite3)
{
    switch (mes)
    {           
    case 1:
    case 3:
    case 5:
    case 7: 
    case 8:
    case 10: 
    case 12:if(dia < limite3)
                return dia = dia + 1;
                else 
                    return dia = 1; 
        break;
    case 2:if(dia < limite3)
                return dia = dia + 1;
                else 
                    return dia = 1;
        break;
    case 4: 
    case 6:  
    case 9:
    case 11:if(dia < limite3)
                return dia = dia + 1;
                else 
                    return dia = 1; 
    default:
        break;
    }
}

int Mes_s(int dia, int mes, int anio,int limite2)
{   
    switch (mes)
    {           
    case 1:
    case 3:
    case 5:
    case 7: 
    case 8:
    case 10:if(dia < limite2)
                return mes;
                else 
                    return mes+1;
        break; 
    case 12:if(dia < limite2)
                return mes;
                else 
                    return mes-11;  
        break;
    case 2:if(dia < limite2)
                return mes;
                else 
                    return mes + 1;
        break;
    case 4: 
    case 6:  
    case 9:
    case 11:if(dia < limite2)
                return mes;
                else 
                    return mes + 1; 
    default:
        break;
    }
    
}

int Anio_Sig(int dia, int mes, int anio, int limite)
{ 
    if (mes>0 && mes<12)
        return anio; 
    if(mes == 12 && dia < limite )
        return anio; 
        else
            return anio+1;
}

void Imprime_mes(int mes)
{
    switch (mes)
    {
    case 1:printf("enero"); 
        break;
    case 2:printf("febrero"); 
        break;
    case 3:printf("marzo"); 
        break; 
    case 4:printf("abril"); 
        break;
    case 5:printf("mayo"); 
        break;
    case 6:printf("junio"); 
        break;
    case 7:printf("julio"); 
        break;
    case 8:printf("agosto"); 
        break;
    case 9:printf("septiembre"); 
        break;
    case 10:printf("octubre"); 
        break;
    case 11:printf("noviembre"); 
        break;
    case 12:printf("diciembre"); 
        break;
    
    default:
        break;
    }
}
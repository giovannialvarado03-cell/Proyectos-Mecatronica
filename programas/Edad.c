#include <stdio.h> 

int main()
{
    int dia_a,mes_a,anio_a; 
    int dia_n,mes_n,anio_n; 
    int edad; 

    printf("Ingrese su fecha de nacimiento (00/00/0000): "); 
    scanf("%d/%d/%d",&dia_n,&mes_n,&anio_n); 
    printf("Ingrese la fehca actual:(00/00/0000): ");
    scanf("%d/%d/%d",&dia_a,&mes_a,&anio_a); 

    edad = anio_a - anio_n; 

    if(mes_n > mes_a)
        edad = edad - 1; 
        else if(dia_n == dia_a)
            {
                if(mes_n == mes_a)
                    edad--; 
            }
        else if (dia_n == dia_a)
            {
                printf("Feliz cumpleanios: "); 
            }
            printf("Tu edad actual es: %d",edad); 
    return 0; 
}
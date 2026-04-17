#include <stdio.h>
#include <math.h>

#define MAX_REN 50
#define MAX_COL 6

void print_grades(float **,int,int);
void get_grades(float **, int,int);
float max_grade(float **, int,int);
float men_grade(float **, int size,int);
float promedio(float **, int size,int);
float Desviacion_Estandar(float **, int size,int);
void promedio_final(float **,int);
void print_alumno(float **,int alumno);

int main()
{
    const int max_studens = 50;
    int number = 0, op = 0, op2 = 0, alumno;
    float  **matriz,prom[max_studens];
    while (number <= 0 || (number >= 50))
    {
        printf("Ingrese el numero de estudiantes: ");
        scanf("%d", &number);
    }
    while (op <= 0 || op >= 5)
    {
        printf("Menu:\n1.Captura calificacion.\n2.Imprimir calificacion.\n3.Imprimir calificacion alumno.\n4.Salir.\nOpcion: ");
        scanf("%d", &op);
        printf("\n");
        if (op == 1)
        {
            while (op2 <= 0 || op2 >= 6)
            {
                printf("\n*** CAPTURA CALIFICACIONES ***\n");
                printf("Menu:\n1.Calificaciones 1er parcial\n");
                printf("2.Calificaciones 2do parcial.\n3.Calificaciones 3er parcial.\n4.Ordinario\n5.salir.\nOpcion: ");
                scanf("%d", &op2);
            }
            if (op2 == 1)
            {
                printf("\nCalificaciones del 1er parcial:\n");
                get_grades(matriz, number,1);
                printf("\nCalificacion maxima: %.1f\n", max_grade(matriz, number,1));
                printf("Calificacion minima: %.1f\n", men_grade(matriz, number,1));
                printf("El promedio es de: %.1f\n", promedio(matriz, number,1));
                printf("La desviacion estandar es de: %f\n\n", Desviacion_Estandar(matriz, number,1));
            }
            if (op2 == 2)
            {
                printf("\nCalificaciones del 2do parcial:\n");
                get_grades(matriz,number,2);
                printf("\nCalificacion maxima: %.1f\n", max_grade(matriz, number,2));
                printf("Calificacion minima: %.1f\n", men_grade(matriz, number,2));
                printf("El promedio es de: %.1f\n", promedio(matriz, number,2));
                printf("La desviacion estandar es de: %f\n\n", Desviacion_Estandar(matriz, number,2));
            }
            if (op2 == 3)
            {
                printf("\nCalificaciones del 3er parcial:\n");
                get_grades(matriz, number,3);
                printf("\nCalificacion maxima: %.1f\n", max_grade(matriz, number,3));
                printf("Calificacion minima: %.1f\n", men_grade(matriz, number,3));
                printf("El promedio es de: %.1f\n", promedio(matriz, number,3));
                printf("La desviacion estandar es de: %f\n\n", Desviacion_Estandar(matriz, number,3));
            }
            if (op2 == 4)
            {
                printf("\nCalificaciones del Ordinario:\n");
                get_grades(matriz, number,4);
                printf("\nCalificacion maxima: %.1f\n", max_grade(matriz, number,4));
                printf("Calificacion minima: %.1f\n", men_grade(matriz, number,4));
                printf("El promedio es de: %.1f\n", promedio(matriz, number,4));
                printf("La desviacion estandar es de: %f\n\n", Desviacion_Estandar(matriz, number,4));
            }
            if(op2 == 5)
                return 0;
        }
        if(op == 2)
        {
            while (op2 <= 0 || op2 >= 6)
            {
                printf("*** IMPRIME CALIFICACIONES ***");
                printf("\nMenu:\n1.Primer parcial.\n2.Segundo parcial.\n3.Tercer parcial.\n4.Ordinario.\n5.Promedio.\n6.Salir.\nOpcion: ");
                scanf("%d",&op2);
            }
            if(op2 == 1)
            {
                printf("\nCalificaciones del 1er paracial:\n\n");
                print_grades(matriz,number,1);
                printf("\n");
            }
            if(op2 == 2)
            {
                printf("\nCalificaciones del 2do paracial:\n\n");
                print_grades(matriz,number,2);
                printf("\n");
            }
            if(op2 == 3)
            {
                printf("\nCalificaciones del 3er paracial:\n\n");
                print_grades(matriz,number,3);
                printf("\n");
            }
            if(op2 == 4)
            {
                printf("\nCalificaciones del ordinario:\n\n");
                print_grades(matriz,number,4);
                printf("\n");
            }
            if(op2 == 5)
            {
                printf("\nPromedio del semestre:\n\n");
                promedio_final(matriz,number);
                print_grades(matriz,number,5);
                printf("\n");
            }
            if(op2 == 6)
                return 0;
        }
        if(op == 3)
        {
            printf("*** IMPRIME CALIFICACIONES DE UN ESTUDIANTE ***");
            printf("\nIngre el numero de lista: ");
            scanf("%d",&alumno);
            promedio_final(matriz,number);
            print_alumno(matriz,alumno);
        }
        if(op == 4)
        {
            return 0;
        }
        else
        {
        int otra;
        printf("\nSi desea realizar otra operacion precione 1: ");
        scanf("%d",&otra);
        if(otra == 1)
        {
            op = 0;
            op2 = 0;
        }
            else return 0;
        }
    }

    return 0;
}
void print_grades(float **g, int size,int columna)
{
    for (int i = 0; i < size; i++)
    {
        printf("Numero lista %d - calificaciones: %.1f\n", i + 1, *(*(g+i)+columna));
    }
}

void get_grades(float **g, int size,int columna)
{
    int j = columna;
    for (int i = 0; i < size; i++)
    {
        printf("Ingresa la calificacion %d: ", i + 1);
        scanf("%f",&*(*(g+i)+j));
    }
}

float max_grade(float **g, int size,int columna)
{
    float m = *(*(g+0)+columna);
    for (int i = 1; i < size; i++)
    {
        if (m < (*(*(g+i)+columna)))
            m = *(*(g+i)+columna);
    }
    return m;
}

float men_grade(float **g, int size,int columna)
{
    float men = *(*(g+0)+columna), m;
    for (int i = 1; i < size; i++)
    {
        if (men < *(*(g+i)+columna))
            men = men;
        else
            men = *(*(g+i)+columna);
    }
    return men;
}

float promedio(float **g, int size,int columna)
{
    int i;
    float suma = 0.0, prom;
    for (i = 0; i < size; i++)
    {
        suma = suma + *(*(g+i)+columna);
    }
    prom = suma / size;
    return prom;
}

float Desviacion_Estandar(float **g, int size,int columna)
{
    float prom = promedio(g,size,columna);
    float suma = 0.0, result;
    int i;
    for (i = 0; i < size; i++)
    {
        suma = suma + pow(*(*(g+i)+columna) - prom, 2);
    }
    result = sqrt(suma / (size - 1));
    return result;
}

void promedio_final(float **p, int size)
{
    int i;
    float suma;
    for(i=0; i<size; i++)
    {
        suma = 0.0;
        for (int  j = 1; j < 4; j++)
        {
            suma = suma + (*(*(p+i)+j))/3;
        }
        *(*(p+i)+5) = (suma +(*(*(p+i)+4)))/2;
    }
}


void print_alumno(float **m,int alumno)
{
    printf("1er\t2do\t3ro\tOrdi\tPF\t\n");
    for(int j= 1; j<6 ; j++)
    {
        printf("%.1f\t",*(*(m+alumno-1)+j));
    }
}

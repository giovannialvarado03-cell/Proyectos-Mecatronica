#include <stdio.h>

#define MAX_TAM 50
void get_grades(int g[], int size); 
int max_grade(int g[], int size);
int men_grade(int g[], int size); 
float media(int array[], int size); 

int main()
{
    int numeros[MAX_TAM],size,max,men;
    float med; 
    printf("\nCuantos numeros ingresara: "); 
    scanf("%d",&size); 
    get_grades(numeros,size); 
    max = max_grade(numeros,size); 
    men = men_grade(numeros,size);
    med = media(numeros,size);
    printf("\nEl mas grande es: %d",max); 
    printf("\nEl menor es:  %d",men); 
    printf("\nLa media es de: %.1f\n\n",med);   
    return 0; 
}
void get_grades(int g[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Ingrese un numero: %d ", i + 1);
        scanf("%d", &g[i]);
    }
}
int max_grade(int g[], int size)
{
    int m = g[0];
    for (int i = 1; i < size; i++)
    {
        if (m < g[i])
            m = g[i];
    }
    return m;
}

int men_grade(int g[], int size)
{
    int men = g[0], m;
    for (int i = 1; i < size; i++)
    {
        if (men < g[i])
            men = men;
        else
            men = g[i];
    }
    return men;
}
float media(int array[], int size)
{
    int sumatoria = 0,i;
    for (i = 0; i < size; i++) {
        sumatoria += array[i];
    }
    float media = (float) sumatoria / (float) size;
    return media; 
}
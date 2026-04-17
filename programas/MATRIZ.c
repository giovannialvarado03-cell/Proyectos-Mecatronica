#include <stdio.h>
#define MAX_COL 20
#define MAX_REN 20

void get_matriz(int matriz[][MAX_COL],int tam); 
void print_matriz(int matriz[][MAX_COL], int tam ); 
void print_arreglo(int array[],int tam); 
int suma_Dprincipal(int matriz[][MAX_COL],int array[],int tam); 
int D_secundaria(int matriz[][MAX_COL],int array2[],int tam); 


int main()
{
    int matriz[MAX_REN][MAX_COL]; 
    int array[MAX_COL],array2[MAX_COL];
    int tamanio,suma1,suma2;  
    printf("Ingrese el tamano NxN de la matriz: "); 
    scanf("%d",&tamanio); 
    get_matriz(matriz,tamanio); 
    print_matriz(matriz,tamanio);

    suma1 = suma_Dprincipal(matriz,array,tamanio);
    printf("\nEl arreglo es: ");print_arreglo(array,tamanio);  
    printf("\nLa suma de la diaginal principal es: %d\n",suma1);

    suma2 = D_secundaria(matriz,array2,tamanio); 
    printf("\nEl arreglo es: "); print_arreglo(array2,tamanio); 
    printf("\nLa suma de la diagonal secundaria es: %d\n\n",suma2); 
    return 0; 
}
void get_matriz(int matriz[][MAX_COL],int tam)
{
    for(int i=0; i< tam; i++)
    {
        for(int j = 0; j<tam; j++)
        {
            printf("m [%d][%d]: ",i,j); 
            scanf("%d",&matriz[i][j]); 
        }
    }
}

void print_matriz(int matriz[][MAX_COL], int tam )
{
    printf("\n**** Matriz : ****\n"); 
    for(int i=0 ; i<tam; i++){
        for(int j = 0; j<tam; j++)
        {
            printf("[%d] ",matriz[i][j]); 
        }
        printf("\n"); 
    }

}

int suma_Dprincipal(int matriz[][MAX_COL],int array[],int tam)
{
    int k= 0; 
    int suma = 0; 
    for(int i = 0; i<tam ; i++ ){
        for(int j= 0; j<1; j++){ 
            suma = suma + matriz[i][k];
            array[k]= matriz[i][k]; 
            k++; 
        }
    }
    return suma; 
}
int D_secundaria(int matriz[][MAX_COL],int array2[],int tam)
{
    int m= tam-1;
    int suma1 = 0;  
    for(int i= 0; i<tam; i++){
        for(int j=0; j<1; j++){
            suma1 = suma1 + matriz[i][m];
            array2[i] = matriz[i][m]; 
            m--;
        }   
    }
    return suma1; 
}

void print_arreglo(int array[],int tam)
{
    for(int i=0; i<tam; i++)
    {
        printf("%d ",array[i]); 
    }
}
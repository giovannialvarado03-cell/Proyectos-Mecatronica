#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_COL 20 


void get_matriz(float m[][MAX_COL],int tamanio); 
void print_matriz(float m[][MAX_COL],int tamanio);
void transpuesta(float m[][MAX_COL],int t); 

int main()
{
    float matriz[MAX_COL][MAX_COL] = {0}; 
    int tamanio;  
    srand(time(NULL)); 
    printf("Ingrese el tamanio de la matriz: ");
    scanf("%d",&tamanio);  
    
    get_matriz(matriz,tamanio);
    printf("\nMATRIZ SIMETRICA\n");  
    print_matriz(matriz,tamanio); 

    transpuesta(matriz,tamanio); 
    printf("\nMATRIZ TRANSPUESTA\n"); 
    print_matriz(matriz,tamanio); 
    return 0; 
}

void get_matriz(float m[][MAX_COL],int tamanio)
{
    for(int j=0; j<tamanio; j++)
    {
        for(int i= j; i<tamanio; i++){
            m[j][i] = 1+(rand()%9); 
        }
        for(int i=j; i<tamanio; i++)
        {
            m[i][j]= m[j][i]; 
        }
    }
}

void print_matriz(float m[][MAX_COL],int tamanio)
{
    for(int i=0; i<tamanio; i++){
        for(int j=0; j<tamanio; j++){
            printf("[%.1f] ",m[i][j]);   
        }
        printf("\n"); 
    }
    printf("\n\n"); 
}

void transpuesta(float m[][MAX_COL],int t) 
{
    for(int i=0; i<t; i++){
        for(int j=0; j<t; j++){
            m[j][i]=m[i][j]; 
        }
    }
}
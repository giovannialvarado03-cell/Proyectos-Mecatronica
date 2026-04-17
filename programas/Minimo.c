#include<stdio.h>
#include<stdlib.h>
#define MAX_COL 100
#define MAX_REN 100

void leerMatriz(float m[][MAX_COL], int r, int c);
void imprimirMatriz(float m[][MAX_COL], int r, int c);
float BuscaMinimoMat(float m[][MAX_COL], int r, int c);
float BuscaMaximo(float m[][MAX_COL], int r, int c); 


int main(int argc, char** argv) {
    float matriz1[MAX_REN][MAX_COL],resultado,maximo;
    int f1,c1;
    printf("**PROGRAMA PARA ENCONTRAR EL MINIMO DE UNA MATRIZ**");
    printf("\nDatos de matriz:\n");
    printf("Filas de Matriz 1: ");  scanf("%d",&f1);
    printf("Columnas de Matriz 1: ");  scanf("%d",&c1);
    printf("Ingrese los datos de la Matriz\n");
    leerMatriz(matriz1,f1,c1);
    printf("\nMatriz:\n");
    imprimirMatriz(matriz1,f1,c1);
    resultado = BuscaMinimoMat(matriz1,f1,c1);
    printf("\nEl minimo de la matriz es: %.2f",resultado);
    maximo = BuscaMaximo(matriz1,f1,c1); 
    printf("\nEl maximo de la matriz es: %.2f",maximo); 
}
void leerMatriz(float m[][MAX_COL], int r, int c){
	int i, j;
	for(i=0; i < r; i++)
		for(j=0; j < c; j++){
			printf("m[%.2f][%.2f] ", i, j);
			scanf("%f",&m[i][j]);
			}
}

void imprimirMatriz(float m[][MAX_COL], int r, int c){
	int i, j;
	for(i=0; i < r; i++){
		for(j=0; j < c; j++){
			printf("[%.2f]", m[i][j]);
        }
        printf("\n");
	}
}


float BuscaMinimoMat(float m[][MAX_COL], int r, int c) {
    int i, j;
    float minimo;
    minimo = m[0][0];
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (m[i][j] < minimo)
                minimo = m[i][j];
        }
    }
    return minimo;
}

float BuscaMaximo(float m[][MAX_COL], int r, int c) {
    int i, j;
    float maximo;
    maximo = m[0][0];
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (m[i][j] > maximo)
                maximo = m[i][j];
        }
    }
    return maximo;
}
#include <stdio.h>
#define MAX_COL 50

void leerMatriz(float m[][MAX_COL], int r, int c);
void imprimirMatriz(float m[][MAX_COL], int r, int c);  
void transpuesta(float m[][MAX_COL],int rm,int cm,float t[][MAX_COL],int *rt,int *ct); 


int main()
{
    float matriz1[MAX_COL][MAX_COL], matriz2[MAX_COL][MAX_COL], matriz3[MAX_COL][MAX_COL],total[MAX_COL][MAX_COL];
	int f1,c1,mrt,mct;

    printf("Filas M1: ");  scanf("%d",&f1);
    printf("Columnas M1: ");  scanf("%d",&c1);
    leerMatriz(matriz1,f1,c1);
    printf("\n Matriz original\n");
    imprimirMatriz(matriz1,f1,c1);

    printf("\nLa transpuesta de la matriz es:\n");
    transpuesta(matriz1,f1,c1,total,&mrt,&mct);
    imprimirMatriz(total,mrt,mct);
    return 0; 
}

void transpuesta(float m[][MAX_COL],int rm,int cm,float t[][MAX_COL],int *rt,int *ct){
    int i,j;
    *rt=cm;
    *ct=rm;
    for(i=0;i<rm;i++)
        for(j=0;j<cm;j++)
            t[j][i]=m[i][j];
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
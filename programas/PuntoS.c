#include <stdio.h>
#define N 50
#define M 50

void leerMatriz(float m[][], int r, int c); 
int puntoSilla(float mat[N][M], int posFila, int posColumna);
void escribeMat(float mat[N][M]);

void main()
{
    float mat[N][M];
    leerMatriz(mat,4,3);  
    printf("\n");
    escribeMat(mat);
    if(puntoSilla(mat, 4, 3)==1)
        printf("Tiene punto de silla en la posicion %d-%d", 4, 3);
    else printf("No hay punto de silla");
}

void leerMatriz(float m[][M], int r, int c){
	int i, j;
	for(i=0; i < r; i++)
		for(j=0; j < c; j++){
			printf("m[%.2f][%.2f] ", i, j);
			scanf("%f",&m[i][j]);
			}
}

int puntoSilla(float mat[N][M], int posFila, int posColumna)
{
    int i, j, enc=0;

    for(i=0; i<N && !enc; i++)
    {
        for(j=0; j<M && !enc; j++)
        {
            if(mat[posColumna][posFila]>mat[posFila][j] && mat[posColumna][posFila]<mat[i][posColumna])
            enc=1;
        }
    }

    return enc;

}

void escribeMat(float mat[N][M])
{
    int i, j;

    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
            printf("%.2f", mat[i][j]);
            printf("\n");
    }
}
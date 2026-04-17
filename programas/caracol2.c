#include <stdio.h>
const int k_max = 20;

void caracol(int **, int);
void show(int **m, int n); 

int main()
{
	int **matriz;
	int n;
	do
    {
        printf("Ingrese el tamanio de la matriz: ");
        scanf("%d",&n);
    } while (n < 0 || n >= 20);
    
	caracol(matriz, n); 
	show(matriz,n); 

	return 0;
}

void caracol(int **c, int n)
{
	int k = 1, j, i;
	
	for(j=0; j<n/2; j++)
	{
		for(i=0; i<n-1-j; i++)
			(*(*c+j)+i) = k++;
			
		for(i=0; n-1-j; i++)
			*(*(c+i)+n-i-j) = k++;
		
		for(i=n-1-j; i>j; i--)
			*(*(c+n-1-j)+i) = k++;
		
		for(i=n-1-j; i>j; i--)
			*(*(c+i)+j) = k++;
	}
	
	if(n%2 == 1)
	{
		*(*(c+(n/2))+(n/2))=k;
	}
}
void show(int **m, int n)
{
	int i, j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t", *(*(m+i)+j));
		}
		printf("\n");
	}
}
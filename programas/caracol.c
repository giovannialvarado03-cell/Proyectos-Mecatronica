#include<stdio.h>

void caracol(int m[][20],int n); 
int main()
{
    int i,j,a[100][100],n,k;
    printf ("Ingrese el valor de n:");
    scanf("%d",&n);
    
    caracol(a,n); 

    for(i=1;i<=n;i=i+1)
    {
        for(j=1;j<=n;j=j+1)
            printf("%4d",a[i][j]);
        printf("\n");
    }
    printf("\n");
    return 0; 
}

void caracol(int m[][20],int n)
{
    int k=1,i,j;
    for(i=1;i<=n/2;i=i+1)
    {
        for(j = i; j <= n-i; j = j + 1) // arriba   
        {
            m[i][j]=k;
            k=k+1;
        }
        for(j = i; j <= n-i; j = j + 1) // derecha
        {
            m[j][n-i+1]=k;
            k=k+1;
        }
        for(j = n-i + 1; j>= i + 1; j = j-1) // a continuación
        {
            m[n-i+1][j]=k;
            k=k+1;
        }
        for(j = n-i + 1; j>= i + 1; j = j-1) // izquierda
        {
            m[j][i]=k;
            k=k+1;
        }
    }
    if(n%2==1)
    {
        i=(n+1)/2;
        m[i][i]=n*n;
    }

}
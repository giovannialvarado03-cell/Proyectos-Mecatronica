#include <stdio.h> 

int factorial(int); 
int Coef_bin(int m,int n, int mn); 

int main()
{
    int m, n,mfac,nfac, m_nfac, result;
    do{
        printf("Ingrese dos valores (m,n) recuede m debe ser mayor a n: "); 
        scanf("%d,%d",&m,&n); 
    }while(m < n); 
    mfac = factorial(m);
    printf("r= %d\n",mfac); 
    nfac = factorial(n);
    printf("r= %d\n",nfac); 
    m_nfac = factorial((m-n));
    printf("r= %d\n",m_nfac);  
    result = Coef_bin(mfac,nfac,m_nfac);

    printf("Coeficiente binomial = %d",result);  
    return 0; 
}

int factorial(int num)
{
    int i,fact=1; 
    for (i=1; i<=num; i++){
        fact=fact*i;
    }
    return fact; 
}

int Coef_bin(int m,int n, int mn)
{
    int result; 
    result = m/(n*(mn)); 
    return result; 
}
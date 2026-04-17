#include <stdio.h>

void Factores_primos(int number); 
int primo(int n); 
int Nprimo(int n); 


int main()
{
    int number, primo;

    printf("\nIngrese un numero: ");
    scanf("%d", &number);
    printf("Factores primos: "); 
    Factores_primos(number); 
    printf("\n\n"); 
    return 0;
}

void Factores_primos(int number)
{
    int k = 1, primo1, n; 
    while (number > 1)
    {
        primo1 = Nprimo(k); 
        if (number % primo1 == 0)
        {
            number = number / primo1;
            printf("%d ",primo1);
        }
        else
            k++; 
    }
}

int primo(int n)
{
	int i;
	if(n>1)
	{
		for (i=2; i<=n; i++)
		{
			if(n%i==0)
			{
				if(n==i)
					return 1;
				else 
					return 0;
			}
				
		}
	}
	else
		return 0;	
}

int Nprimo(int n)
{
    int i,p; 
    for (i=1; i<=n*2; i++)
	{
		if(primo(i)== 1)
            p = i; 
	}
    return p; 
}
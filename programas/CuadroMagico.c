#include <stdio.h>
#define MAX 11

void generar(int a[][MAX], int *max);

int main()
{
    printf("CUADRADO MAGICO\n");
    int n;
    int arr[MAX][MAX];
    generar(arr, &n);

    getchar();
    return 0;
}

void generar(int a[][MAX], int *max)
{

    int i, j, n, x;
    int contador = 1;

    puts("LECTURA DEL ARREGLO");

    do
    {
        printf("imprima el orden impar del cuadrado mágico: ");
        scanf("%d", &n);

        if (n % 2 != 0)
            break;
        else
            printf("solo orden impar. \n");

    } while (n % 2 == 0);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            a[i][j] = 0;

    x = n * n;
    i = 0;
    j = n / 2;
    a[i][j] = 1;

    while (contador < x)
    {
        if ((i - 1) >= 0)
        {
            if ((j + 1) < (n))
            {
                if (a[i - 1][j + 1] == 0)
                {
                    i -= 1;
                    j += 1;
                    contador += 1;
                    a[i][j] = contador;
                }
                else
                {
                    i += 1;
                    contador += 1;
                    a[i][j] = contador;
                }
            }
            else
            {
                if (a[i - 1][0] == 0)
                {
                    i -= 1;
                    j = 0;
                    contador += 1;
                    a[i][j] = contador;
                }
                else
                {
                    i += 1;
                    contador += 1;
                    a[i][j] = contador;
                }
            }
        }
        else
        {
            if (((j + 1) < (n)))
            {
                if (a[n - 1][j + 1] == 0)
                {
                    i = n - 1;
                    j += 1;
                    contador += 1;
                    a[i][j] = contador;
                }
                else
                {
                    i += 1;
                    contador += 1;
                    a[i][j] = contador;
                }
            }
            else
            {
                i += 1;
                contador += 1;
                a[i][j] = contador;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
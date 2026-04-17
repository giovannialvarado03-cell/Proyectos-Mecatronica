#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int *arr, int size);
void merge_sort(int *arr, int beg, int end);
void merge(int *arr, int left, int mid, int right);
void quick_sort(int *arr, int beg, int end);
int partition( int *arr, int beg, int end);
void swap(int *a, int *b);
void Generar_aleatoros(int, int[]);
void copia_lista(int tam, int numbers[], int p_copia[]);
void show(int *a, int size); 

clock_t tiempo_inicio, tiempo_final;
clock_t tiempo_inicio2, tiempo_final2;
clock_t tiempo_inicio3, tiempo_final3; 

int main()
{
    srand(time(NULL)); 
    float time = 0.0, time2 = 0.0, time3 = 0.0;
    int n;
    printf("\n\nCantidad: \n");
    scanf("%d", &n);
    int *p_numbers;

    p_numbers = (int *) malloc(n * sizeof(int));
    if (p_numbers == NULL)
    {
        return 1;
    }
    int *p_numbers_copy_1;

    p_numbers_copy_1 = (int *) malloc(n * sizeof(int));
    if (p_numbers_copy_1 == NULL)
    {
        return 1;
    }
    
    int *p_numbers_copy_2;

    p_numbers_copy_2 = (int *) malloc(n * sizeof(int));
    if (p_numbers_copy_2 == NULL)
    {
        return 1;
    }
    
    int *p_numbers_copy_3;

    p_numbers_copy_3 = (int *) malloc(n * sizeof(int));
    if (p_numbers_copy_3 == NULL)
    {
        return 1;
    }
    
    Generar_aleatoros(n, p_numbers);
    //p_numbers_copy_1 = p_numbers;
    copia_lista(n, p_numbers, p_numbers_copy_1);

    //p_numbers_copy_2 = p_numbers;
    copia_lista(n, p_numbers, p_numbers_copy_2);

    //p_numbers_copy_3 = p_numbers;
    copia_lista(n, p_numbers, p_numbers_copy_3);

    tiempo_inicio = clock();
    //show(p_numbers_copy_1,n); 
    bubble_sort(p_numbers_copy_1, n);
    //show(p_numbers_copy_1,n); 
    tiempo_final = clock();
    time = ((float)(tiempo_final - tiempo_inicio))/CLOCKS_PER_SEC;

    printf("\n\tBurbuja\n");
    printf("El tiempo transcurrido con %d datos es: %f\n", n, time);

    tiempo_inicio2 = clock();
    //show(p_numbers_copy_2,n); 
    merge_sort(p_numbers_copy_2,0,n-1);
    //show(p_numbers_copy_2,n); 
    tiempo_final2 = clock();
    time2 = ((float)(tiempo_final2 - tiempo_inicio2))/CLOCKS_PER_SEC;

    printf("\n\tMerge Short\n");
    printf("El tiempo transcurrido con %d datos es: %f\n", n, time2);

    tiempo_inicio3 = clock();
    //show(p_numbers_copy_3,n); 
    quick_sort(p_numbers_copy_3,0,n-1);
    tiempo_final3 = clock();
    //show(p_numbers_copy_3,n); 
    time3 = ((float)(tiempo_final3 - tiempo_final3))/CLOCKS_PER_SEC;

    printf("\n\tQuick Short\n");
    printf("El tiempo transcurrido con %d datos es: %f\n", n, time3);

    free(p_numbers);
    free(p_numbers_copy_1);
    free(p_numbers_copy_2);
    free(p_numbers_copy_3);

    return 0;
}
//Generar lista de numeros
void Generar_aleatoros(int tam, int numbers[])
{
    for (int i = 0; i < tam; i++)
    {
        numbers[i] = rand() % 101;
    }
}

void copia_lista(int tam, int numbers[], int p_copia[])
{
    for (int i = 0; i < tam; i++)
    {
        p_copia[i] = numbers[i];
    }
}


//inicio burbuja
void bubble_sort(int *arr, int size)
{
    int aux;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if( arr[j] > arr[j + 1])
            {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux; 
            }
        }
    }
}
//final burbuja
//inicio marge
void merge_sort(int *arr, int beg, int end)
{
    if (beg < end){
        int mid = beg + (end - beg) / 2;

        merge_sort(arr, beg, mid);
        merge_sort(arr, mid + 1, end);

        merge(arr, beg, mid, end);
    }
}
void merge(int *arr, int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    // create temp array 
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];   
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = arr[mid + 1 + j];
    }
    
    i = 0;
    j = 0;
    k = left;
    while( i < n1 && j < n2 )
    {
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    // Copy the remaining elements of L[]
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    // Copy the remaining elements of R[]
    while( j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}
//final marge
//inicio quick short
void quick_sort(int *arr, int beg, int end)
{
    if (beg < end)
    {
        int pi = partition (arr, beg, end);
        quick_sort(arr, beg, pi - 1);
        quick_sort(arr, pi + 1, end);
    }
}

int partition( int *arr, int beg, int end)
{
    int pivot = *(arr +end);
    int i = (beg - 1);
    for (int  j = beg; j < end; j++)
    {
        if (*(arr + j) < pivot)
        {
            i++;
            swap((arr + i) , (arr + j));
        }
    }
    swap((arr + (i + 1)), (arr + end));
    return (i + 1);
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
//final quick short
void show(int *a, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", *(a+i));
    printf("\n"); 
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_array(int array[]); 
//void ordena(int array[]); 
void suma(int array[]); 


int main()
{
    int array[20];
    get_array(array);  
    //ordena(array); 
    suma(array); 
    return 0; 
}

void get_array(int array[])
{
    for(int i= 0; i<10; i++)
    {
        array[i]=9+rand()%20; 
        printf("Array[%d]: %d\n",i,array[i]); 
    }
    for(int i= 10; i<20; i++)
    {
        array[i]=rand()%10; 
        printf("Array[%d]: %d\n",i,array[i]); 
    }
}

/*void ordena(int array[])
{
    int aux,i,d;
    for(i = 0,d=1; d<20;i++,d++)
    {
        if(array[i] < array[d])
        {
            aux = array[d]; 
            array[d]= array[i]; 
            array[i]= aux; 
        }
    } 
}
*/

void suma(int array[])
{
    int suma1=0,suma2=0; 
    for(int i =0 ; i<10; i++)
    {
        suma1 = suma1 + array[i]; 
    }
    printf("La suma de los primeros 10 es: %d",suma1); 
    for(int i =10 ; i<20; i++)
    {
        suma2 = suma2 + array[i]; 
    }
    printf("\nLa suma de los ultimos 10 es: %d",suma2);
}
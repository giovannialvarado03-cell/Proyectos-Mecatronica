#include <stdio.h>
#include <string.h> 

void Imprime_Alreves(char frase[], int tamanio); 

int main()
{
    int tam; 
    char frase[20], nueva[20]; 
    printf("Ingrese frase: "); 
    gets(frase); 
    fflush(stdin); 
    tam = strlen(frase); 

    printf("Nueva frase = "); 
    Imprime_Alreves(frase,tam); 
     
    return 0; 
}


void Imprime_Alreves(char frase[], int tamanio)
{
    int i;
    int j= tamanio-1; 
    char NuevaFrase[20]; 
    for(i=0; i<=tamanio; i++, j--)
    {
        NuevaFrase[i]= frase[j]; 
    }
    for ( i = 0; i < tamanio; i++)
    {
        printf("%c",NuevaFrase[i]); 
    }
}

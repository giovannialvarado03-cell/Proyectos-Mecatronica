#include <stdio.h>
#include <string.h>
#define MAX_TAM 50
void Quita_Espacio(char frase[], char frase2[]); 
void Imprime_Alreves(char frase[],char frase2[],int tamanio); 
int sonIguales(char frase[], char frase2[]); 

int main()
{ 
    int result,tamanio,t2; 
    char frase[MAX_TAM], Sin_Espacios[MAX_TAM], alreves[MAX_TAM];

    printf("\nIngrese una frase: "); 
    fgets(frase,MAX_TAM,stdin);  

    Quita_Espacio(frase,Sin_Espacios); 
    printf("Frase sin espacios: %s\n",Sin_Espacios);
    t2 = strlen(Sin_Espacios);
    printf("Frase alreves: ");  
    Imprime_Alreves(Sin_Espacios,alreves,t2);
    tamanio = strlen(alreves);  
    result = sonIguales(Sin_Espacios,alreves);

    if(result == 1 )
        printf("\nEs palindrome"); 
        else 
            printf("\nNo es palindrome\n\n"); 
    return 0;
}

void Quita_Espacio(char frase[], char frase2[])
{
    int i,j;
    for(i=j= 0; frase[i]!= '\0'; i++)
    {
        if(frase[i] != ' ')
        frase2[j++] = frase[i];
    } 
    frase2[j-1] = '\0';
}

void Imprime_Alreves(char frase[],char frase2[],int tamanio)
{
    int i;
    int j= tamanio-1; 
    for(i=0; i<=tamanio; i++, j--)
    {
        frase2[i]= frase[j]; 
    }
    frase2[i]= '\0'; 
    for ( i = 0; i < tamanio; i++)
    {
        printf("%c",frase2[i]); 
    }
}
int sonIguales(char frase[], char frase2[])
{
int i;
//compara uno por uno y al encontrar el primero diferente es falso
for(i = 0; frase[i] != '\0'; i++)
    if (frase[i] != frase2[i]) return 0;
        return 1;
}

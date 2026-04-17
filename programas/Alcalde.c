#include <stdio.h>

void Imprime_Candidato_ganador(int, int, int, int, int);
void Candidato_mas_votado(int, int, int, int);
int main()
{
    int Can1, Can2, Can3, Can4, total, Promedio;
    printf("_________________________________________________________\n");
    printf("|DISTRITO|CANDIDATO A|CANDIDATO B|CANDIDATO C|CANDIDATO D|\n");
    printf("|   1    |    194    |    48     |    206    |    45     |\n");
    printf("|   2    |    180    |    20     |    320    |    16     |\n");
    printf("|   3    |    221    |    90     |    140    |    20     |\n");
    printf("|   4    |    432    |    50     |    821    |    14     |\n");
    printf("|   5    |    820    |    61     |    946    |    18     |\n");
    printf("_________________________________________________________\n");

    Can1 = 194 + 180 + 221 + 432 + 820;
    Can2 = 48 + 20 + 90 + 50 + 61;
    Can3 = 206 + 320 + 140 + 821 + 946;
    Can4 = 45 + 16 + 20 + 14 + 18;
    total = Can1 + Can2 + Can3 + Can4;
    printf("El total de votos es: %d\nCandidato 1: %d\nCandidato 2: %d\nCandidato 3: %d\nCandidato 4: %d\n", total, Can1, Can2, Can3, Can4);
    Promedio = total * 0.5;

    Candidato_mas_votado(Can1, Can2, Can3, Can4);

    Imprime_Candidato_ganador(Can1, Can2, Can3, Can4, Promedio);

    return 0;
}
void Imprime_Candidato_ganador(int can1, int can2, int can3, int can4, int prome)
{
    if (can1 > prome)
    {
        printf("\tEl nuevo alcalde es el Candidato A\n");
        printf("\tcon un total de %d votos", can1);
    }
    else if (can2 > prome)
    {
        printf("\tEl nuevo alcalde es el Candidato B\n");
        printf("\tcon un total de %d votos", can2);
    }
    else if (can3 > prome)
    {
        printf("\tEl nuevo alcalde es el Candidato C\n");
        printf("\tcon un total de %d votos", can3);
    }
    else if (can4 > prome)
    {
        printf("\tEl nuevo alcalde es el Candidato D\n");
        printf("\tcon un total de %d votos", can4);
    }
    else
    {
        printf("Abra una segunda Jornada de botos con los Candidatos C y A");
    }
}

void Candidato_mas_votado(int can1, int can2, int can3, int can4)
{
    if ((can1 > can2) && (can1 > can3) && (can1 > can4))
    {
        printf("El candidato mas Votado es el Candidato A\n");
    }
    else if ((can2 > can1) && (can2 > can3) && (can2 > can4))
    {
        printf("El candidato mas Votado es el Candidato B\n");
    }
    else if ((can3 > can1) && (can3 > can2) && (can3 > can4))
    {
        printf("El candidato mas Votado es el Candidato C\n");
    }
    else
    {
        printf("El candidato mas Votado es el Candidato D\n");
    }
}
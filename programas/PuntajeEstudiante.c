#include <stdio.h> 

int main()
{
    int puntuacion;

    printf("\nIntroduzca su puntuacion: "); 
    scanf("%d",&puntuacion); 

    if(puntuacion <= 100 && puntuacion >=  90 )
        printf("A\n\n");
        if(puntuacion <= 89 && puntuacion >= 80 )
            printf("B\n\n"); 
            if(puntuacion <= 79 && puntuacion >= 70 ) 
                printf("C\n\n"); 
                if(puntuacion <= 69 && puntuacion >= 60)
                    printf("D\n\n");
                    if(puntuacion <=59 && puntuacion >= 0)
                        printf("E\n\n"); 

    return 0; 
}
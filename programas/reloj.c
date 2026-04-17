#include <stdio.h>

int main()
{
    int hora_1, hora_2,minuto_1, minuto_2;
    char puntos; 

    printf("\n\nIngrese una hora (0 0 : 0 0):"); 
    scanf("%d %d : %d %d",&hora_1,&hora_2,&minuto_1,&minuto_2); 

    if((hora_1 == 1 && hora_2 >2)|| (hora_2 <=9))
        if(hora_1==1 && hora_2== 3)
        {
            hora_1 = 0;
            hora_2 = 1; 
            printf("son a las: %d %d : %d %d",hora_1,hora_2,minuto_1,minuto_2); 
        }
        if(hora_1 ==1 && hora_2== 4)
        {
            hora_1 = 0;
            hora_2 = 2; 
            printf("son a las: %d %d : %d %d",hora_1,hora_2,minuto_1,minuto_2); 
        }
        if(hora_2== 5)
        {
            hora_1 = 0;
            hora_2 = 3; 
            printf("SON A LAS: %d %d : %d %d",hora_1,hora_2,minuto_1,minuto_2); 
        }
        if(hora_2== 6)
        {
            hora_1 = 0;
            hora_2 = 4; 
            printf("SON A LAS: %d %d : %d %d",hora_1,hora_2,minuto_1,minuto_2); 
        }
        if(hora_2== 7)
        {
            hora_1 = 0;
            hora_2 = 5; 
            printf("SON A LAS: %d %d : %d %d",hora_1,hora_2,minuto_1,minuto_2); 
        }
        if(hora_2== 8)
        {
            hora_1 = 0;
            hora_2 = 6; 
            printf("SON A LAS: %d %d : %d %d",hora_1,hora_2,minuto_1,minuto_2); 
        }
        if(hora_2== 9)
        {
            hora_1 = 0;
            hora_2 = 7; 
            printf("SON A LAS: %d %d : %d %d",hora_1,hora_2,minuto_1,minuto_2); 
        }
        else 
            if(hora_1 == 2 && hora_2 == 0 )
            {
                hora_1 = hora_1-2; 
                hora_2 = 8;
                printf("SON A LAS: %d %d : %d %d",hora_1,hora_2,minuto_1,minuto_2);
            }
            if(hora_1 == 2 && hora_2 == 1 )
            {
                hora_1 = hora_1-2; 
                hora_2 = 9;
                printf("SON A LAS: %d %d : %d %d",hora_1,hora_2,minuto_1,minuto_2);
            }
            if(hora_1 == 2 && hora_2 == 2 )
            {
                hora_1 = hora_1-1; 
                hora_2 = 0;
                printf("SON A LAS: %d %d : %d %d",hora_1,hora_2,minuto_1,minuto_2);
            }
            if(hora_1 == 2 && hora_2 == 3 )
            {
                hora_1 = hora_1 -1; 
                hora_2 = 1;
                printf("SON A LAS: %d %d : %d %d",hora_1,hora_2,minuto_1,minuto_2);
            }
            if(hora_1 == 2 && hora_2 == 4 )
            { 
                hora_1 = hora_1 - 1; 
                hora_2 = 2;
                printf("SON A LAS: %d %d : %d %d",hora_1,hora_2,minuto_1,minuto_2);
            }
        printf( " PM"); 
        printf("\n\n");

    return 0; 
}
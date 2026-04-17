#include <stdio.h>
#include <string.h>
#define VERDADERO 0; 



typedef struct movie dmovie;

struct movie
{
    int id; 
    char title[30];
    char Director[20];
    float duration;
    char Genre[15];
    int year;
};

const int K_max =100; 
int movies_number = 0; 


int main_menu();
dmovie get_movie(); 
void show_movies_ptr(dmovie *); 
void show_movies(dmovie*,int); 
int find_movie(dmovie*,int, int); 
int find_movie_nom(dmovie *,int, char[]); 
int id_verif(dmovie *, int,int); 


int main()
{
    dmovie my_movies[K_max]; 
    dmovie new_movie; 
    while(1)
    {
        int opt = main_menu();
        int id,idx;  
        char nom[20]; 
        switch (opt)
        {
        case 1: my_movies[movies_number++] = get_movie(new_movie);
            break;
        case 2: printf("Ingrese el id que desea buscar: "); 
                scanf("%d",&idx); 
                id = find_movie(my_movies,movies_number,idx); 
                if(id != -1)
                {
                    show_movies_ptr(&my_movies[id]); 
                }
                else
                {
                    printf("No existe una pelicula con ese id\n");
                }
            break;
        case 3: show_movies(my_movies,movies_number); 
                break;
        case 4: printf("ID a eliminar: "); 
                scanf("%d",&idx);
                id = find_movie(my_movies,movies_number,idx);  
                if( id != -1)
                {
                    show_movies_ptr(&my_movies[id]); 
                    printf("Desea eliminar la pelicula?");
                    my_movies[id].id = -999; 
                }
                else
                {
                    printf("No existe una pelicula con el id %d\n",idx); 
                }
                break;
        case 5: printf("Id a modificar:");
                scanf("%d",&idx); 
                id = find_movie(my_movies,movies_number,idx); 
                if(id != -1)
                {
                    show_movies_ptr(&my_movies[id]); 
                    printf("Desea modificar la pelicula?"); 
                    my_movies[id]= get_movie(); 
                }
                else 
                {
                    printf("No existe una pelicula con el id %d\n",idx); 
                }
                break;
        case 6: printf("Nombre de la pelicula a buscar: "); 
                gets(nom); 
                id = find_movie_nom(my_movies,movies_number,nom); 
                if(id != -1)
                {
                    show_movies_ptr(&my_movies[id]); 
                }
                else
                {
                    printf("No existe una pelicula con ese id\n");
                }
            break;
        default:
            break;
        }
    }
    return 0; 
}

int main_menu()
{
    int op; 
    do{
    printf("My Netflix\n"); 
    printf("1. Agregar pelicula\n"); 
    printf("2. Buscar pelicula\n"); 
    printf("3. Mostrar pelicula\n"); 
    printf("4. Eliminar peliculas\n"); 
    printf("5. Modificar pelicula\n"); 
    printf("6. Busqueda por nombre\n"); 
    printf("7. Salir\n"); 
    printf("Ingrese una opcion: "); 
    scanf("%d",&op); 
    }while((op <1 )|| (op>6)); 
}

dmovie get_movie()
{
    int aux,aux2; 
    dmovie m; 
    printf("\tDatos de la pelicula: \n\n");
    do{
        printf("Identificador: "); 
        scanf("%d",&aux); 
        aux2 = id_verif(&m,aux,movies_number); 
        if(aux2 == -1)
        {
            printf("Id existente, ingrese nuevamente.");
        }
        else
        {
            m.id = aux; 
        }
    }while(aux2 <=0 );  
    fflush(stdin);
    printf("Titulo:");
    gets(m.title); 
    printf("Director: ");
    gets(m.Director); 
    printf("Duracion: ");
    scanf("%f",&m.duration);
    fflush(stdin);  
    printf("Genero: ");
    gets(m.Genre); 
    printf("Anio de lanzamiento:");
    scanf("%d",&m.year); 

    return m; 
}

void show_movies_ptr(dmovie *m)
{
    printf("\tDatos de la pelicula: \n");
    printf("Identificador: %d\n",m->id); 
    printf("Titulo: %s\n",m->title); 
    printf("Director: %s\n",m->Director); 
    printf("Duracion: %.2f\n",m->duration);
    printf("Genero: %s\n",m->Genre); 
    printf("Anio de lanzamiento: %d\n",m->year); 
}

void show_movies(dmovie *m,int size)
{
    for(int i = 0; i<size ; i++)
    {
        if(m[i].id != -999)
        {
            printf("pelicula # %d\n",i+1); 
            show_movies_ptr(&m[i]); 
        }
    }
}

int find_movie(dmovie *m,int size, int id)
{ 
    for(int i = 0; i<size; i++)
    {
        if(id == m[i].id)
        {
            return i; 
        }
    }
    return -1; 
}

int find_movie_nom(dmovie *m,int size, char nom[])
{
    for(int i = 0; i<size; i++)
    {
        if(strcmp(nom,m[i].title)==0)
        {
            return i; 
        }
    }
    return -1; 
}

int id_verif(dmovie *m, int idx,int size)
{
    for(int i=0; i<size; i++)
    {
        if(idx == m[i].id)
        { 
            return -1; 
        } 
    }
    return idx; 
}
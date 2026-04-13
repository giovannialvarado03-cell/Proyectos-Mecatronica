#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <time.h>


typedef struct Cuenta Clientes; 

struct movimientos
{
    float t; 
    float depositos; 
    float stotal;
    float retiros; 
};

struct Cuenta
{
    int numero_cuenta; 
    char Nombre[30];
    int anio; 
    int NIP;
    float saldo;
    struct movimientos transacciones;   
};


const int K_max = 100;
int clientes_number = 0; 


int main_menu(); 
Clientes new_cuenta(); 
void show_cuenta_ptr(Clientes *);
void show_clientes(Clientes *,int);
int verifique_no_cuenta(Clientes *, int, int); 
int Busqueda_no_cuenta(Clientes *, int, int); 
void find_cuenta_nom(Clientes *,int , char[]);
void find_rango(Clientes *,int, int, int); 
int busqueda(Clientes *m); 

int main()
{
    Clientes cliente[K_max]; 
    Clientes new_cliente; 

    FILE **pt; 

    pt = fopen("Curso.data","wb+"); 

    
    int nip; 
    int NoCuenta,NoC; 
    int rango1,rango2; 
    char nom[30];
    char respuesta[2]; 

    srand(time(NULL));  
    show_clientes(cliente,clientes_number); 
    while(1)
    {
        int opt = main_menu();
        int id,idx;  
        fflush(stdin); 
        switch (opt)
        {
        case 1: printf("\n"); 
                cliente[clientes_number++] = new_cuenta(new_cliente); 
                printf("\n***FELICIDADES AHORA ERES CLIENTE DE BANAMEX***\n");  
            break;
        case 2: printf("\n*** Busqueda ***\n"); 
                busqueda(cliente); 
            break;
        case 3: show_clientes(cliente,clientes_number); 
            break; 
        case 4: printf("Numero de cuenta a modificar:");
                scanf("%d",&NoC); 
                fflush(stdin); 
                NoCuenta=Busqueda_no_cuenta(cliente,NoC,clientes_number); 
                if(NoCuenta != -1)
                {
                    show_cuenta_ptr(&cliente[NoCuenta]); 
                    printf("Escriba [SI] para continuar y [NO] para cancelar: "); 
                    gets(respuesta); 
                    if(strstr(respuesta,"SI")==0)
                    {
                        printf("OPERACION CANCELADA\n");
                    } 
                    else
                    { 
                        cliente[NoCuenta]= new_cuenta();
                    }
                }
                else 
                {
                    printf("NO EXISTE NUMERO DE CUENTA %d\n",NoC); 
                }
            break;
        case 5: printf("Cuenta a eliminar: "); 
                scanf("%d",&NoC);
                fflush(stdin); 
                NoCuenta = Busqueda_no_cuenta(cliente,NoC,clientes_number);  
                if( NoCuenta != -1)
                {
                    show_cuenta_ptr(&cliente[NoCuenta]); 
                    printf("Escriba [SI] para continuar y [NO] para cancelar: "); 
                    gets(respuesta); 
                    if(strstr(respuesta,"SI")==0)
                    {
                        printf("** [OPERACION CANCELADA] **\n");
                    } 
                    else
                    { 
                        cliente[NoCuenta].numero_cuenta = -999; 
                        printf("** --CUENTA ELIMINADA EXITOSAMENTE-- **");    
                    }
                }
                else
                {
                    printf("NO EXISTE NUMERO DE CUENTA %d\n",NoC); 
                }
            break; 
        case 6: printf("Numero de cuenta: "); 
                scanf("%d",&NoC); 
                fflush(stdin); 
                NoCuenta = Busqueda_no_cuenta(cliente,NoC,clientes_number);  
                if( NoCuenta != -1)
                {
                    printf("Ingrese la cantidad a depositar: "); 
                    scanf("%f",&cliente[NoCuenta].transacciones.depositos);fflush(stdin); 
                    printf("Depositar a %s $%.2f?",cliente[NoCuenta].Nombre,cliente[NoCuenta].transacciones.depositos);
                    printf("\nEscriba [SI] para continuar y [NO] para cancelar: "); 
                    gets(respuesta); 
                    if(strstr(respuesta,"SI")==0)
                    {
                        printf("** [OPERACION CANCELADA] **\n");
                    } 
                    else
                    {
                        cliente[NoCuenta].saldo += cliente[NoCuenta].transacciones.depositos;  
                        cliente[NoCuenta].transacciones.stotal += cliente[NoCuenta].transacciones.depositos; 
                        printf("** --DEPOSITO EXITOSO-- **");    
                    }
                }
                else printf("*** NO EXISTE CUENTA ***\n"); 
            break;
        case 7: printf("\nNumero de cuenta: "); 
                scanf("%d",&NoC); 
                fflush(stdin); 
                int para =0; 
                int intentos = 0;
                NoCuenta = Busqueda_no_cuenta(cliente,NoC,clientes_number);  
                if( NoCuenta != -1)
                {
                    printf("Ingrese la cantidad a retirar: "); 
                    scanf("%f",&cliente[NoCuenta].transacciones.retiros);
                    do{
                        printf("Ingrese su NIP para realizar operacion: "); 
                        scanf("%d",&nip);  
                        if(nip == cliente[NoCuenta].NIP){
                            if(cliente[NoCuenta].saldo >= cliente[NoCuenta].transacciones.retiros){
                                cliente[NoCuenta].saldo -=cliente[NoCuenta].transacciones.retiros;
                                printf("** OPERACION EXITOSA **\n"); 
                                para = 1; 
                            }
                            else 
                            {
                                printf("\n***xxx SALDO INSUFICIENTE xxx***\n"); 
                                printf("\tESTADO DE CUENTA\n"); 
                                cliente[NoCuenta].transacciones.retiros = 0.00; 
                                show_cuenta_ptr(&cliente[NoCuenta]);
                                para = 1; 
                            }  
                        }
                        else printf("NIP INCORRECTO\n"); 
                        intentos++;
                    }while(para ==0 && intentos != 3);
                    if(intentos > 2)
                    {
                        printf("EXCEDIO AL NUMERO DE INTENTOS\n"); 
                    } 
                }
                else printf("*** NO EXISTE CUENTA ***\n"); 
            break;
        case 8: return 0;
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
    printf("\nMi Cuenta\n"); 
    printf("1. Crear cuenta.\n"); 
    printf("2. Buscar.\n"); 
    printf("3. Mostrar cuenta.\n"); 
    printf("4. Editar cuenta.\n"); 
    printf("5. Borrar cuenta.\n"); 
    printf("6. Depositar\n"); 
    printf("7. Retirar.\n"); 
    printf("8. Salir\n"); 
    printf("Ingrese una opcion: "); 
    scanf("%d",&op); 
    }while((op <1 )|| (op>8)); 
}

Clientes new_cuenta()
{
    int verificado,aux;  
    int NCuenta; 
    Clientes m;
    printf("** Datos del Usuario **\n");
    printf("Ingrese su nombre completo: "); 
    gets(m.Nombre); 
    printf("Ingrese su anio de nacimiento: "); 
    scanf("%d",&m.anio);
    do{
        aux = 48310000 + rand() % 48319000;
        verificado = verifique_no_cuenta(&m,aux,clientes_number);  
    }while (verificado != 1);
    m.numero_cuenta = aux; 
    printf("** Tu numero de cuenta es: %d **\n",m.numero_cuenta); 
    printf("Cree su NIP: ");
    scanf("%d",&m.NIP); 
    printf("Ingrese un Saldo inicial: "); 
    scanf("%f",&m.saldo); 
    m.transacciones.stotal = m.saldo; 
    return m; 
}
void show_cuenta_ptr(Clientes *m)
{
    printf("---Datos del usuario--- \n");
    printf("Nombre: %s\n",m->Nombre);
    printf("Anio de nacimiento: %d\n",m->anio); 
    printf("Numero de cueta: %d\n",m->numero_cuenta); 
    printf("NIP: %d\n",m->NIP);  
    printf("Saldo Total:$%.2f\n",m->transacciones.stotal);
    printf("Depositos:  $%.2f\n",m->transacciones.depositos); 
    printf("Retiros:    $%.2f\n",m->transacciones.retiros);  
    printf("        -----------------------\n");
    printf("Saldo:      $%.2f\n\n",m->saldo);  
}

void show_clientes(Clientes *m,int size)
{
    for(int i = 0; i<size ; i++)
    {
        if(m[i].numero_cuenta != -999)
        {
            printf("\n\t**CUENTA%d**\n",i+1); 
            show_cuenta_ptr(&m[i]);
        } 
    }
}
int verifique_no_cuenta(Clientes *m, int No, int size)
{
    for(int i=0; i<size; i++)
    {
        if(No == m[i].numero_cuenta)
        {
            return -1; 
        }
    }
    return 1; 
}

int Busqueda_no_cuenta(Clientes *m, int No, int size)
{
    for(int i = 0; i<size; i++)
    {
        if(No ==m[i].numero_cuenta)
        {
            return i; 
        }
    }
    return -1;
}
void find_cuenta_nom(Clientes *m,int size, char nom[])
{
    int k=0;
    for(int i= 0; i<size; i++)
    {
        if(strstr(m[i].Nombre,nom)==NULL)
        {  
        }
        else
        {
            if(m[i].numero_cuenta != -999)
            {
                k++;
                printf("\nCuenta #%d\n",k);
                printf("Coincide con: \n"); 
                show_cuenta_ptr(&m[i]);
            }    
        }  
    }
    printf("Coincidencias encontradas: %d\n",k);
}

void find_rango(Clientes *m,int size, int rango1, int rango2)
{
    int k=0;
    for(int i=0; i<size; i++)
    {
        if(m[i].anio >= rango1 && m[i].anio<= rango2 && m[i].numero_cuenta != -999)
        {
            k++;  
            printf("\nCuenta #%d\n",k); 
            show_cuenta_ptr(&m[i]);
        }
    }
    printf("Resultados encontrados: %d\n",k); 
}

int busqueda(Clientes *m)
{
    char nom[30]; 
    int opt,Noc,NoCuenta,rango1,rango2; 
    printf("1. Por No de cuenta.\n");
    printf("2. Por nombre.\n"); 
    printf("3. Por rango.\n"); 
    printf("Opcion: "); 
    scanf("%d",&opt); 
    fflush(stdin); 
    switch (opt)
    {
    case 1: printf("\nIngrese su numero de cuenta: "); 
                scanf("%d",&Noc);
                NoCuenta = Busqueda_no_cuenta(m,Noc,clientes_number);
                if(NoCuenta != -1)
                { 
                    show_cuenta_ptr(&m[NoCuenta]); 
                }
                else printf("XXX La cuenta no existe XXX\n");
        break;
    case 2: printf("\nNombre del cliente: "); 
                gets(nom); 
                find_cuenta_nom(m,clientes_number,nom);
        break;
    case 3: printf("Ingrese el rango a buscar (0000-0000): ");
                scanf("%d-%d",&rango1,&rango2); 
                find_rango(m,clientes_number,rango1,rango2);
        break;
    default:
        break;
    }
}

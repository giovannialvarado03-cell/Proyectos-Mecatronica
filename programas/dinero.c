
#include <stdio.h>

int main()
{
    int dinero, mil, quinientos, doscientos, cien, cincuenta, veinte, diez, cinco, dos, uno;

    printf("\nIngresa la cantidad de Dinero: ");
    scanf("%d", &dinero);

    mil = dinero / 1000;
    dinero = dinero % 1000;
    quinientos = dinero / 500;
    dinero = dinero % 500;
    doscientos = dinero / 200;
    dinero = dinero % 200;
    cien = dinero / 100;
    dinero = dinero % 100;
    cincuenta = dinero / 50;
    dinero = dinero % 50;
    veinte = dinero / 20;
    dinero = dinero % 20;
    diez = dinero / 10;
    dinero = dinero % 10;
    cinco = dinero / 5;
    dinero = dinero % 5;
    dos = dinero / 2;
    dinero = dinero % 2;
    uno = dinero / 1;
    dinero = dinero % 1;

    printf("\nBilletes de mil : %d",mil);
    printf("\nBilletes de quinientos: %d",quinientos);
    printf("\nBilletes de dosicentos: %d",doscientos);   
    printf("\nBilletes de cien: %d",cien);
    printf("\nBilletes de cincuenta: %d",cincuenta);
    printf("\nBilletes de veinte: %d",veinte);  
    printf("\nMonedas de diez: %d",diez);  
    printf("\nMonedas de cinco: %d",cinco);
    printf("\nMonedas de dos: %d",dos); 
    printf("\nMonedas de uno: %d",uno);   
    
    return 0;
}
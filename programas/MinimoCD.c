#include<stdio.h>
int main(){
    int numero1,numero2,residuo,mcd;
    printf("Numero1: ");
    scanf("%d",&numero1);
    printf("Numero2: ");
    scanf("%d",&numero2);
    do{
       residuo=numero1%numero2;
       if(residuo!=0){
          numero1=numero2;
          numero2=residuo;
       }
       else{
        mcd=numero2;
       }
    }while(residuo!=0);
    printf("MCD: %d",mcd);
    return 0;
}

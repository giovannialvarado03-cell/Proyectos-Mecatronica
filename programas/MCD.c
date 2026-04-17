#include<stdio.h>

int MCD(int num_1, int num_2); 

int main(){
    int numero1,numero2,residuo,mcd;
    printf("Numero1: ");
    scanf("%d",&numero1);
    printf("Numero2: ");
    scanf("%d",&numero2);
    mcd = MCD(numero1,numero2); 
    printf("MCD: %d",mcd);
    return 0;
}
int MCD(int num_1, int num_2)
{
    int residuo,mcd; 
    do{
       residuo=num_1%num_2;
       if(residuo!=0){
          num_1=num_2;
          num_2=residuo;
       }
       else{
        mcd=num_2;
       }
    }while(residuo!=0);
    return mcd; 
}
#include<stdio.h>
int main(){
    int numero;
    printf("Digite numero: \n");
    scanf("%d",&numero);
    if(numero>0){
        printf("El numero es Positivo \n");
    }
    else if (numero==0){
        printf("El numero  es cero \n");
    }else{
        printf("El numero es negativo \n");
    }

    if(numero>0){

        if (numero %2 ==0)
        {
            printf("El numero es par \n");
        }
        else{
            printf("El numero es impar \n");
        }

    }   
    
}
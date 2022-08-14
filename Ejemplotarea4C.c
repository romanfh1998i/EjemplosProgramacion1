#include <stdio.h>
#include <stdlib.h> 
int main(){
    int cantidaddemotherboard,pagoMayor,incetivo,pago;
    printf("Digite la cantidad de motherboard a comprar\n");
    scanf("%d",&cantidaddemotherboard);
    if (cantidaddemotherboard<=5){
        incetivo=cantidaddemotherboard*3000;

    }
    else if(cantidaddemotherboard>5){
        incetivo=cantidaddemotherboard*4000;
    }
    printf(" incentivo al empleado sera %d \n",incetivo);
}
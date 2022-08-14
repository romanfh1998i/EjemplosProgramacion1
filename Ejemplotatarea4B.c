#include <stdio.h>
#include <stdlib.h> 
int main(){
    float libra,kilogramo,gramo;
    printf("Digite el pesos \n ");
    scanf("%f", &libra);
    gramo=(libra*453.59237);
    kilogramo=(libra* 0.453592);
    
    printf("El peso en kilogramos seria de %f \n",kilogramo);
    printf("El peso en gramos seria de %f \n",gramo);
}
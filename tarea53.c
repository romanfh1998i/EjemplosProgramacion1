#include <stdio.h>
#include<stdlib.h>
int main(){
    int o,n,fact=1;
    printf("Ingrese el numero para calcular el factorial \n");
    scanf("%d",&n);
    for(o=1;o<=n;o++){
        fact=fact*o;
    }
    printf("El factorial de %d es %d \n",n,fact);
}
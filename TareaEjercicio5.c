#include <stdio.h>
#include<stdlib.h>
int main(){
     int numeroPares=0;
     int numeroImpares=0;
     int sumaPares=0;
     int SumaImpare=0 ;
     float mediaAritmetica=0;
     int  n[10];
     int i;
    for(i=0;i<=9;i++){
        printf("\n Ingresa un numero %d\n", i+ 1);
        scanf("%d",&n[i]);

    }
    for(i=0;i<=9;i++){
        int valor=n[i];
        if((valor%2)==0){
            numeroPares++;
            sumaPares+=valor;
        }
        else{
            numeroImpares++;
            SumaImpare+=valor;

        }
    }
           
            
         if(numeroImpares>0){
                mediaAritmetica=SumaImpare/numeroImpares;

            }
        printf("la cantidad de numero pares es de %d la suma de los pares es %d",numeroPares,sumaPares);
        printf("la cantidad de numero impares es de %d la media aritmerica es %f",numeroImpares,mediaAritmetica);
}

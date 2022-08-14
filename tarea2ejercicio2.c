#include <stdio.h>
#include<stdlib.h>
int main(){
    int anos;
    char etapa1[]="\n menor de edad";
    char etapa2[]="\n mayor de edad";
    printf("Digiste anos: ");
    scanf("%d", &anos);
    if (anos>=18){
        printf(etapa2);
    }
    else {
        printf(etapa1);
    }
    if(anos<=6){
        printf("\n Infante ");
        
    }
    else if(anos >= 7&& anos <= 11){
        printf(" \n Ninos ");
        
    }
    else if (anos >=12 && anos<=17){
        printf("\n Adolescente");
            }
    else if (anos>=18&&anos<=20){
        printf("\n adolescente");
        
    }
    else if (anos>=21 && anos <=26){
        printf("\n Joven");
        
            }
    else if (anos >=27 && anos <=59){
        printf("\n adulto");
        
    }
    else if (anos>60){
        printf("\n Envejenciente");
        
    }
}
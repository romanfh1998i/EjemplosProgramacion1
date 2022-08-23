#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int main(){
    int CantidadPSegundos,CantidadPasos,CantidadHoras,CantidadMinutos,CantidadSegundos,cantidadMs,cantidadHs;
    printf(" Calcule los pasos de un atleta en segundo ");
    printf("Digite la cantidad de horas ");
    scanf("%d",&CantidadHoras);
    printf("Digite la cantidad de minutos ");
    scanf("%d",&CantidadMinutos);
     printf("Digite la cantidad de segundo ");
    scanf("%d",&CantidadSegundos);
    CantidadSegundos=(CantidadSegundos*1);
    cantidadHs=(CantidadHoras*3600);
    cantidadMs=(CantidadMinutos*60);
    CantidadPasos=2;
    CantidadPSegundos=((CantidadSegundos+cantidadMs+cantidadHs)*CantidadPasos);
    printf("la cantidad de pasos de minutos es %d",CantidadPSegundos);    

}

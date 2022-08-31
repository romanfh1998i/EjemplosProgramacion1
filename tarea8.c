#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

void main() {
  float a,b;
  printf("Ingrese un numero \n");
  scanf("%f",&a);

  printf("Ingrese un numero \n");
  scanf("%f",&b);

  float suma=FuncionSuma(a,b);
  float resta =FuncionResta(a,b);
  float division =FuncionDivide(a,b);
  float potencia=FuncionPotencia(a,b);
  float multiplicacion = FuncionMultiplica(a, b);
  float raiz=FuncionRaizCuadrada1(a);
    
  printf("resultado de la suma %f \n",suma);
  printf("resultado de la resta %f \n",resta);
  printf("resultado de la division %f \n", division);
  printf("resultado de la raiz %f \n",raiz);
  printf("resultado de la potencia %f \n", potencia);
}
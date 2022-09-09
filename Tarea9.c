#include <stdio.h>
#include <string.h>
#define MaxNotas 10

void swap(int* xp, int* yp){
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void Ascendete(int arr[],int n ){
    int i,j,min;
    for(i=0;i<n-1 ;i++){
        min=i;
        for (j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            swap(&arr[min],&arr[i]);    
            }
        }
    }
}

void descendete(int arr[],int n ){
    int i,j,max;
    for(i=0;i<n ;i++){
        max=i;
        for (j=i+1;j>n;j++){
            if(arr[j]>arr[max]){
                max=j;
             swap(&arr[max],&arr[i]);   
            }
        }
    }
}
void print(int arr[],int tamano){
    int i;
    for (i=0;i<tamano;i++){
        printf("%d",arr[i]);
    }    
    printf("\n");
}
int main(){
    int a,j,jx,ord;
    int notas[MaxNotas];

        for (j=0;j<MaxNotas;++j){
            printf("ingrese nota # %d \n",j+1);
            scanf ("%d",&notas[j]);
        }
        
        print(notas,MaxNotas);

        
        descendete(notas,MaxNotas);
        print(notas,MaxNotas);

        

}


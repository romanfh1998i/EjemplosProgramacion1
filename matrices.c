#include <stdio.h>
main(){

    int x,i,notas[4][4];
    for(x=0;x<4;x++){
        for(i=0;i<4;i++){
            printf("Digites la notas del estudiantes # %d \n",i+1);
            scanf("%d",&notas[x][i]);

        }
    
    }
    for(x=0;x<4;x++){
        for(i=0;i<4;i++){
            printf("%d",notas[x][i]);
        }
    }
}
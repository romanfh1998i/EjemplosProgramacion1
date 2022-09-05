#include <stdio.h>
#include <string.h>
#include <ctype.h>
void Mayuscula(char palabra[]){
    char mayus[20];
    for(int i=0;palabra[i]!='\0';++i){
        mayus[i]=toupper(palabra[i]);
    }
    printf("la palabra en mayuscula es %s \n",mayus);
}
void minuscula(char palabra[]){
    char minus[20];
    for(int i=0;palabra[i] !='\0';++i){
        minus[i]=tolower(palabra[i]);
    }
    printf("la palabra en minuscula es %s \n",minus);
}

int main (){
    char palabra[20];    
    int i,longitud,u=0,l=0;
    int condicion=0;
    printf("Digite una palabra \n");
    scanf("%s",palabra);
    
    
    longitud=strlen(palabra);
    for(i=0;i<longitud;i++){
        if(palabra[i]!=palabra[longitud-i-1]){
            condicion=1;

            break;
           
    }
    }    
    if(condicion){
        printf("%s no es palindromo\n",palabra);
        
           
    }else{
        printf("%s es palindromo",palabra);

    }
    printf("la cantidad de palabra en la palabra %s es =%d\n",palabra,longitud);
    Mayuscula(palabra);
    minuscula(palabra);

}

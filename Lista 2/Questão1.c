#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero = 1, i;

    while(numero > 0){
        printf("\nEntre com um numero para saber seus divisores ou escreva -1 para sair:");
        scanf("%d",&numero);
        
        for(i=1; i<=numero; i++){  
            if (numero %  i == 0){
            printf("%d ", i);
            }
        }
    }

    return(0);
}
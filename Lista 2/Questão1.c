//Entre com uma lista de números inteiros positivos (finalize a leitura com um
//número negativo) e, para cada número lido, imprima todos os seus divisores

#include <stdio.h>

int main(){
    int numero = 1, i;
    
    printf("\nEntre com um numero para saber seus divisores ou escreva -1 para sair:");
    scanf("%d",&numero);

    while(numero > 0){                       // condição de saindo do while == valor menor que 0;
        if (numero == 0){
		    printf("\nO numero 0 nao possui divisores\n"); 
        }
        else{
            for(i=1; i<=numero; i++){           //Coloquei 10 em numero
                if (numero %  i == 0){          // 10 % 9 = resto 1 OFF; 10 % 8 = RESTO 2 OFF; 10 % 7 = RESTO 4 OFF
                    printf("%d ", i);           // 10 % 5 = RESTO 0 PEGAO O VALOR 5; e assim em diante!
                }                               // no final fica 10, 5, 2, 1 !!
            }
        }

        printf("\nEntre com um numero para saber seus divisores ou escreva -1 para sair:");
        scanf("%d",&numero);

    }

    return(0);
}
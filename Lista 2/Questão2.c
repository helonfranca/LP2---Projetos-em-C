//Leia um n�mero inteiro menor do que 10 e imprima todos os seus m�ltiplos 
// dentro do intervalo [1, 100], em ordem decrescente. Ex: num = 8
// M�ltiplos = 88, 80, 72, 64, 56, 48, 40, 32, 24, 16, 8, 1


#include <stdio.h>

int main (){
    int i , num;

    printf("\nEntre com um valor de 1 a 10 para mostrar multiplos de tal:\n ");
    scanf("%d",&num);

    if (num == 0){
		printf("\nO numero 0 nao possui divisores\n"); 
    }
    else {
        printf("\nOs multiplos de %d no intervalo [1, 100] sao: ", num);
        for(int i = 1; i <= 100; i++){                                      
            if(i % num == 0){                                           // num = 5
                printf("%d ",i);                                        // 100 % 5 == 0 ?, numeros com resto 0 são multiplos de tal
            }                                                           // 95 % 5 == 0 também é multiplo
        }
    }   
    return 0;
}
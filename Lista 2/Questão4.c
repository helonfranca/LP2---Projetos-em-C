#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, quociente = 0, resto = 1;
    printf("\nDigite o primeiro numero: ");
    scanf("%d",&num1);
    printf("\nDigite o primeiro numero: ");
    scanf("%d",&num2);

    resto = num1 % num2;

    while(num1 > resto){
        num1 = num1 - num2;
        quociente = quociente + 1;
    }
    printf("\nValor do quociente: %d ",quociente);
    printf("\nValor do resto: %d ",resto);
    return(0);
}
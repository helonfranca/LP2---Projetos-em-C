//Escreva um programa que calcula o valor do quociente e resto de um inteiro
//dividido por outro, usando o método de subtrações sucessivas. Ex: 9/2 => 9-
//2=7 => 7-2=5 => 5-2=3 => 3-2=1. Então: quociente = 4 (pq foram feitas 4
//subtrações do número 2) e resto = 1

#include <stdio.h>

int main(){
    int num1, num2, quociente = 0, resto;

    printf("\nDigite o primeiro numero: ");
    scanf("%d",&num1);
    printf("\nDigite o primeiro numero: ");
    scanf("%d",&num2);

    resto = num1 % num2;

    
    while(num1 > resto){
        num1 = num1 - num2;
        quociente = quociente + 1;    //CONTADOR DOS QUOCIENTES
    }

    printf("\nValor do quociente: %d ",quociente);
    printf("\nValor do resto: %d ",resto);
    return(0);
}
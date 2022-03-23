#include <stdio.h>
#include <stdlib.h>
//5)Leia um conjunto de números inteiros, até que um número negativo seja
//digitado. Ao final, calcule e imprima:
//a) A quantidade de números válidos lida
//b) O percentual de números pares
//c) A média dos números ímpares
//d) O maior e o menor número lido

int main(){
    
    int maior = 0, menor = 0, i = 0;
    int num = 1, quantidadenum = 0, par = 0, impar = 0, porcentualPares = 0, mediaimpares = 0, quantidadepares = 0, quantidadeimpares = 0, somaimpares = 0;
    printf("\n\tBem vindo ao programa!\n");

    while( num > 0){
        printf("\nLeia um conjunto de numeros inteiros, ate que um numero negativo seja digitado: ");
        scanf("%d", &num);

        if(num > 0){
            quantidadenum = quantidadenum + 1;

            if(i == 0){
                maior = num;
                menor = num;
                i++;
            }

            if(num>maior){
                maior = num;
            }

            if(num<menor){
                menor = num;
            }
    
            if(num % 2 == 0){
                par++;
                quantidadepares = quantidadepares + 1;
            }

            else {
                impar++;
                quantidadeimpares = quantidadeimpares + 1;
                somaimpares = somaimpares + num;
            }   
        }   
        
    }
    
    porcentualPares = (par * 100.0) / quantidadenum;
    mediaimpares = somaimpares / quantidadeimpares;


    printf("\nMostrar quantidade de numeros: %d ", quantidadenum);
    printf("\nMostrar porcentual de numeros pares: %d ", porcentualPares);
    printf("\nMostrar media de numeros impares: %d ", mediaimpares); // nessa parte eu fiz alguma coisa errada, só não encontrei o erro!
    printf("\nMostrar quantidade de numeros pares: %d ", quantidadepares);
    printf("\nMaior numero: %i",maior);
    printf("\nMenor numero: %i",menor);
    
    return(0);
    }
//5)Leia um conjunto de números inteiros, até que um número negativo seja
//digitado. Ao final, calcule e imprima:
//a) A quantidade de números válidos lida
//b) O percentual de números pares
//c) A média dos números ímpares
//d) O maior e o menor número lido

#include <stdio.h>

main(){
     
    int maior = 0, menor = 0;
    float mediaimpares, porcentualPares;
    int num , quantidadenum, contpar, quantidadeimpares , somaimpares ;

    quantidadenum = contpar = quantidadeimpares = somaimpares = 0;              //inicializando as variaveis com o valor zero;

    printf("\n\tBem vindo ao programa!\n");
    printf("\nLeia um conjunto de numeros inteiros, ate que um numero negativo seja digitado: ");
    scanf("%d", &num);

    maior = menor = num;

    while(num > 0){

        quantidadenum++;                        //contando os numeros digitados

        if((num % 2) == 0){                     //sabendo quais são os pares 
            contpar++;                          //contando os pares
        }
        else {
            quantidadeimpares++;                //contando impares
            somaimpares += num;                 //somando os impares
        }  

        if(num > maior){                        //comando para saber qual é o maior e o menor numero           
            maior = num;
        }
        if(num < menor){
            menor = num;
        }
  

        printf("\nLeia um conjunto de numeros inteiros, ate que um numero negativo seja digitado: ");
        scanf("%d", &num);
        
    }
    
    porcentualPares = (float)contpar / quantidadenum * 100;
	mediaimpares = (float)somaimpares / quantidadeimpares;


    printf("\nMostrar quantidade de numeros: %d ", quantidadenum);
    printf("\nMostrar porcentual de numeros pares: %.2f%%", porcentualPares);
    printf("\nMostrar media de numeros impares: %.2f ", mediaimpares);
    printf("\nMostrar quantidade de numeros pares: %d ", contpar);
    printf("\nMaior numero: %i",maior);
    printf("\nMenor numero: %i",menor);
    
    return(0);
    }
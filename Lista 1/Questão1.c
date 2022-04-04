//Faça um programa em C que leia vários números até encontrar o número
//999. A seguir, imprima a quantidade de números lidos, a média dos números,
//o maior e o menor número encontrado. 

#include <stdio.h>

void main(){
    int maior = 0, menor = 0, guardaN, i = 0, soma = 0;
    float media;

    printf("\n Digite um numero: ");
    scanf("%i",&guardaN);

    maior = menor = guardaN;

    while(guardaN != 999){

        i += 1;                  //contador dos numeros 
        soma += guardaN;         //Fazendo a soma dos numeros

        if(guardaN > maior){    
            maior = guardaN;
        }     
        if(guardaN < menor){
            menor = guardaN;
        } 

        printf("\n Digite um numero: ");
        scanf("%i",&guardaN);
    }
    
   
    media = soma/i;

    printf("\nMaior numero: %d",maior);
    printf("\nMenor numero: %d",menor);
    printf("\nSoma dos numeros: %d",soma);
    printf("\nQuantidade de numeros: %d", i);
    printf("\nMedia dos numeros: %2.1f", media);
    

    return 0;
}

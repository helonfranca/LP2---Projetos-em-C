#include <stdio.h>

int main(void){
    int maior=0, menor=0, guardaN=0, i=0, quantidadeN = 0;
    while(1){
        printf("\n Digite um numero: ");
        scanf("%i",&guardaN);
        if(i==0){
            maior = guardaN;
            menor = guardaN;
            i++;
        } 
        else if(guardaN==999){
            break;
        }  
        else if(guardaN>maior){
            maior = guardaN;
        }
        else if(guardaN<menor){
            menor = guardaN;
        }
    }
    
    printf("\nMaior numero: %i",maior);
    printf("\nMenor numero: %i",menor);
    printf("\nSoma doa numeros: %i",quantidadeN);
    return 0;
}


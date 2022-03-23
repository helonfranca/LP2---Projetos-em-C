#include <stdio.h>


int main(){

    int vet[10] = {2,3,6,12,7,5,9,12,4,8};
    int i, x;
    int maior = 0;


    for(i = 0 ; i < 10 ; i++){
        printf("%d ",vet[i]);
    }

    for (i = 0 ; i < 10; i++) { //Achando maior numero do vetor 
        if (vet[i] > maior){
            maior  = vet[i];
        }
    }

    printf("\nMaior valor: %i", maior);

    for (i = 0; i < 10; i++) {           //Valores repetidos
        for (x = i + 1; x < 10; x++){
            if (vet[i] == vet[x]){
                printf("\nValor repetido %i - Na posicao %i e %i", vet[i], i + 1 , x + 1 );
                
            }
        }
    }

    return(0);
}
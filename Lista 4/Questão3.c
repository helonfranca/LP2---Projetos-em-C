#include <stdio.h>
#include <time.h>

int main(){

    int vet[12];
    int i, x;

    srand(time(NULL)); 

    for(i = 0; i < 12 ; i++){           //Formando 12 jogadas do dado
        vet[i] = 1 + rand() % 6;
    }

    for(i = 0; i < 12; i++){            //Resultado armazenado em um vetor 
        printf("%d ",vet[i]);
    }

    for (i = 0; i < 12; i++) {          //Mostrando quantas vezes o dado parou na mesma posição
        for (x = i + 1; x < 12; x++){
            if (vet[i] == vet[x]){
                printf("\nValor repetido %i Nas jogadas %i e %i", vet[i], i + 1 , x + 1);
                for (x = x + 1; x < 12; x++) {
                    if (vet[i] == vet[x]) {
                        printf(" e %i", x + 1);

                    }
                }
            }
        }
    }

    return(0);
}
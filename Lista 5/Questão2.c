//Faça um programa em C que leia um vetor de 30 inteiros e implemente as
//funções a seguir, utilizando, OBRIGATORIAMENTE, ponteiros e passagem de
//parâmetros por referência:
//a. void zeraPares (int * vet): recebe um vetor e troca todos os
//números pares contidos nele pelo zero.
//b. void dobra (int * vet): recebe um vetor e multiplica todos os seus
//elementos por dois.
//c. void soma (int * vet1, int * vet2): recebe dois vetores de inteiros
//e soma cada para de elementos de mesmo índice, colocando o
//resultado no primeiro vetor.

#include <stdio.h>
#include <time.h>

void zeraPares(int * vet1){      //função para zerar numeros pares
    int i;

    for(i = 0; i < 30; i++){
        if(vet1[i] % 2 == 0){
            vet1[i] = 0;
        }
        else {
            vet1[i] = vet1[i];
        }
    }
}

void dobra(int * vet2){          //função para dobrar os valores do vetor
    int i;

    for(i = 0; i < 30; i++){
        vet2[i] = vet2[i] * 2;
    }
}

void soma(int * vet1, int * vet2){          //função para somar dois vetores
    int i;

    for(i = 0; i < 30; i++){
        vet1[i] = vet1[i] + vet2[i];
    }
}

int main(void){
    int vet1[30];
    int vet2[30];
    int i;

    srand(time(NULL)); 

    for(i = 0; i < 30 ; i++){           //Formando vetor com 30 inteiros
        vet1[i] = 1 + rand() % 50;
    }

     for(i = 0; i < 30 ; i++){           //Formando vetor com 30 inteiros
        vet2[i] = 1 + rand() % 50;
    }

    printf("Valores no vetor 1: ");
    for(i = 0; i < 30; i++){            //Mostrar vetor 1
        printf("%d ",vet1[i]);
    }

    printf("\n\n");

    printf("Valores no vetor 2: ");
    for(i = 0; i < 30; i++){            //Mostrar vetor 2
        printf("%d ",vet2[i]);
    }

    printf("\n\n");

    zeraPares(vet1);

    printf("Trocar valores pares por 0: "); //Trocar valores pares para 0
    for(i = 0; i < 30; i++){
        printf("%d ", vet1[i]);
    }

    printf("\n\n");

    dobra(vet2);

    printf("Dobro do vetor: ");         //dobro do vetor
    for(i = 0; i < 30; i++){
        printf("%d ", vet2[i]);
    }

    printf("\n\n");

    soma(vet1, vet2);

    printf("Soma dos vetores: ");         //somando vetores
    for(i = 0; i < 30; i++){
        printf("%d ", vet1[i]);
    }


    return 0;
}





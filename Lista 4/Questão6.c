#include <stdio.h>

int main(){

    int Matriz[3][5] = {{3,6,9,2,7},{8,2,4,6,1},{7,12,10,2,2}};
    int somalinhas[10];
    int i,j;

    printf("\nValores reais da Matriz:\n\n");

    for(i = 0 ; i < 3 ; i++){       //Imprimindo Matriz
        for(j = 0 ; j < 5 ; j++){
            printf("%4d ", Matriz[i][j]);
        }

        printf("\n");
    }

    for(i = 0 ; i < 3 ; i++){       //Somando as linhas 
        int soma = 0;
        for(j = 0 ; j < 5 ; j++){
            soma += Matriz[i][j];
        }
        somalinhas[i] = soma;
    }
   
   
    for(i = 0 ; i < 3 ; i++){       //Imprimindo soma das linhas 
       printf("\nSoma da linha %d = %d\n", i + 1, somalinhas[i]);
    }
    return(0);
}
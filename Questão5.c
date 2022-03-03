#include <stdio.h>

int main(){
    int Matriz[4][5] = {{3,6,9,2,7},{8,2,4,6,1},{7,6,4,2,2},{1,6,5,2,3}};
    int soma[4][5];
    int i,j;
    
    printf("Valores reais da Matriz:\n\n");

    for(i = 0 ; i < 4 ; i++){       //Mostrando a Matriz
        for(j = 0 ; j < 5 ; j++){
            printf("%4d ", Matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nO dobro da Matriz:\n\n");   //Mostrando o dobro da Matriz

    for(i = 0 ; i < 4 ; i++){
        for(j = 0 ; j < 5 ; j++){
            printf("%4d ", Matriz[i][j] * 2);
        }
        printf("\n");
    }

    printf("\n");

    for(i = 0 ; i < 4 ; i++){      //Soma da matriz base com a Matriz dobro
        for(j = 0 ; j < 5 ; j++){
            soma[i][j] = Matriz[i][j] + (Matriz[i][j] * 2);
        }
        
    }

    printf("Resultado da Matriz base somada com a matriz dobro:\n\n");

    for(i = 0 ; i < 4 ; i++){
        for(j = 0 ; j < 5 ; j++){
            printf("%4d ", soma[i][j]);
        }
        printf("\n");
    }
    
    return(0);
}
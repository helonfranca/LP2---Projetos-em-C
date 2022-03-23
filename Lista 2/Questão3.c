#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade = 1, idade_21 = 0, idade_60 = 0, mediaidade = 0, somaidade = 0;

    printf("\n\tBemvindo ao programa!\n");
    printf("informe -1 para parar programa");

    while(idade > 0){
        printf("\nEntre com a idade de varias pessoas: ");
        scanf("%d", &idade);

        if(idade > 21){
            idade_21 = idade_21 + 1;
        }

        if(idade > 60){
            idade_60 = idade_60 + 1;
            somaidade += idade;
        }

    }
    mediaidade = somaidade/idade_60;

    printf("\nQuantidade de pessoas acima de 21 anos e igual a %d ", idade_21);
    printf("\nQuantidade de pessoas acima de 60 anos e igual a %d ", idade_60);
    printf("\nMedia de idade das pessoas com mais de 60 e igual a %d ", mediaidade);
    return(0);
}
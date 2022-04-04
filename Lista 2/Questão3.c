//)Entre com a idade de várias pessoas (finalize a leitura com um número
//negativo) e imprima a quantidade de pessoas que tinham mais de 21 anos e a
//média de idade das pessoas com mais de 60.

#include <stdio.h>

int main(){
    int idade, idade_21 = 0, idade_60 = 0, somaidade = 0;
    float mediaidade;

    printf("\n\tBemvindo ao programa!\n");
    printf("informe -1 para parar programa");

    while(idade > 0){
        printf("\nEntre com a idade de varias pessoas: ");
        scanf("%d", &idade);

        if(idade > 21){
            idade_21 = idade_21 + 1;                        //contador de pessoas com mais de 21 anos;
        }

        if(idade > 60){
            idade_60 = idade_60 + 1;                       //contador de pessoas com mais de 60;
            somaidade += idade;                            //Somando idade de pessoas com mais de 60;
        }

    }

    mediaidade = somaidade/idade_60;

    printf("\nQuantidade de pessoas acima de 21 anos e igual a %d ", idade_21);
    printf("\nQuantidade de pessoas acima de 60 anos e igual a %d ", idade_60);
    printf("\nMedia de idade das pessoas com mais de 60 e igual a %0.2f ", mediaidade);
    
    return(0);

}
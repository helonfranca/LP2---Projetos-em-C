//Faça um programa em C que leia uma, ou duas, strings de 30 caracteres e
//implemente as funções a seguir, utilizando, OBRIGATORIAMENTE, ponteiros
//e passagem de parâmetros por referência:
//a. void maiúsculas (string * str): converte todas as letras da string
//para maiúsculas.
//b. string * str concatena (string * str, string * str): recebe duas
//strings e retorna uma string resultante da concatenação das
//duas iniciais.
//c. int capitaliza (string * str): recebe uma string e troca para
//maiúscula a primeira letra e todas as que seguirem um espaço,
//retorna também o tamanho da string, ou seja, a quantidade de
//caracteres preenchidos, antes do ‘\0’. OBS: Toda string em C
//termina com o caractere ‘\0’.
//d. int compara(string * str, string * str): recebe duas strings e
//retorna um resultado inteiro (-1, 0 ou 1) indicando se,
//respectivamente, a primeira é menor, igual ou maior do que a
//segunda string. OBS. A comparação é feita pela ordem
//lexográfica.

#include <stdio.h>
#include <string.h>

void maiusculas(char * str1){ 
    int i = 0;
 
    while(str1[i]!= '\0'){
        str1[i] = toupper(str1[i]);
        i++;
    }
    
}

int compara(char* str1, char * str2){
    int valor = 0;

    valor = strcmp(str1, str2);
    
}


main(void){

    char str1[30];
    char str2[30];
    int valor = 0;

    printf("\nEntre com uma frase de ate 30 caracteres: \n");
    gets(str1);

    printf("\nEntre com uma frase de ate 30 caracteres: \n");
    gets(str2);

    maiusculas(str1);
    printf("Frase em maiusculo: ");
    printf("%s",str1);

    printf("\n");

    compara(str1,str2);
    printf("comparação de strings: ");
    printf("%d",compara);



    return 0;
}
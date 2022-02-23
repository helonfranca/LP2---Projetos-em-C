#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

    int num1 = 1, num2 = 1, resultado1 = 1 , op = 1;
    int resultado = 1 , resultado2 = 1, resultado3 = 1, resultado4 = 1, resultado5 = 1; //RESULTADO RETURN FUNÇÃO RECURSIVA
    char sair[4]="  ";
    char sair2[4] = "fim";

    printf("\n\tBEM VINDO(a) A CALCULADORA!\n");

    while(resultado1 != 0) {  
        printf("\nDeseja fazer qual operacao?\n\n\t1 - FATORIAL\n\t2 - POTENCIACAO\n\t3 - MULTIPLICACAO\n\t4 - DIVISAO\n\t5 - TERMOS DE FIBONACCI\nR:");
        scanf("%i", &op);
        switch(op){
            case 1:
                printf("\nDigite um numero para saber o fatorial: ");
                scanf("%i", &num1);

                resultado = fatorial(num1); 

                printf("\n\t O resultado e: %i", resultado);
                break;

            case 2:
                printf("\nDigite um numero: ");
                scanf("%i", &num1);
                printf("\nDigite outro numero: ");
                scanf("%i", &num2);
                
                resultado2 = potencia(num1, num2);

                printf("\n\t O resultado da potencia e: %i", resultado2);
                break;

            case 3:
                printf("\nDigite um numero: ");
                scanf("%i", &num1);
                printf("\nDigite outro numero: ");
                scanf("%i", &num2);
                
                resultado3 = multiplicacao(num1, num2);

                printf("\n\t O resultado da multiplicacao e: %i", resultado3);
                break;

            case 4:
                printf("\nDigite um numero: ");
                scanf("%i", &num1);
                printf("\nDigite outro numero: ");
                scanf("%i", &num2);
                
                resultado4 = divisao(num1, num2);

                printf("\n\t O resultado da divisao e: %i", resultado4);
                break;
            
            case 5:
                printf("\nDigite um numero: ");
                scanf("%i", &num1);
                
                resultado5 = fibonacci(num1);

                printf("\n\t O elemento n da sequencia e: %i", resultado5); //SEQUENCIA DE FIBO : 0 – 1 – 1 – 2 – 3 – 5 – 8 – 13 – 21 – 34 – 55 – 89 – 144 – E assim por diante…
                break;

            default:
                printf("\nDigite uma opcao valida!\n");
                break;  
        }
        
        printf("\nDeseja finalizar o programa?\nDigite fim para finalizar ou digite qualquer outro caracter para continuar!!\n");
        scanf("%s",&sair);  
        resultado1 = strcmp(sair, sair2);
    }

    printf("\n\tCalculadora Finalizada!\n");
    return(0);
}

int fatorial(int x){ // FUNÇÃO RECURSIVA FATORIAL
    int resultado;

    if(x == 0){
        resultado = 1;
    }
    else{
        resultado = x * fatorial(x - 1);
    }
    return resultado;
}


int potencia(int x, int n){ // FUNÇÃO RECURSIVA POTENCIA
    int resultado2;

    if(n == 0){
        resultado2 = 1;
    }
    else{
        resultado2 = x * potencia(x, n - 1);
    }
    return resultado2;
}

int multiplicacao(int x, int n){ // FUNÇÃO RECURSIVA MULTIPLICAÇÃO
    int resultado3;

    if(x == 0){
        resultado3 = 0;
    }
    else{
        resultado3 = n + multiplicacao(x - 1, n);
    }

    return resultado3;

}

int divisao(int x, int n){ // FUNÇÃO RECURSIVA DIVISÃO
    int resultado4;

    if(x >= n){
        resultado4 = 1 + divisao(x - n, n);
    }
    else{
       resultado4 = 0;
    }

    return resultado4;
}

int fibonacci(int x){ // FUNÇÃO RECURSIVA FIBONACCI
    int resultado5;

    if(x == 1){
        resultado5 = 0;
    }

    if(x == 2){
        resultado5 = 1;
    }

    if(x >= 3){
        resultado5 = fibonacci(x-1) + fibonacci(x-2);
    }
    return resultado5;
}
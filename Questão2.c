#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    float x=0, y=0, resultado=1;
    int op=1;
    char sair[4]="";
    char sair2[4] = "fim";

    printf("\n\tBem vindo a Calculadora!\n");

    while(resultado != 0) {  
        printf("\nDeseja fazer qual operacao?\n\n\t1 - SOMA\n\t2 - SUBTRACAO\n\t3 - MULTIPLICACAO\n\t4 - DIVISAO\n\t5 - EXPONENCIACAO\n\t6 - LOG\n\t7 - RAIZ QUADRADA\nR:");
        scanf("%i", &op);
        switch(op){
            case 1:
                printf("\nDigite o primeiro numero: ");
                scanf("%f", &x);
                printf("\nDigite o segundo numero: ");
                scanf("%f", &y);
                resultado = x+y;
                break;
            case 2:
                printf("\nDigite o primeiro numero: ");
                scanf("%f", &x);
                printf("\nDigite o segundo numero: ");
                scanf("%f", &y);
                resultado = x-y;
                break;
            case 3:
                printf("\nDigite o primeiro numero: ");
                scanf("%f", &x);
                printf("\nDigite o segundo numero: ");
                scanf("%f", &y);
                resultado = x*y;
                break;
            case 4: 
                printf("\nDigite o primeiro numero: ");
                scanf("%f", &x);
                printf("\nDigite o segundo numero: ");
                scanf("%f", &y);
                resultado = x/y;
                break;
            case 5:
                printf("Digite um numero para encontrar o exponte: ");
                scanf("%f",&x);
                printf("\nDigite o segundo numero: ");
                scanf("%f", &y);
                resultado = pow(x,y);
            case 6:
                printf("Digite um numero para log: ");
                scanf("%f",&x);
                resultado = log10(x);
                break;
            case 7:
                printf("\nDigite um numero para encontrar raiz: ");
                scanf("%f", &x);
                resultado = sqrt(x);
                break;
            default:
                printf("\n Digite uma opcao valida\n");
                break;
        }
        printf("\n\t O resultado e: %0.2f", resultado);
        printf("\n Se deseja finalizar o programa digite fim, caso queira continuar digite qualquer outro caracter!\n\t");
        scanf("%s",&sair);  
        resultado = strcmp(sair, sair2);
        
    }      
    printf("\n\tCalculadora finalizada! ");
    return 0;
}
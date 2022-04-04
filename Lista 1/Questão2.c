#include <stdio.h>
#include <math.h>
#include <string.h>

void main(){
    float x, y, resultado;
    int op = 1;
    char sair[4]="";
    char sair2[4] = "fim";

    printf("\n\tBem vindo a Calculadora!\n");

    while(op != 0) {  
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
                resultado = log(x);
                break;
            case 7:
                printf("\nDigite um numero para encontrar raiz: ");
                scanf("%f", &x);
                resultado = sqrt(x);
                break;

            default:
                printf("\nDigite uma opcao validah!!");
                
        }

        printf("\n\t O resultado eh: %0.2f", resultado);
        printf("\n Se deseja finalizar o programa digite fim, caso queira continuar digite qualquer outro caracter!\n\t");
        scanf("%s",&sair);  
        op = strcmp(sair, sair2);
        
    }     

    printf("\n\tCalculadora finalizada! ");
    return 0;
}
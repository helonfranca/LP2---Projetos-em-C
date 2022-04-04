//1) Escreva um programa que cria um tipo de registro (usando typedef) que define uma
//data, formada pelos campos DIA, MÊS e ANO. Escreva também as funções:
//• INICIALIZA, que recebe valores de dia, mês e ano, além de um registro do tipo
//data, passado por referência e atribui esses valores aos campos do registro;
//• VALIDA, que recebe o registro data, passado por valor, e verifica se os valores
//de dia, mês e ano do registro são válidos; e
//• IMPRIME, que recebe o registro data, passado por valor, e imprime seus campos.
//Dentro da função main, declare uma variável do tipo data e chame cada uma das funções
//descritas acima. 

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}data;

void inicializar(data*dt, int dia, int mes, int ano){
    
    dt->dia = dia;
    dt->mes = mes;
    dt->ano = ano;
}

int valida(data dt){
    int verificacao; //0 para invalido e 1 para valido!!!

    if(dt.ano < 0 || dt.ano > 2022){
        verificacao = 0;
    }
    else if(dt.mes < 1 || dt.mes > 12){
        verificacao = 0;
    }
    else if(dt.dia > 30 && (dt.mes == 4 || dt.mes == 6 || dt.mes == 9 || dt.mes == 12)){
        verificacao = 0;
    }
    else if(dt.dia >= 29 && dt.mes == 2){
        verificacao = 1;
    }
    else if(dt.dia < 1 || dt.dia > 31){
        verificacao = 0;
    }    
    else{
        verificacao = 1;
    }

    return verificacao;
}


void imprime(data dt){
    printf("Data digitada: %d/%d/%d", dt.dia, dt.mes, dt.ano);
}

int main(){

    data dt;
    int dia; 
    int mes;
    int ano;
    int verificacao;
    

    puts("Entre com o dia: ");
    scanf("%d", &dia);
    puts("Entre com mes: ");
    scanf("%d", &mes);
    puts("Entre com ano: ");
    scanf("%d", &ano);

    inicializar(&dt, dia, mes, ano);

    verificacao = valida (dt);
    if (verificacao == 0){
        puts("Data invalida!!");
    }
    else{
        imprime(dt);
    }

    return 0;
}
//Escreva um programa que implemente o seguinte menu de opções:
//• CRIAR DISCIPLINA (esta opção atribui código e nome à disciplina, além de
//inicializar os campos MATRÍCULA dos alunos, atribuindo a eles o valor zero).
//• INCLUIR ALUNO (verifica antes se há vagas na turma, procurando por um
//elemento do vetor TURMA tal que o campo MATRICULA do ALUNO seja igual
//a zero)
//• EXCLUIR ALUNO (dado um número de matrícula de um aluno, procurar pelo
//mesmo e trocar o valor do campo MATRICULA para zero)
//• LISTAR ALUNOS (todos os dados, de todos os alunos da disciplina)
//• CALCULAR CR MÉDIO dos alunos inscritos na disciplina
//• IMPRIMIR BOLETIM de alunos da disciplina (imprimindo um relatório onde
//conste a relação de todos os alunos, seus respectivos cursos, números de matrícula,
//total de faltas e nota na disciplina.
//• FECHAR DISCIPLINA (atribui para os campos código e nome o valor ‘ ‘ (ou
//ASCII=32) e, para os campos MATRÍCULA dos alunos, o valor zero).
//• SAIR
//OBSERVAÇÕES:
//➢ Uma DISCIPLINA é definida por uma estrutura contendo os campos:
//CÓDIGO, NOME e TURMA.
//➢ TURMA é um vetor de 40 elementos do tipo ALUNOSMAT.
//➢ Um ALUNOMAT é um registro, formado pelos campos ALUNO, NOTAS e
//FALTAS.
//➢ O campo ALUNO é um registro, formado pelos campos NOME, IDADE,
//CURSO, CR e MATRÍCULA. 

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[30];
    int idade;
    char curso[30];
    float CR;
    int matricula;
}aluno;

typedef struct{
    aluno nomedi;
    float notas;
    int faltas;
}alunomat;

typedef struct{
    int codigo;
    char nomedis[30];
    alunomat turma[40];
}disciplina;


void criardisciplina(disciplina * dis){
    int i;

    fflush(stdin);
    printf("Entre com o codigo da disciplina: "); 
    scanf("%d", &dis->codigo);
    fflush(stdin);
    printf("Entre com o nome da disciplina: "); 
    gets(dis->nomedis);

    for(i = 0; i < 40; i++){   
        dis->turma[i].nomedi.matricula = 0;
    }

}

void incluiraluno(disciplina *dis){    
    int i;
    int contador; 

    for(i = 0; i < 40; i++){
        if(dis->turma[i].nomedi.matricula == 0){     
            fflush(stdin);      
            printf("\nEntre com o nome do aluno: ");
            gets(dis->turma[i].nomedi.nome);
            fflush(stdin);
            printf("\nEntre com a idade do aluno: "); 
            scanf("%d", &dis->turma[i].nomedi.idade);
            fflush(stdin);
            printf("\nEntre com o curso do aluno: "); 
            gets(dis->turma[i].nomedi.curso);
            fflush(stdin);
            printf("\nEntre com o numero da matricula: "); 
            scanf("%d", &dis->turma[i].nomedi.matricula);
            fflush(stdin);
            printf("\nEntre com o cr do aluno (valor deve conter virgula)!: "); 
            scanf("%f", &dis->turma[i].nomedi.CR);
            fflush(stdin);
            printf("\nEntre com a nota do aluno (valor deve conter virgula)!: "); 
            scanf("%f", &dis->turma[i].notas);
            fflush(stdin);
            printf("\nEntre com o numero de faltas do aluno: "); 
            scanf("%d", &dis->turma[i].faltas);
            break;
        }
        else{
            contador++;
        }
    
        if(contador == 40){     //matricula cheia = não há vagas na disciplina
            puts("Sem vagas para essa disiplina!");
        }
    }
}


void excluiraluno(disciplina *dis){   
    int i;
    int matricul;
    int confirmar;

    fflush(stdin);
    printf("Entre com a matrícula: ");
    scanf("%d", &matricul);
    fflush(stdin);
    puts("Entre com \"1\" para excluir a matrícula");
    scanf("%d", &confirmar);

    if(confirmar == 1){
        for(i = 0; i < 40; i++){      
            if(dis->turma[i].nomedi.matricula == matricul){
                dis->turma[i].nomedi.matricula = 0;
                break;
            }
            if(i == 39){        
                puts("Matricula inexistente!");
            }
        }
        puts("Matricula excluida!");
    }

    else{
        puts("Matricula não foi excluida!");
    }
}

void listaraluno(disciplina *dis){
    int i;
    int posicao = 0;  
    for(i = 0; i < 40; i++){
        if(dis->turma[i].nomedi.matricula != 0){ 
            posicao++;
            printf("%d - Nome do Aluno: %s | Idade: %d | Curso: %s | Cr: %.2f | Matricula: %d | nota: %.2f | faltas : %d\n",posicao, dis->turma[i].nomedi.nome, dis->turma[i].nomedi.idade,
            dis->turma[i].nomedi.curso, dis->turma[i].nomedi.CR, dis->turma[i].nomedi.matricula, dis->turma[i].notas, dis->turma[i].faltas);
        }
    }
}

void calcularcrmedio(disciplina *dis){
    int i;
    float crm;
    int contador = 0;

    for(i = 0; i < 40; i++){
        if(dis->turma[i].nomedi.matricula != 0){     
            contador++;

            crm = crm + dis->turma[i].nomedi.CR; 
        }
    }
    printf("\nO resultado do CR medio dos alunos eh: %.2f\n", crm/contador);
} 


void imprimirboletim(disciplina *dis){
    int i;
    int posicao = 0;  
    for(i = 0; i < 40; i++){
        if(dis->turma[i].nomedi.matricula != 0){ 
            posicao++;
            printf("%d - Nome do Aluno: %s | Idade: %d | Curso: %s | Cr: %.2f | Matricula: %d | nota: %.2f | faltas : %d\n",posicao, dis->turma[i].nomedi.nome, dis->turma[i].nomedi.idade,
            dis->turma[i].nomedi.curso, dis->turma[i].nomedi.CR, dis->turma[i].nomedi.matricula, dis->turma[i].notas, dis->turma[i].faltas);
        }
    }
}

void fechardisciplina(disciplina *dis){
    int i;
    int confirma;

    fflush(stdin);
    puts("Confirme com \"1\" para fechar a disciplina");
    scanf("%d", &confirma);

    if(confirma == 1){
        dis->codigo = ' ';    
        strcpy(dis->nomedis," "); 

        for(i = 0; i < 40; i++){
            dis->turma[i].nomedi.matricula = 0; 
        }
        puts("Voce fechou essa disciplina!");
    }
    else{
        puts("Erro para fechar disciplina!");
    }
}


int main(){
    
    disciplina dis;
    int op;

    puts("\tMenu de opcoes:\n");
    puts("1 - Criar disciplina");
    puts("2 - Incluir aluno");
    puts("3 - Excluir Aluno");
    puts("4 - Listar alunos");
    puts("5 - Calcular CR medio dos alunos");
    puts("6 - Imprimir boletim");
    puts("7 - Fechar disciplina");
    puts("8 - Sair\n");
    scanf("%d", &op);


    while(op != 8){
        fflush(stdin); 
        system("cls || clear"); //Limpa o prompt

        switch(op){
        case 1:
            puts("Criando Disciplina!\n");
            criardisciplina(&dis);
            break;
        
        case 2:
            puts("Incluindo Aluno!\n");
            incluiraluno(&dis);
            break;
        
        case 3:
            puts("Excluindo Aluno!\n");
            excluiraluno(&dis);
            break;
        
        case 4:
            puts("Listar Alunos!");
            listaraluno(&dis);
            break;
        
        case 5:
            puts("Calculando cr medio!\n");
            calcularcrmedio(&dis);           
            break;
        
        case 6:
            puts("Imprimir boletim dos Alunos!");
            imprimirboletim(&dis);
            break;
        
        case 7:
            puts("Fechando disciplina!");
            fechardisciplina(&dis);
            break;

        default:
            puts("Opção Inválida");
            break;   
        }

        system("pause"); //
        system("clas || clear"); //Limpa o prompt, para executar outra opcção do menu de opções 
        fflush(stdin);

        puts("\tMenu de opcoes:\n");
        puts("1 - Criar disciplina");
        puts("2 - Incluir aluno");
        puts("3 - Excluir Aluno");
        puts("4 - Listar alunos");
        puts("5 - Calcular CR medio dos alunos");
        puts("6 - Imprimir boletim");
        puts("7 - Fechar disciplina");
        puts("8 - Sair\n");
        scanf("%d", &op);

        system("clas || clear");
    }
    return 0;
}

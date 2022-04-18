// Reescreva o segundo exercício da Lista 6, usando arquivos do tipo binário e alterando
// algumas das funções pedidas anteriormente, conforme descrito a seguir:
// • CRIAR DISCIPLINA – adicionar a disciplina criada no arquivo disciplinas.txt
// • INCLUIR ALUNO – adicionar os dados do aluno criado no arquivo alunos.txt
// • LISTAR ALUNOS – imprimir os dados a partir da leitura do arquivo alunos.txt
// • IMPRIMIR BOLETIM – além de imprimir na tela, a função deverá escrever os
// mesmo dados no arquivo boletins.txt

//   Modos de abertura de arquivos:
//         wb -> Escrita
//         rb -> leitura
//         ab -> anexar
//         r+b -> leitura e escrita
//         w+b -> leitura e escrita (apaga o conteúdo caso o arquivo exista)
//         a+b -> leitura e escrita (adiciona ao final do arquivo)


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    FILE * f;

    f = fopen("disciplina_bi.txt", "wb");

    if (f == NULL){
        printf("Erro no arquivo");
    }
    else{
        fflush(stdin);
        printf("Entre com o codigo da disciplina: "); 
        scanf("%d", &dis->codigo);
        fflush(stdin);
        printf("Entre com o nome da disciplina: "); 
        gets(dis->nomedis);
        fwrite(&dis->codigo, sizeof(int), 1, f);
        fwrite(&dis->nomedis, sizeof(char), 1, f);
        fclose(f);
    }
    
    for(i = 0; i < 40; i++){   
        dis->turma[i].nomedi.matricula = 0;
    }
}

void incluiraluno(disciplina *dis){    
    int i;
    int contador; 
    FILE *g;

    g = fopen("alunos_bi.txt","ab");

    if(g == NULL){
        printf("Erro no arquivo!");
    }
    else{ 
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
                fwrite(&dis->turma[i].nomedi, sizeof(aluno), 1, g);
                fclose(g);
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
    
    FILE *g;
    aluno imprime;
    int j = 0;

    g = fopen("alunos_bi.txt", "rb");

    if(g == NULL){
        printf("Erro no arquivo");
    }
    else{
        while(!feof(g)){
            j = fread(&imprime, sizeof(aluno),1,g);
            if(j){
                printf("Aluno: %s | ", imprime.nome);
                printf("Idade: %d anos | ", imprime.idade);
                printf("Curso: %s | ", imprime.curso);
                printf("Matricula: %d | ", imprime.matricula);
                printf("CR: %.2f ", imprime.CR);
                printf("\n");
            }
        }   
    }
    fclose(g);
}

void calcularcrmedio(disciplina *dis){
    int i;
    float crm = 0.0;
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
    FILE *j;

    j = fopen("Boletim_bi.txt","wb");

    if(j == NULL){
        printf("Erro no arquivo!");
    } 
    else{
        for(i = 0; i < 40; i++){
            if(dis->turma[i].nomedi.matricula != 0){ 
                posicao++;
                printf("%d - Nome do Aluno: %s | Idade: %d | Curso: %s | Cr: %.2f | Matricula: %d | nota: %.2f | faltas : %d\n",posicao, dis->turma[i].nomedi.nome, dis->turma[i].nomedi.idade,
                dis->turma[i].nomedi.curso, dis->turma[i].nomedi.CR, dis->turma[i].nomedi.matricula, dis->turma[i].notas, dis->turma[i].faltas);
                fwrite(&dis->turma[i],sizeof(alunomat),1, j);
            }
        }
    }
    fclose(j);
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
        system("cls || clear"); 

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
            puts("Opcao Invalida");
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
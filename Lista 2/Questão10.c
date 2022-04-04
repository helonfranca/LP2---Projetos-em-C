// Os bancos atualizam diariamente as contas de seus clientes. 
// Essa atualiza��o envolve a an�lise dos dep�sitos e retiradas de cada conta. 
// Numa conta de balan�o m�nimo, uma taxa de servi�o � deduzida se a conta cai abaixo de uma certa quantia especificada. 
// Suponha que uma conta particular comece o dia com um balan�o de R$ 60,00.  
// O balan�o m�nimo exigido � R$ 30,00 e se o balan�o de fim de dia for menor do que isso, uma taxa � reduzida da conta. 
// A fim de que essa atualiza��o fosse feita utilizando computador, � fornecido o seguinte conjunto de dados:
// a)	a primeira linha cont�m o valor do balan�o m�nimo di�rio, quantidade de transa��es e taxa de servi�o;
// b)	as linhas seguintes cont�m n�mero da conta, valor da transa��o e c�digo da transa��o (dep�sito ou retirada);

// Escrever um programa que:
// a)	calcule o balan�o (saldo/d�bito) da conta ao fim do dia (se o resultado for negativo, isto significa insufici�ncia de fundos na conta);
// b)	escreva, para cada conta, o seu n�mero e o balan�o calculado. Se n�o houver fundos, imprima o n�mero da conta e a mensagem "N�O H� FUNDOS".


#include<stdio.h> 

void main () {
	int conta, op;
	float saldo, valor;
	float minimo = 100 , taxa = 3;
	
	printf("\n\tBEM VINDO AO SISTEMA DE BALANCOS DO BANCO CONTAMAIS");	
	printf("\n\nVamos iniciar as operacoes do dia, informando os dados abaixo:");	
	printf("\nEntre com os dados pedidos, para cada conta corrente cadastrada.\nEncerre o programa com o numero ZERO para a conta.");

	printf("\n\nNumero da conta corrente: ");
	scanf("%d",&conta);

	while (conta > 0){
		printf("Saldo inicial:");
		scanf("%f",&saldo);	

		printf("\nEscolha a operacao:");
		printf("\n1 - Debito");
		printf("\n2 - Credito");
		printf("\n3 - Encerrar");
		printf("\n\nOpcao: ");
		scanf("%d",&op);	
			
		while (op != 3) {
			printf("Valor da operacao:");
			scanf("%f",&valor);				
		
			switch(op) {
				case 1: saldo -= valor;
					break;
				case 2: saldo += valor;
					break;
			}

			if (saldo < minimo) {
				saldo -= taxa;
				printf("O saldo caiu abaixo do minimo e sera descontada a taxa de R$%.2f!\n", taxa);
			}
			
			printf("\nEscolha a operacao:");
			printf("\n1 - Debito");
			printf("\n2 - Credito");
			printf("\n3 - Encerrar");
			printf("\n\nOpcao: ");
			scanf("%d",&op);				
		}
		
		printf("\n\nA conta %d encerra o dia com o saldo de R$%.2f", conta, saldo);
		if (saldo < 0)
			printf(" => NAO HA FUNDOS!");	
			
		printf("\n\nNumero da conta corrente (ou 0 para encerrar): ");
		scanf("%d",&conta);			
	}	
}
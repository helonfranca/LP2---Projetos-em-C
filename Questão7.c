#include <stdio.h>

int main(){
    int resultado = 1, op = 1, totalcalo = 0, totalCalo = 0, totalcalO = 0, codigo, resu;
  
    printf("\n\tBem vindo ao cardapio!\n");
    while(resultado > 0){
        printf("\nSELECIONAR REFEICAO:\n");
        printf("\n\t1 - Prato principal:\n\t2 - Bebida\n\t3 - Sobremesa\n");
        scanf("%i", &op);

        switch(op){
            case 1:
                printf("\nPRATO PRINCIPAL:\n\t1 - Vegetariano: 180 cals\n\t2 - Peixe: 230 cals\n\t3 - Frango: 250 cals\n\t4 - Carne: 350 cals\n\t");
                printf("\n\tselecione: ");
                scanf("%i", &codigo);
                if (codigo == 1)
                    totalcalo = 180;
                if (codigo == 2)
                    totalcalo = 230;
                if (codigo == 3)
                    totalcalo = 250;
                if (codigo == 4)
                    totalcalo = 350;
                break;
            case 2:
                printf("\nBEBIDA:\n\t1 - Cha (lata): 80 cals\n\t2 - Suco de laranja: 150 cals\n\t3 - Suco de melao: 70 cals\n\t4 - Refrigentante diet: 2 cals\n\t");
                printf("\n\tselecione: ");
                scanf("%i", &codigo);
                if (codigo == 1)
                    totalCalo += 80;
                if (codigo == 2)
                    totalCalo += 150;
                if (codigo == 3)
                    totalCalo += 70;
                if (codigo == 4)
                    totalCalo += 2;
                break;
            case 3:
                printf("\nSOBREMESA:\n\t1 - Abacaxi: 75 cals \n\t2 - Sorvete diet: 110 cals\n\t3 - Mousse diet: 60 cals\n\t4 - Mousse chocolate: 250 cals\n\t");
                printf("\n\tselecione: ");
                scanf("%i", &codigo);
                if (codigo == 1)
                    totalcalO += 75;
                if (codigo == 2)
                    totalcalO += 110;
                if (codigo == 3)
                    totalcalO += 60;
                if (codigo == 4)
                    totalcalO += 250;
                break;
            default:
              printf("\n Digite uma opcao valida!!\n");   
                break;
            }
        resu = totalcalo + totalcalO + totalCalo;
        printf("\nDigite 0 para mostrar total de calorias: ");
        scanf("%d",&resultado);

        }
    printf("\n\ttotal de calorias %d ", resu);
    return(0);
    }
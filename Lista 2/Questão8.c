//Escreva um programa que leia um número e imprima a tabuada desse
//número, exatamente no formato abaixo quando, por exemplo, num = 4:
//4 x 1 = 4
//4 x 2 = 8
//...
//4 x 10 = 40

#include <stdio.h>

int main (){
    int i = 0 , n = 0, t = 0;
    
    printf("\n\tTabuada de multiplicacao: ");
    printf("\nEntre com um valor de 1 a 10: ");
    scanf("%d",&n);
    
    
    for(int i=0; i<10; i++){
        t = n * i;
        printf("%d x %d = %d\n", n, i, t);
    }
    

   
    return 0;
}
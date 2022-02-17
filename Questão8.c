#include <stdio.h>

int main (){
    int i = 0 , n = 0, t = 0, h = 0;

    printf("\n\tTabuada de multiplicacao: ");
    printf("\nEntre com um valor de 1 a 10: ");
    scanf("%d",&n);
    
    while(i <= 10){
        t = n * i;
        printf("%d x %d = %d\n", n, i, t);
        i += 1;
     }
    return 0;
}
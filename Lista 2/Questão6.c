#include <stdio.h>
#include <stdlib.h>

int main(){
    int populacaoA = 5000000, populacaoB = 7000000, contador = 0;

    while(populacaoA < populacaoB){
        populacaoA = (populacaoA *0.03 ) + populacaoA;
        populacaoB = (populacaoB *0.02 ) + populacaoB;
        contador = contador + 1;
    }

    printf("\n O tempo necessario para que a populacao do pais A ultrapasse a populacao do pais B e de %d anos.\n ", contador);

    return(0);
}
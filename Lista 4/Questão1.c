#include <stdio.h>

main (){

    int num[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int i, aux;

    for( i = 0; i < 10; i++){ //Trocando os elementos 
        aux = num[i];
        num[i]= num[19-i];
        num[19-i] = aux;
    }
    
    for(i = 0; i < 20; i++) //Mostrando o vetor invertido
    printf("%d  ", num[i]);

    return(0);
}
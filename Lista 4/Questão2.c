#include <stdio.h>

int main (){
    
    int vet1[10] = {0,2,4,6,8,10,12,14,16,18};
    int vet2[10] = {1,3,5,7,9,11,13,15,17,19};
    int vet3[20];
    int i , j = 0, aux;

    for(i = 0; i < 10; i++){ //intercalando num terceiro vetor
        vet3[j] = vet1[i];
        j = j + 1;
        vet3[j] = vet2[i];
        j = j + 1;
    }

    for( j = 0; j < 10; j++){ //inversão do vet3
        aux = vet3[j];
        vet3[j]= vet3[19-j];
        vet3[19-j] = aux;
    }

    for(j = 0; j < 20; j++){ //Imprimindo seus valores no vet3 de forma inversa
        printf("%d ",vet3[j]);
    }

    return(0);
}
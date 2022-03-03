#include <stdio.h>

int main(){

	int n;

	printf("coloque o tamanho que deseja para a piramide: ");
	scanf("%i",&n);

	printf("\n");
	
	int j=1, k=n-1;

	  	for(int con = 1; con <= n ; con++) 
		{
		  for(int i = 1; i <= k ; i++) 
			printf(" ");

		  for(int i=1; i<=j ; i++)
        	printf("*");
			printf("\n");
			j = j+2; 
			k = k-1;
		}

	return 0;
}


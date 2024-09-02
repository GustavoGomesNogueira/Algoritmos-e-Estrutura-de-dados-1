#include<stdio.h>
int main(){
	
	int soma;
	int i;
	
		for(i=2;i<=100;i+=2){
			soma += i;
		}
		
		printf("A soma dos numero pares de 1 a 100 e %d",soma);
		
	return 0;
	
}

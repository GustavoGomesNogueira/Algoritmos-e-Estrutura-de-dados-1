#include<stdio.h>
int main(){
	
	int n1;
	int n2;
	
		printf("Digite um numero: \n");
		scanf("%d",&n1);
		
		printf("Digite um numero: \n");
		scanf("%d",&n2);
		
		if(n1>n2){
			printf("O numero %d e maior que o %d",n1,n2);
		}else if(n2>n1){
			printf("O numero %d e maior que o %d",n2,n1);
		}else{
			printf("Os numeros sao iguais");
		}
		
	return 0;
	
}

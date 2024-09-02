#include<stdio.h>
int main(){
	
	int salarioBase;
	int salarioTotal;
	
		printf("Digite seu salario Base: \n");
		scanf("%d",&salarioBase);
		
		salarioTotal = ((salarioBase * 0.05)+ salarioBase);
		
		printf("O total a receber com a gratificacao e %d",salarioTotal);
		
	return 0;

}

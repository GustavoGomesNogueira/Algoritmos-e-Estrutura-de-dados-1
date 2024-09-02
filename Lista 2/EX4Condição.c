#include<stdio.h>
int main(){
	
	float nota;
	
		printf("Digite sua nota: \n");
		scanf("%f",&nota);
		
		if(nota>=6){
			printf("Sua nota foi %.2f voce foi aprovado!",nota);
		}else{
			printf("Sua nota foi %.2f voce foi reprovado!",nota);
		}
		
	return 0;
}

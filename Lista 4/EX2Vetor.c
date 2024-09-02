#include<stdio.h>
int main(){
	
	int vet[5];
	int i;
	
		for(i=0;i<5;i++){
			printf("Digite o %d para o vetor: \n",i);
			scanf("%d",&vet[i]);
		}
		
		for(i=0;i<5;i++){
			printf("%d\n",vet[i]);
		}
		
	return 0;
}

#include<stdio.h>
int main(){
	
	int i = 10;
	int n;
	
		printf("Tente acertar o numero: \n");
		scanf("%d",&n);
		
		while(n!=i){
			printf("Tente novamente: \n");
			scanf("%d",&n);
		}
		
		if(n=i){
			printf("Parabens voce acertou o numero que era %d",i);
		}
		
	return 0;
}

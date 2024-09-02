#include<stdio.h>
#include<math.h>
int main(){
	
	int n;
	float raiz;
	
		printf("Digite um numero: \n");
		scanf("%d",&n);
		
		raiz = sqrt(n);
		
		if(n>=0){
			printf("A raiz quadrada do numero e %.2f",raiz);
		}else{
			printf("O numero é invalido");
		}
		
	return 0;
}

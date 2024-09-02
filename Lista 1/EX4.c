#include<stdio.h>
#include<math.h>
int main(){
	
	float n;
	float raiz;
	float quadrado;
	
		printf("Digite um numero: \n");
		scanf("%f",&n);
		
		raiz = sqrt(n);
		quadrado = (n*n);
		
		if(n>=0){
			printf("A raiz quadrada e %.2f",raiz);
		}else{
			printf("O numero ao quadrado e %.2f",quadrado);
		}
		
	return 0;
}

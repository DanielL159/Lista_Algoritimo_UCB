#include <stdio.h>

int main (){
	//char a[50]//[quantidade de letras]
	
	char nome[2][50];//[linha=i][coluna=j][Limite de caracteres ]
	float salario[2][2];//[linha=i][coluna=j][Limite de caracteres ]
	int i ,j;
	
	for (i=0;i<2;i++){
			printf("Qual o nome do funcionario  [%d]:",i);
			scanf("%s",&nome[i]);
	}
	
	for (i=0;i<2;i++){
		for(j =0;j<2;j++){
			printf("Qual o Salario desejado do funcionario %s:",nome[i]);
			scanf("%f",&salario[i][j]);
		}
	}
	
	for (i=0;i<2;i++){
			printf("%s\t",nome[i]);
	}
		printf("\n");
		
	for (j=0;j<2;j++){
		for(i =0;i<2;i++){
		printf("%.2f\t",salario[i][j]);
	
	}
		printf("\n");
}

	
}








//Exercico 5

#include<stdio.h>
#include<string.h>


/*************************************************************************************************************/
//Exercicio 1
/* Elabore um algoritmo que receba o nome completo de um cliente e imprima a quantidade de
caracteres digitados.*/
/*
int main (){
     int quantidade;
     char nome[1000];

    printf("Qual o nome:");
    fgets(nome,1000,stdin);

    quantidade = strlen(nome);

    printf("Total:%d",strlen(nome));
    printf("Apenas Letras %d",quantidade-1);
}*/

//Exercicio 2
/*
int main (){
    char cor[8];

    printf("Me fale o nome de uma cor (branco, verde e amarelo.):");
    scanf("%s",cor);

    if (strcmp(cor,"branco")==0 ||strcmp(cor,"verde")==0 || strcmp(cor,"amarelo")==0 )
    {
        printf ("Cor %s validada",cor);
    }else{
        printf("Cor invalida");
    }
    

}*/

//Exercicio 3
/*

int main (){
    char nome[100] , email[100] , endereco[100];
    char nomeB[100] , emailB[100] , enderecoB[100];
    
    printf("Nome: ");
    fflush(stdin);
    fgets(nome,100,stdin);
    
    printf("email: ");
    fflush(stdin);
    fgets(email,100,stdin);
    
    printf("endereco: ");
    fflush(stdin);
    fgets(endereco,100,stdin);
    
    strcpy(nomeB,nome);
	strcpy(emailB,email);
	strcpy(enderecoB,endereco);

    printf("Backup feito com sucesso\n");
        
}
*/

//Exercicio 4 
/*4. Elabore um algoritmo que receba o primeiro nome, o(s) nome(s) do meio, e o ultimo nome do
usuário. Concatene os dados e imprima o valor final.*/
/*
int main (){
    char nomeIncio[100],nomeMeio[50],nomeFim[50];

    printf("Me forneça o primeiro nome");
    fflush(stdin);
    gets(nomeIncio);

    printf("Me forneça o primeiro nome");
    fflush(stdin);
    fgets(nomeMeio,50,stdin);

    printf("Me forneça o primeiro nome");
    fflush(stdin);
    scanf("%s",&nomeFim);

    strcat(nomeIncio,strcat(nomeMeio,nomeFim));
    printf("%s",nomeIncio);

}*/

//Exercico 5{tentar na aula}
/*O usuario informa seu nome, sobrenome e numero do cpf. A partir destes dados é composta sua
senha de acesso, formada pelo nome, primeira letra do sobrenome e os 3 primeiros números do
cpf. Elabore um algoritmo que gere e imprima a senha.*/

int main (){
    int i;
    char nome[1000],sobrenome[50],cpf[11],cpff[3];

    printf("Nome: ");
    scanf("%s",&nome);

    printf("Sobrenome: ");
    scanf("%s",&sobrenome);

    printf("Cpf: ");
    scanf("%s",&cpf);
    
    
   strcat(nome,sobrenome);
   strcat(sobrenome,cpf);
     
    printf("%s", nome);
   
}
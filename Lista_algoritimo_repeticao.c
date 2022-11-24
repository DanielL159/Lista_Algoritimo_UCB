/*
EXERCICIO 19 
EXERCICIO 21
*/
#include <stdio.h>


/************************************************************/
//EXERCICIO 1 
/*Faca um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem crescente.*/
/*
int main (){

    int numero;
    int i;

    printf("Qual o numero natural :");
    scanf("%d",&numero);

    for ( i = 0; i <= numero; i++)
    { 
        printf("  %d  ",i);
    }
   
}*/

//EXERCICIO 2
/*
int main (){

    int numero;
    int i;

    printf("Qual o numero natural :");
    scanf("%d",&numero);

    for ( i = numero; i >= 0; i--)
    { 
        printf("  %d  ",i);
    }
   
}*/



/*EXERCICIO 3
int main (){

    int numero,impar=1;
    int i;

    printf("Qual o numero natural :");
    scanf("%d",&numero);

    for ( i = 1; i <= numero && i >0; i++)
    { 
        printf("  %d  ",impar);
        impar = impar +2;
    }
   
}*/

/*Faca um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando
números maiores que 0*/
//EXERCICIO 4
/*
int main (){

    int tres=0;
    int i;

    

    for ( i = 1; i <= 5 && i >0; i++)
    { 
        tres= 3 * i;
        printf("  %d  ",tres);
      
    }
   
}*/

//EXERCICIO 5
/*
int main (){

    int impar=1,impares=1;
    int i;

    for ( i = 1; i <= 49; i++)
    { 
        impar = impar +2;
        impares = impar +impares;
        
    }
    printf("  %d  ",impares);
} */

/*
EXERCICIO 6
int main (){
    int i;

    for ( i = 10; i >= 0; i--)
    {
        printf("%d\t",i);
    }
    
}*/

/*EXERCICIO 7
int main (){
    int i ,numero[10],calculo=0;

    for ( i = 0; i < 10; i++)
    {
        printf("Numero %d: ",i);
        scanf("%d",&numero[i]);
    }
   

    for ( i = 0; i < 10; i++)
    {
        calculo+=numero[i];
    }
    printf("%d",calculo);
    
}*/

//EXERCICIO 8
/*
int main (){
    int i ,num[10];
    float calculo=0;

    for ( i = 0; i < 10; i++)
    {
        printf("Numero %d: ",i);
        scanf("%d",&num[i]);
    }

    for ( i = 0; i < 10; i++)
    {
       calculo +=num[i];
       
    }
    printf("%.2f",calculo/2);

}
*/

//EXERCICIO 9
/*
int main (){
    int menor=1000;
    int maior=0;
    int num[10] ,i;

    for ( i = 0; i < 10; i++)
    {
        printf("Numero %d: ",i);
        scanf("%d",&num[i]);
    }
    for ( i = 0; i < 10; i++)
    {
       if (num[i]< menor)
       {
            menor=num[i];
       }

       if (num[i]>maior)
       {
            maior = num[i];
       } 
    }
    printf("Menor:%d\nMaior:%d",menor ,maior);
    
}*/

//exercicio 10
/*
int main (){
    int media=0;
    int num[10] ,i;

    for ( i = 0; i < 10; i++)
    {
        printf("Numero %d: ",i);
        scanf("%d",&num[i]);
        while (num[i]<=0)
        {
           printf("Numero nao positivo :");
            scanf("%d",&num[i]);
        }
        
    }
    for ( i = 0; i < 10; i++)
    {
       media+=num[i];
    }
    printf("Media:%d",media/2);

}*/

/*Faca um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os
divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/
/*

int main (){

    int numero ,divisivel=0;
    int i;
    printf("Numero: ");
    scanf("%d",&numero);
    printf("\nNumero %d divisivel por :\n",numero);

    for ( i = 0; i <= numero; i++){

        divisivel = i % numero;

        if ( divisivel == 0)
        {
            printf("%i\n",i);
        }
        
    }
    

}*/

//EXERCICIO 12
/*
int main (){
    int soma=0;
    int i ;

    for ( i = 0; i < 10; i++)
    {
        if (i%3== 0|| i%5==0)
        {
            soma += i;
        }
        
    }
    printf("soma igual:%d",soma);

}*/


/*EXERCICIO 13
int main (){

    int i ,numero,fibonacci[100];
    int a=1;

    printf("Me forneca o numero:");
    scanf("%d",&numero);
    fibonacci[0]=0;
    fibonacci[1]=1;

    for ( i = 2;  i <numero; i++)
    {
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
    }

    i=0;
    while (i<numero)
    {
        printf("%d\n",fibonacci[i]);
        i++;
    }
    

}*/

/*Elabore um programa que faca a leitura de vários números inteiros até que se digite um
número negativo. O programa tem de retornar o maior e o menor número lido.*/
/*EXERCICIO 14
int main (){
    
    int i,maior=0,menor=10000,num[10000];

    for ( i = 0; i < 1000 ; i++)
    {
        printf("Me forneca o numero da posicao %d:",i);
        scanf("%d",&num[i]);
        if (num[i]<0)
         {
            break;
         }

        if (num[i]>maior)
        {
            maior=num[i];
        } 

        if (num[i]<menor)
        {
            menor = num[i];
        }

   }
   printf("Maior:%d\nMenor:%d\n",maior,menor);

}*/


//EXERCICIO 15
/*
int main(){
    float numero,hn=0.0;
    int i=0;


    printf("Me forneca o numero: ");
    scanf("%f",&numero);

    for ( i = 1; i <= numero; i++){
        hn += 1.0/i;
    }
    printf("Resultado:%f",hn);

}*/

//EXERCICIO 17
/*
int main (){
    int numeros,i;
    int linha=0,contador=1,numeroStart=0;

    printf("Numeoro: ");
    scanf("%d",&numeros);

    while (linha < numeros)
    {
        
        for ( i = 1; i <= contador; i++)
        {
            numeroStart++;
            printf("%d\t",numeroStart);
        }

        printf("\n");
        contador++;
        linha++;
    }
    

}*/

/*Faca um programa que receba um número inteiro maior do que 1 e verifique se o número
fornecido é primo ou não.*/
//EXERCICIO 18
/*
int main (){
    int numero,i;

    printf("Numero maior que 1: ");
    scanf("%d",&numero);
    
    if (numero == 2)
    {
        printf("Primo");
    }

    while (numero < 1)
    {
        printf("Numer digitado e menor ou igual a 1 por favor digite um numero maior que 1: ");
        scanf("%d",&numero);

    }

    for ( i = 2; i < numero; i++)
    {
        if (numero%i==0)
        {

         printf("Nao primo");

        }else{

            printf("Primo");
            break;
        }
        
    }
  
}*/

//Exercicio 19(Melhorar)****************************************
/*
int main(){
    float up=1.0,dow=1.0;
    float s;
    int i=0;


    for ( i = 1; i <=50; i++){
       up +=2;
       dow++;
        s= s+(up/dow);
      
    }
    printf("Resultado:%f\t%f\t%f",up,dow,s);

}*/


//Exercicio 20.
/*
int main (){
    int opcao,repet=1,quantidade;
    float abacaxi,maca,pera,total;
    int abacax,mac,per;

    while (repet ==1)
    {
        printf("Qual fruta deseja compra?\n(1)ABACAXI - 5,00 a unidade\n(2)MACA - 1,00 a unidade\n(3)PERA - 4,00 a unidade\n");
            scanf("%d",&opcao);

                switch (opcao)
                {
                    case 1:
                        printf("Quantos abacaxis deseja: ");
                        scanf("%d",&quantidade);
                        abacaxi= quantidade *5.00;
                        abacax=quantidade;
                        break;

                        case 2:
                        printf("Quantos maca deseja: ");
                        scanf("%d",&quantidade);
                        maca= quantidade *1.00;
                        mac=quantidade;
                        break;

                        case 3:
                        printf("Quantos pera deseja: ");
                        scanf("%d",&quantidade);
                        pera= quantidade *4.00;
                        per=quantidade;
                        break;


                    
                    default:
                    printf("Opcao nao selecionada por gentileza retorne ao menu e escolha uma opcao");
                        break;
                }

            total = pera + maca + abacaxi;

            printf("Deseja compra mais alguam coisa (1)sim (0)nao: ");
            scanf("%d",&repet);
            printf("\n");
        
        }
    printf("O valor total da compra e %.2f",total);

}*/

// Exercicio 21 (PROBLEMA DE STRING)


#include <string.h>
int main (){
    int idade;
    float total=0.0, a=0;
    float media;
    float salario;
    char sexo,olhos,cabelo;


    printf("********Bem vindo a pesquisa populacional********\n\n");

    do 
    {
        
      
        printf("Quantos anos tem a pessoa: ");
        scanf("%d",&idade);
        if (idade <0 )
        {
           break;
        }

        while (idade <10 || idade >100)
        {
            printf("idade errada me forneca uma idade valida (entre 10 e 100 anos): ");
            scanf("%d",&idade);
        }

      
        
         printf("Me forneca o sexo (M)asculino ou (F)eminino: ");
        fflush(stdin);
        scanf("%c",&sexo);
        printf("\n");
        
         while ( sexo != 'M' && sexo != 'F' )
        {
              printf("Me forneca o sexo (M)asculino ou (F)eminino: ");
            fflush(stdin);
            scanf("%c",&sexo);
            printf("\n");
        }
        
        
        
        

        printf("Qual a cor dos olhos\n(A)zul,\n(V)erdes,\n(C)astanhos,\n(P)retos:");
        fflush(stdin);
        scanf("%c",&olhos);
         printf("\n");
        

        while ( olhos != 'A' && olhos != 'V' && olhos != 'C' && olhos != 'P')
        {
            printf("Qual a cor dos olhos\n(A)zul,\n(V)erdes,\n(C)astanhos,\n(P)retos: ");
            fflush(stdin);
            scanf("%c",&olhos);
             printf("\n");
        }
         
        
 

        printf("Qual a cor dos cabelo\n(L)oiros,\n(C)astanhos,\n(P)retos,\n(R)uivos: ");
        fflush(stdin);
        scanf("%c",&cabelo);
        printf("\n");

        while ( cabelo != 'L' && cabelo != 'C'&& cabelo != 'P' && cabelo != 'R')
        {
            printf("Qual a cor dos cabelo\n(L)oiros,\n(C)astanhos,\n(P)retos,\n(R)uivos: ");
            fflush(stdin);
            scanf("%c",&cabelo);
            printf("\n");
        }
        
     

        printf("Quantos recebe a pessoa: ");
        scanf("%f",&salario);
    printf("\n");
       
        while (salario <10 || salario >100)
        {
            printf("salario errada me forneca uma salario valida (entre 10 e 100 anos): ");
            scanf("%f",&salario);
            printf("\n");
        }
        if (sexo == 'F' && olhos == 'C' && cabelo== 'C'  && idade >= 18 && idade <= 35)
        {
           a++;
        }
        total ++;
    }while (idade>0);

        media = (a/total)*100.00;
  printf(" \nporcentagem de indivíduos do sexo feminino, com \nidade entre 18 e 35 anos e que tenham olhos castanhos e cabelos castanhos = %.2f%%",media);
}
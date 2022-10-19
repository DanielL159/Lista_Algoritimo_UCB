// Resumo pra prova em codigo 
//primeira coisa a se lembra e que a linguagem C e case sensitive
//ou seja pra ela maiusculo e minusco sao diferentes

#include <stdio.h>//aqui incluimos uma biblioteca , que e nada mais um local onde ja possui funcoes prontas como printf() e scanf()

//todo codigo C necessita de uma funcao main (){} 
int main (){
    //nome de variavel sempre inicia minusculo e nunca com numero
    int a ;//int e para numeros inteiros , a letra a apos o int e o nome da variavel 
    float b,c,f;//float sao pra numeros reais , ou seja numero com virgula . A virgula entre as letras"b" e "c", faz com que se crie duas variaves com nomes diferente, porem mesmo tipo 
    double d;//double e uma versao do float mais estendida , ocupando mais espaco na memoria e e mais precisa
    char e ;//char e do tipo caracter , e o ";"encerra a linha de codigo

    printf("Uma otima prova a todos :");//funcao apresenta na tela o texto ou caraceter que for colocado dentro das aspas duplas
    scanf("%d",&a);//funcap que armazena o valor digitado na variavel indicada 
    //Obs : e preciso colocar no scanf p & pois ele indica o endereco de memoria que o valor digitado sera armazenado
    printf("Me forneça o double :");
    scanf("%f",&b);

    printf("Me forneça outros floars :");
    scanf("%f%f",&c,&f);//aqui o scanf() pega duas informaçoes diferentes e aloca ela em spaços de memoria diferente e determinados
    //%d e uma mascara para numeros inteiros 
    //%s para strings ou char
    //%c para chat 
    //%f para float 
    //%lf para double 

    if ( a == 1)//area destina a condicao
    {
        //area para o codigo caso a condicao de verdadeiro
       printf ("Vc digitou %d",a);//aqui nao colocamos o & pq nao estamos inserindo valor apenas pegando
    }  else/*faz com que caso a condiçao de Cima nao de verdadeiro ele rode esse outro codigo*/{printf("E ne ");}   


    if (a == 2){
        if ( a < b )//caso o if externo de positivo ele ira fazer a verificaçao desse outro if e caso ambos estejam verdadeiro entao o codigo ira rodar
        {
            printf("%d",a+b);///o printf pode tambem realizar soma dentrod dele
           printf("O real e maior que o inteiro ");
        }
        
    }

    switch (a)
    {
    case  1/* constant-expression */:
        printf ("Vc digitou %d",a);
        break;//e necessario o break pois se nao ele adicionaria todos abaixo da condiçao que deu verdadeiro, e OU SEJA, ELE FINALIZA O SWITCH QDO O CASO É ACEITO.
    
    default://e semelhante ao else que e usado no if 
        break;
    }



/*% pode ser usado em calculos e o resultado desse calco e o resto de uma divisao
Operadores: 
-Aritmético: 
+ => SOMA 
- => SUBTRAÇAO 
/ => RESULTADO COM NUMEROS REAIS (EX: 11/2 
=5.5) 
\ => RESULTADO COM NUMEROS INTEIROS (11\2 = 5) 
% => MODULO (RESTO DA DIVISAO) 
 
-RELACIONAIS:(todo operador relacional retorna um resultado logico) 
< MENOR  
<= MENOR OU IGUAL 
>  MAIOR 
>= MAIOR OU IGUAL 
!=  DIFERENTE  
==   IGUAL 
 
-Logicos:  
E - Conjunção  
Ou - disjunção 
! Ou NAO – para negação  
 
-Caráter: 
+ concatenação  
 
•Obs: 
-& = e comercial = código de endereçamento (apenas entrada de dados) 


*/
}
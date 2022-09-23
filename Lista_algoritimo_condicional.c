#include <stdio.h>
#include <math.h>
#include <string.h>
//EXERCICIO 3
/*
int main (){
    int numero[2],i;
    for (  i = 0; i < 2; i++)
    {
       printf("Por favor me informe o numero %d :",i+1);
       scanf("%d",&numero[i]); 
    }

    if (numero[0]>numero [1])
    {
        printf("Numero %d e o maior",numero[0]);
    }else{
        printf("Numero %d e o maior",numero[1]);
    }
    
}*/

//EXERCICIO 2
/*
int main (){
    int numero[2],i;
    for (  i = 0; i < 2; i++)
    {
       printf("Por favor me informe o numero %d :",i+1);
       scanf("%d",&numero[i]); 
    }

    if (numero[0]>numero [1])
    {
        printf("Numero %d e o maior",numero[0]);
    }else if (numero[0]== numero[1])
    {
      printf("Numeros iguais"); 
    }else
    {
        printf("Numero %d e o maior",numero[1]);
    }
    
}*/

//EXERCICIO 4
/*
int main (){
    int numero,par;

    printf("Qual o numero ?");
    scanf("%d",&numero);

    par = numero % 2;

    if (par == 0)
    {
        printf("Esse numero e par");
    }else{
        printf("Esse numero e impar");
    }
    
}*/

//EXERCICIO 5
/*
int main(){
    int numero ,quadrado;
    float raiz;

    printf("Por favor me de o numero desejado :");
    scanf("%d",&numero);

    if (numero > 0)
    {
       quadrado = pow(numero,2);
       raiz = sqrt(numero);
       printf("O %d elevado ao quadrado e %d\nja a raiz desse mesmo numero e %.2f",numero,quadrado,raiz);
    }else if(numero == 0)
    {
        printf("Esse numero nao e nem positivo nem negativo");
    }else
    {
        printf("Esse numero e negativo e nao sera calculado");
    }
    

}*/

//EXERCICIO 6 //(ASPAS SIMPLE != ASPAS DUPLAS)
/*
int main (){
    float altura=0.0,homem,mulher; 
    char sexo;

    printf("Qual e seu sexo (M)asculino (F)eminino :");
    scanf("%s",&sexo);

    printf("Qual a sua altura :");
    scanf("%f",&altura);

    if (sexo =='M'||sexo =='m'||sexo =="masculino"||sexo == "Masculino"){
       homem=(72.7*altura) - 58;
       printf("Sua altura ideal e %.2f",homem); 
    }
    else if(sexo == 'f'||sexo =='F'||sexo =="feminino"||sexo == "Feminino"){
        mulher = (62.1 * altura) - 44.7;
        printf("Sua altura ideal e %.2f",mulher);
    }else{
        printf("Voce nao informou seu sexo logo nao foi possivel calcular sua altura ideal");
    }
    
}*/

//EXERCICIO 7
/*
int main(){
    int a[4],i;
    int soma1 ,soma2,par;

    for (i = 0; i < 4; i++)
    {
        printf("Me o valor %d :",i+1);
        scanf("%d",&a[i]);
    }
    

    soma1 = a[2] + a[3];
    soma2 = a[0]+a[1];
    par = a[0] % 2;

    if (a[1]>a[2] && a[3]>a[0] && soma1>soma2 && a[2]>0 && a[3]>0 &&par ==0)
    {
       printf("Valores aceitos");
    }else{
        printf("Valores nao aceitos");
    }
    
}*/

//Exercicio 8  terminar
/*
int main (){
    float mg,sp,rj,ms,venda;
    char estado[2];

    printf("Qual o valor da venda :");
    scanf("%f",&venda);

    printf("Qual o destino da venda :");
    scanf("%s",&estado);

   ;
    
    
    if (estado =="MG"  || estado == "mg")
    {
        mg= venda + (venda * 0.07);
        printf("O valor da venda para Minas Gerais e %.2f",mg);
    }
        else if(estado=="SP"|| estado =="sp")
        {
        sp= venda + (venda * 0.12);
        printf("O valor da venda para Sao Paulo e %.2f",sp);
        }
            else if(estado=="RJ"|| estado =="rj")
            {
                rj= venda + (venda * 0.15);
                printf("O valor da venda para Rio de Janeiro e %.2f",rj);
            }
                else if (estado=="MS"|| estado =="ms")
                {
                    ms= venda + (venda * 0.08);
                    printf("O valor da venda para Mato Grosso do Sul e %.2f",ms);
                    }
                    else
                    {
                        printf("Erro, o estado digitado nao esta no nosso banco de dados");
                    }
            
}
*/

//EXERCICIO 9
/*
int main(){
    int idade;

    printf("Qual sua idade ");
    scanf("%d",&idade);

    if (idade >= 5 && idade <= 7)
    {
        printf("Sua categoria e infantil A");
    }
    else if(idade >= 8 && idade <= 10)
    {
       printf("Sua categoria e infantil B") ;
    } else if(idade >= 11 && idade <= 13)
    {
        printf("Sua categoria e juvenil A");
    } else if(idade >= 14 && idade <= 17)
    {
        printf("Sua categoria e juvenil B");
    }else if (idade >18) {
        printf("Sua categoria e Senior");
    }
    

}*/

//EXERCICIO 10
/*
int main(){
    float altura,peso;

    printf("Qual sua altura ");
    scanf("%f",&altura);

    printf("Qual sua peso ");
    scanf("%f",&peso);

    if(altura <= 1.20 && peso < 60)
    {
        printf("Sua classificaçao e A");
    }
    else if(altura <= 1.20 && peso >60 && peso <90)
    {
        printf("Sua classificaçao e B");
    }
    else if (altura <= 1.20 && peso >90)
    {
     printf("Sua classificaçao e G");  
    }
    else if (altura >= 1.20 && altura <=1.70 && peso < 60)
    {
        printf("Sua classificaçao e B");
    }
    else if(altura >= 1.20&&altura <=1.70 && peso >60 && peso <90)
    {
         printf("Sua classificaçao e E");
    }
    else if(altura >= 1.20 && altura <=1.70 && peso>90)
    {
         printf("Sua classificaçao e H");
    }
    else if (altura >=1.70 && peso <60)
    {
        printf("Sua classificaçao e C");
    }
    else if(altura >=1.70 && peso >60 && peso <90)
    {
        printf("Sua classificaçao e F");
    } else if (altura >= 1.70 && peso >90)
    {
        printf("Sua classificaçao e I");
    }
    
}*/

//  EXERCICO 11
int main (){
    int y,x;

    printf("ME fornaça a posiçao x");
    scanf("%d",&x);
    printf("ME fornaça a posiçao y");
    scanf("%d",&y);
    if (x>0 && y>0)
    {
        
        printf("O");
    }
    

}
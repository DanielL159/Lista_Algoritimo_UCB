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

//EXERCICIO 3
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

//EXERCICIO 4
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

//EXERCICIO 5 //(ASPAS SIMPLE != ASPAS DUPLAS)
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

//EXERCICIO 6
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

//Exercicio 7 terminar
/*
int main (){
    float mg,sp,rj,ms,venda;
    char estado[2];

    printf("Qual o valor da venda :");
    scanf("%f",&venda);

    printf("Qual o destino da venda :");
    scanf("%s",&estado);

    
    
    if (strcmp(estado,"MG")==0 || strcmp(estado,"mg")==0  ) //fun��o de comparar strings
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

//EXERCICIO 8
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

//EXERCICIO 9
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

//EXERCICIO 10
/*
int main(){
    int n[3];
    float calculo;
    printf("Por favor me forneça os 3 numeros tendo em mente que o ultimo so pode ser 1 ,2 ,3 :");
    scanf("%d%d%d",&n[0],&n[1],&n[2]);

    if(n[2] ==1){
        calculo =n[0]*n[1]*n[2];
        printf("De acordo com a media geometrica o resultado e : %.2f",calculo);
    }
    else if (n[2] ==2)
    {
        calculo =((n[0]+2)*(n[1]+3)*n[2])/6;
        printf("De acordo com a media ponderada o resultado e : %.2f",calculo);
    }
    else if (n[2] ==3)
    {
        calculo = 1/((1/n[0])+(1/n[1])+(1/n[2]));
        printf("De acordo com a media harmonica o resultado e : %.2f",calculo);
    } else if (n[2] ==3)
    {
        calculo = (n[0]+n[1]+n[2])/3;
        printf("De acordo com a media aritimetica o resultado e : %.2f",calculo);
    }else {
        printf("Lembrece o segundo numero so pode se 1 , 2 , 3");
    } 
}*/

//  EXERCICO 11
/*
int main (){
    int y,x;

    printf("Me forneca a posicao x");
    scanf("%d",&x);
    printf("Me forneca a posicao y");
    scanf("%d",&y);
    if (x>0 && y>0)
    {
        printf("O ponto se encontra no 1 quadrante\n");
    }else if(x<0 && y>0)
    {
        printf("O ponto se encontra no 2 quadrante\n");
    }
    else if (x<0 && y<0)
    {
        printf("O ponto esta no 3 quadrante\n ");
    }else if(x>0 && y<0)
    {
        printf("O ponto se encontra no 4 quadrante\n");
    }else if (x == 0 && y ==0)
    {
        printf("Origem\n");
    }else if (x == 0)
    {
        printf("Eixo x\n");
    }else if (y==0)
    {
        printf("Eixo y\n");
    }
    

}*/

//EXERCICIO 12
/*
int main (){
    int x;

    printf("Me forneca a posicao o mes :");
    scanf("%d",&x);
    
    if (x == 1)
    {
    printf("Esse mes e janeiro");
    }else if(x ==2)
    {
    printf("Esse mes e fevereiro fevereiro");   
    }
    else if ( x == 3)
    {
     printf("Esse mes e marco");   
    }else if( x==4)
    {
    printf("Esse mes e abril");
    }else if ( x==5)
    {
     printf("Esse mes e maio ");   
    }else if (x==6)
    {
    printf("Esse mes e junho");    
    }else if (x==7)
    {
     printf("Esse mes e julho");   
    } else if (x == 8)
    {
    printf("Esse mes e agosto");
    }else if(x ==9)
    {
    printf("Esse mes e setembro ");
    }
    else if ( x == 10)
    {
    printf("Esse mes e outubro");    
    }else if( x==11)
    {
    printf("Esse mes e novembro");
    }else if ( x==12)
    {
     printf("Esse mes dezembro ");   
    }else if (x>12 || x<=0)
    {
     printf("Esse mes nao existe ");   
    }

}*/

//exercico 13
/*
int main (){


}*/

//exercicio 14
/*
int main (){
    int i ;
    printf("Me fornaca o dia da semana :");
    scanf("%d",&i);

    switch (i)
    {
    case 1:
       printf ("Hj e domingo");
        break;
        case 2:
       printf ("Hj e segunda");
        break;
        case 3:
       printf ("Hj e terca");
        break;
        case 4:
       printf ("Hj e quarta");
        break;
        case 5:
       printf ("Hj e quinta");
        break;
        case 6:
       printf ("Hj e sexta");
        break;
        case 7:
       printf ("Hj e sabado");
        break;
    
    default:
    printf("Esse dia nao existe");
        break;
    }
}*/

//EXERCICIO 15
/*
int main(){
int ddd;
    printf("Me forneca o DDD :");
    scanf("%d",&ddd);

switch (ddd)
    {
    case 61:
       printf ("Brasilia");
        break;

        case 71:
       printf ("Salvador");
        break;

        case 11:
       printf ("São Paulo");
        break;

        case 21:
       printf ("Rio de Janeiro");
        break;
        case 32:
       printf ("Juiz de Fora");
        break;

        case 16:
       printf ("Campinas");
        break;

        case 27:
       printf ("Vitoria");
        break;
        case 31:
        printf("Belo Horizonte");
        break;
    
    default:
    printf("Nao existe esse DDD");
        break;
    }
}*/

//EXERCICIO 16
/*
int main (){
    int i;
    float numero[2],calculo;
    printf("Escolha uma das opcoes a baixo :\n");
    printf("(1)a+b = x\n(2)a-b = x\n(3)a*b = x\n(4)a/b = x\n");
    scanf("%d",&i);

   
    if(i>=5 || i <= 0 ){
        printf("Opcao nao selecionada ");
    }else{
    printf("Agora por gentileza me forneca os numeros\n");
    printf("Numeros 1:");
    scanf("%f",&numero[0]);
    printf("Numeros 2:");
    scanf("%f",&numero[1]);

        switch (i)
        {
        case 1:
            calculo = numero[0]+numero[1]; 
            printf("O calculo escolhido foi a+b = x\nE o resultado e %.2f",calculo);
            
            break;
            
            case 2:
            calculo = numero[0]-numero[1] ;
        printf("O calculo escolhido foi a-b = x\nE o resultado e %.2f",calculo);
            break;
            
            case 3:
            calculo = numero[0]*numero[1]; 
        printf("O calculo escolhido foi a*b = x\nE o resultado e %.2f",calculo);
            break;
            
            case 4:
            calculo = numero[0]/numero[1] ;
        printf("O calculo escolhido foi a/b = x\nE o resultado e %.2f",calculo);
            break;

            default:
            break;
        }
    }
}
*/

//EXERCICIO 17 
/*
int main (){
     int i ,por3,por5;
    printf("Me fornela o numero :");
    scanf("%d",&i);
  por3= i % 3;
  por5= i % 5;
  
    if (por3==0 && por5==0)
    {
        printf("Esse numero NAO pode pois e divisivel por 3 e por 5");
    }
    else if(por3==0)
    {
        printf("Numero divisivel por 3");
    }else if(por5==0)
    {
        printf("Numero divisivel por 5");
    }  else if(por3>0 && por5 > 0)
    {
        printf("Numero nao divisivel nem por 3 e nem por 5");
    }
    
}*/

//EXERCICIO 18
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

#define PI  3.14159;

//Exercicio 1 
/*int main(){
printf("Hello World!");

}
*/

//EXERCICIO 2
/*int main(){
printf("Caderno de poesias e um belo lugar.\nTantas coisas lindas que eu gostaria de falar.\n");
printf("Eu falo em forma de versos para todos poderem escutar.\nAgora voces ja sabem como os poetas passam os dias escrevendo em seus\n");
printf("cadernos de poesias");
}*/


//EXERCICIOS 3
/*
int main(){
    int a=0;
    float b=0;
    double c=0;
    char d[1], e[50];
  

    printf("Por favor me passe o num inteiro : ");
    scanf("%i",&a);
    printf("Por favor me passe o num real : ");
    scanf("%f",&b);
    printf("Por favor me passe o num real maior : ");
    scanf("%lf",&c);
    printf("Por favor me a letra : ");
    scanf("%s",&d);
    printf("Por favor me a string : ");
    scanf("%s",&e);
    

    printf("O numero inteiro e :%d\nO numero real e :%f\nO numero real maior e :%lf\nA letra e :%s\nA string e :%s",a,b,c,d,e);

}   */

//EXERCIO 4
/*
int main(){
    int a,b,x;
    printf("Me passe o valor de A:");
    scanf("%d",&a);
    printf("Me passe o valor de :");
    scanf("%d",&b);
    x=a+b;
    printf("%d + %d = %d",a,b,x);

}    */

//EXERCIO 5
/*
int main(){
    int a,b,x;
    printf("Me passe o valor de A:");
    scanf("%d",&a);
    printf("Me passe o valor de :");
    scanf("%d",&b);

    printf("%d + %d = %d",a,b,x=a+b);

}  */

//EXERCIO 6
/*
int main(){
    int a=5,=3,x;
    printf("Me passe o valor de A:");
    scanf("%d",&a);
    printf("Me passe o valor de :");
    scanf("%d",&b);

    printf("%d + %d = %d",a,b,x=a+b);

}  */


//EXERCICO 7
/*
int main(){
int a,b,PROD;
    printf("Me passe o valor de A:");
    scanf("%d",&a);
    printf("Me passe o valor de :");
    scanf("%d",&b);
    PROD=a*b;
    printf("PROD = %d",PROD);
}
*/

//EXERCICIO 8
/*
int main(){
    int a[4],i,diferenca; 
    for(i=0;i<4;i++){
        printf("Me passe o valor %d:",i+1);
        scanf("%d",&a[i]);
    }
    diferenca = abs( a[0]*a[1]-a[2]*a[3]);
    printf("%d x %d - %d x %d =%d",a[0],a[1],a[2],a[3],diferenca);
}*/

//EXERCICIO 9
/*
int main(){
    int i ;
    char vendedor[50];
    float vendas[31],salario,porcento[31];

    printf("Qual o nome do funcionario: ");
    scanf("%s",&vendedor);

    for (i=0;i<31;i++){
        printf("Quanto ele vendeu no dia %d:",i+1);
        scanf("%f",&vendas[i]);
    }
    for ( i = 0; i < 31; i++)
    {
        porcento[i]=vendas[i]*0.15;
    }
    
    for ( i = 0; i < 31; i++)
    {
        salario += porcento[i];
    }
    printf("O salario e %.2f",salario);
}*/

//EXERCICIO 10
/*
int main(){
int y[2] ,x[2],i;
float resultado;

for ( i = 0; i < 2; i++)
{
    printf("Por favor me forneca o x%d :",i+1);
    scanf("%d",&x[i]);
    printf("Por favor me forneca o y%d :",i+1);
    scanf("%d",&y[i]);
}
resultado = sqrt(pow(x[1]-x[0],2)+pow(y[1]-y[0],2));

printf("A distancia e %.2f",resultado);
}*/

//EXERCICIO 11
/*
int main(){
int raio;
double area, volume;

printf("Por favor me forneça o raio :");
scanf("%d",raio);

area = (double)4*pow(raio,2)* PI; 
volume =(4.0/3)*pow(raio,3)*PI;
}*/
//Exercuicio 5

#include <stdio.h>

/* Exercicio 1
int main(){
    int hora, minuto , segundo;

    printf("Por favor me forneca a hora :");
    scanf("%d",&hora);

    minuto = hora*60;
    segundo = hora*3600;
    printf("%d:%d:%d" ,hora,minuto,segundo);
    
}

*/
/* Exercicio 2 
int main(){
    float raio, area ;

    printf("Por favor me de o Raio da circunferencia :");
    scanf("%f",&raio);
    area = 3.14 * (raio*raio);
    printf("A area da circunferencia e = %.2f",area);


}
*/

/*exercicio3

int main(){
    float n[2],resultado;
    int i;

    for(i=0;i<=2;i+= 1){
    printf("Por gentileza me forneça os numero %d : ",i);
    scanf ("%f",&n[i]);
    }

    resultado = (n[0]+n[1]+n[2])/3;
    printf("%.2f",resultado);

}
*/


//Exercicio 4 
/*
int main(){
    int num[1],resto,quociente,i;

    for ( i = 0; i < 2; i++)
    {
        printf("Por gentileza me forneça os numero %d : ",i+1);
        scanf ("%d",&num[i]);
    }
    

    resto= num[0]%num[1];
    quociente= num[0]/num[1];
    printf("O resto e = %.1d , e o quociente e = %d",resto,quociente);

}*/

//Exercicio 5(Nao entendi o Exercicio)
/*
int main (){
    int rolos ,resultado,falta;
    float necessita;
    int metrosFios = 50;

    printf("Quantos Rolos possui :");
    scanf("%d",&rolos);

    resultado= rolos*metrosFios;
    printf("vc possui %d metros de fio ao todo",resultado);
    printf("De quantos metros precisa :");
    scanf("%f",&necessita);

    falta =necessita- resultado ;
    resultado= falta % resultado;
    printf("Vc precisa de mais %d metros ou %d rolo ",resultado,resultado/50);


}*/


/* Questao 6 (pode -se melhorar)
int main(){
    int a , b , media;
    int peso1 = 3.5;
    int peso2 = 7.5;

    printf("Forneça a nota 1 do Aluno:");
    scanf("%d",&a);
    printf("Forneça a nota 2 do Aluno:");
    scanf("%d",&b);

    if(a >= 10){
            a =10;
        }else if(a <=0 ){
            a =0;
    }
    if(b >= 10){
            b =10;
        }else if(b <=0 ){
            b =0;
    }

    media = (a *peso1)+(b*peso2)/(peso1+peso2);
    if(media >= 10){
        printf("Media = 10");
    }else if(media <=0){
        printf("Media = 0");
    }else{
        printf("Media = %d", media);
    }

}
*/

/*Exercicio 7
int main(){
    int matricula,horas;
    float valor , salario;
    char nome ,sexo;

    printf("A baixo responda com as informaçoes do funcionario\n");

    printf("Nome :");
    scanf("%c",&nome);

    printf("Sexo :");
    scanf("%c",&sexo);

    printf("Matricula :");
    scanf("%d",&matricula);

    printf("Horas trabalhadas :");
    scanf("%d",&horas);

    printf("valor trabalhadas :");
    scanf("%.2f",&valor);

    salario = (salario*horas)*30;

    printf("Nome:%c\nSexo:%c\n Matricula:%d\n Horas Trabalhadas:%d\n Valor por hora:%f\n Salario:%f",nome,sexo,matricula,horas,valor,salario);


}*/
/*
int main (){

    int a = 042   ;
    int b = 442  ;
    int c =  424 ;
     int d=  654 ;

     printf ("Seu cpv e : %d-%d-%d.%d",a,b,c,d);

}*/
#include <stdio.h>
#include <stdlib.h>

/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void q01() {
    printf("Roque Padilha\n");
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q02() {
    printf("Resultado: %d\n", 30*27);
} 

//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void q03() {
    //int=inteiro    float=real    char=caractere   char[20]
    int num1 = 5;
    int num2 = 8;
    int num3 = 12;
    float media = (5+8+12)/3.0;
    printf("Media de %d %d %d = %.2f\n", num1, num2, num3, media);
}

//4. Faça um programa que leia e imprima um número inteiro.
void q04(){
    //variaveis
    int inteiro;
    printf("Digite um numero inteiro: \n");
    scanf("%d",&inteiro);
    printf("Numero inteiro digitado foi %d.", inteiro);
}

//5. Faça um programa que leia dois números reais e os imprima.
void q05(){
    int one,two;
    printf("Digite dois numeros reais: \n");
    scanf("%d %d",&one,&two);
    printf("Os numeros reais digitados foram: %d e %d",one,two);
}

//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void q06(){
    int num;
    printf("Digite um numero inteiro para ler seu antecessor e sucessor: ");
    scanf("%d",&num);
    printf("O antecessor do numero: %d é %d e o sucessor: %d",num,num-1,num+1);   

}

//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
void q07() {
    char nome[50], endereco[70], telefone[14];
    printf("Nome: ");
    //espaco proposital para limpeza de buffer do teclado. [^\n] comando para ignorar a tecla "enter"
    scanf(" %50[^\n]",&nome);
    printf("Endereço: ");
    scanf(" %70[^\n]",&endereco);
    printf("Nome: ");
    scanf(" %14[^\n]",&telefone);
    printf("Nome: %s\nEndereço: %s\nTelefone: %s\n",nome,endereco,telefone);

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
void q08(){
    int num1,num2;
    printf("Digite dois numeros inteiros para imprimir a subtracao deles: ");
    scanf("%d %d",num1,num2);
    printf("A subtracao dos numeros %d e %d é: %d",num1,num2,num1-num2);
}

//9. Faça um programa que leia umnúmero real e imprima ¼ deste número.
void q09(){
    int num;
    printf("Digite um numero real para ler 1/4 de seu valor: ");
    scanf("%d", num);
    printf("Resultado: %d",num*0.25);
    }

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q10(){
    int num1,num2,num3,med;
    printf("Digite tres numeros para ler sua media aritmetica: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    med=((num1+num2+num3)/3);
    printf("A media aritmetica dos 3 numeros: %d",med);

}

//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.
void q11(){
    int num1,num2;
    printf("Digite quatro numeros para calcular as 4 operacoes: ");
    scanf("%d %d %d %d",&num1,&num2);
        printf("a soma entre %d e %d é: \n",num1,num2,num1+num2);
        printf("a subtracao entre %d e %d é: \n",num1,num1-num2);
        printf("a multiplicacao entre %d e %d é: \n",num1,num2,num1*num2);
        printf("a divisao entre %d e %d é: ",num1,num2,num1/num2);


}

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q12(){
    int num1,quadrado;
    printf("Digite um numero real para calcular seu quadrado: ");
    scanf("%d",&num1);
    quadrado=num1*num1;
    printf("O quadrado do numero %d é: %d", num1,quadrado);

}

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.
void q13(){
    float saldo,nvsaldo;
    printf("Digite o saldo atual da poupança: ");
    scanf("%f",&saldo);
    nvsaldo=saldo*1.02;
    printf("O seu novo saldo considerando o reajuste de 2 por cento: %.2f",nvsaldo);    
}

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base + altura) e a área (base * altura).
void q14(){
    float base,altura,perimetro,area;
    printf("Digite as medidas do retalgulo: base e altura. ");
    scanf("%f %f", &base,&altura);
    perimetro=base+altura;
    area=base*altura;
    printf("Perimetro do retangulo: %.2f\n",perimetro);
    printf("Area do retangulo: %.2f",area);
}

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.
void q15(){
    float produto,descontodes,valordesconto;
    printf("Digite o valor do produto: ");
    scanf("%f",&produto);
    printf("Digite o valor do desconto desejado em porcentagem: ");
    scanf("%f",&descontodes);
    valordesconto=produto-(produto*descontodes/100);
    printf("O valor do produto %.2f com desconto de %f é: %.2f",produto,descontodes,valordesconto);
    }

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.
void q16(){
    float salarioatual,reajuste,nvsalario;
    printf("Digite o salario atual: ");
    scanf("%f", &salarioatual);
    printf("Digite um percentual de reajuste: ");
    scanf("%f",&reajuste);
    nvsalario=salarioatual+(reajuste/100*salarioatual);////////////////////////////////////////////////a terminar
}

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5
void q17(){
    float cent,fah;
    printf("Digite o valor da temperatura em Centigrados para converter em Fahrenheit.");
    scanf("%f",&cent);
    fah=(9*cent+160)/5;
    printf("%.2f Centigrados equivale a %.2f Fahrenheits",cent,fah);
}


//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.
void q18(){
    float litcomb,tempviagem,velomed,l,d;
    printf("Digite o tempo gasto na viagem: \n");
    scanf("%f",&tempviagem);
    printf("Digite a velocidade media durante o percurso\n");
    scanf("%f",&velomed);
    d=tempviagem*velomed;
    l=d/12;
    printf("A distancia percorrida foi %.2f e o consumo em litros: %.2f ",d,l);

}

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.
void q19(){
    float valorvencido,taxaperiodica,periodoatraso,juros;
    printf("Digite o valor da prestacao vencida: ");
    scanf("%f",&valorvencido);
    printf("Digite o valor da taxa periodica e o periodo de atraso respectivamente: ");
    scanf("%f %f",&taxaperiodica,&valorvencido);
    juros=(valorvencido*taxaperiodica*periodoatraso)/100;
    prestacaoatraso=valorvencido+juros;
    printf("Valor da prestacao em atraso: %.2f\n",prestacaoatraso);
    printf("Periodo de atraso: %.2f meses\n",periodoatraso);
    printf("Juros cobrados pelo periodo de atraso: %.2f\n",juros);
    printf("Valor da prestacao acrescido dos juros: %.2f\n",prestacaoatraso);
    
}

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.
void q20(){
    float dolar,real;
    printf("Digite um valor em dolar para ler sua cotacao em reais(cotacao atual: 1USD = 4.97 REAIS.)");
    scanf("%d",&dolar);
    real=dolar*4.97;
    printf("%.2f Dolares = %.2f Reais. ",real);
}

int main() {
    q03();

    return EXIT_SUCCESS;
}

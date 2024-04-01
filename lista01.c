/*
EXERCÍCIOS DO CAPÍTULO 2
*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

//1. Faça um programa que leia dois valores numéricos inteiros e efetue a adição, caso o resultado seja maior que 10, apresentá-lo.
void questao01() {
  int num1,num2,soma;
  printf("Digite dois numeros para ler sua adicao");
  scanf("%d %d",&num1,&num2);
  soma=num1+num2;
  if(soma<=10){
    printf("A soma de %d e %d e: ",num1,num2,soma);
  }  

}

//2. Faça um programa que leia dois valores inteiros e efetue a adição. Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8, caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.
void questao02() {
	int num1,num2,soma=0;
	printf("Digite dois numeros, respectivamente: ");
	scanf("%d %d",&num1,&num2);
	soma=num1+num2;
	if(soma>20){
		soma=soma+8;
		printf("A soma entre %d e %d e: %d",num1,num2,soma);
	}
	else{
		soma=soma-5;
		printf("A soma entre %d e %d e: %d",num1,num2,soma);
  
	}
}

//3. Faça um programa que leia um número e imprima uma das duas mensagens: "É múltiplo de 3"ou "Não é múltiplo de 3".
void questao03() {
	int num;
	printf("Digite um numero qualquer para descobrir seu multiplo");
	scanf("%d",&num);
	if(num % 3==0){
		printf("%d e multiplo de 3.",num);
	}
	else{
		printf("%d nao e multiplo de 3.",num);
	}
}

//4. Faça um programa que leia um número e informe se ele é ou não divisível por 5.
void questao04() {
	int num;
	printf("Digite um numero qualquer para descobrir se e divisivel por 5");
	scanf("%d",&num);
	if(num % 5==0){
		printf("%d e divisivel por 5.",num);
	}	
}

//5. Faça um programa que leia um número e informe se ele é divisível por 3 e por 7.
void questao05() {
	int num;
	printf("Digite um numero qualquer para descobrir se e divisivel por 3 e por 7");
	scanf("%d",&num);
	if(num % 3==0 && num % 7==0){
		printf("%d e divisivel por 3 e por 7");
	}
		

}

//6. A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários
//estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
//bruto. Faça um programa em linguagem C que permita entrar com o salário bruto e o
//valor da prestação e informar se o empréstimo pode ou não ser concedido.
void questao06() {
	float salabruto,valorprest,concornot;
	printf("Digite o valor do salario bruto: ");
	scanf("%f",&salabruto);
	printf("Digite o valor da prestacao: ");
	scanf("%f",&valorprest);
	concornot=salabruto*0.30;
	if(valorprest<concornot){
		printf("Emprestimo concedido!");
		}else{
		printf("Emprestimo nao concedido!");
	}

}

//7. Faça um programa que leia um número e indique se o número está compreendido
//entre 20 e 50 ou não.
void questao07() {
	//verificar depois a partir daqui
	int num;
	printf("Digite um numero qualquer");
	scanf("%d",&num);
	if(num>20 && num<50){
		printf("%d esta compreendido entre 20 e 50");
	}else if(num<20){
		printf("%d e menor que 20.");
	}else if(num>50){
		printf("%d e maior que 50");
	}

		 }


//8. Faça um programa que leia um número e imprima uma das mensagens: 
//"Maior do que 20", "Igual a 20"ou "Menor do que 20".
void questao08() {
	int num;
	printf("Digite um numero:");
	scanf("%d",&num);
	if(num>20){
		printf("%d e maior que 20");
	}
	if(num==20){
		printf("%d e igual a 20");
	}
	if(num<20){
		printf("%d e menor que 20");
	}
	
}

//9. Faça um programa que permita entrar com o ano de nascimento da pessoa e como ano
//atual. O programa deve imprimir a idade da pessoa. Não se esqueça de verificar se o
//ano de nascimento informado é válido.
void questao09() {
	int anoatual=2024,anonascimento;
	printf("Digite seu ano de nascimento: ");
	scanf("%d",&anonascimento);
	if(anonascimento>1900){
	printf("A idade da pessoa que nasceu em %d e de %d anos",anonascimento,anoatual-anonascimento);
	}else{
		printf("Ano de nascimento invalido!");
	}
}

//10. Faça um programa que leia três números inteiros e imprima os três em ordem
//crescente.
void questao10(){
	    int num1,num2,num3;
    int first,second,third;

    printf("Digite tres numeros, respectivamente: ");
    scanf("%d %d %d",&num1,&num2,&num3);

    if (num1<num2 && num1<num3){
        first=num1;
        if (num2<num3) {
            second=num2;
            third=num3;
        } else{
            second=num3;
            third=num2;
        }
    } else if(num2<num1 && num2<num3) {
        first=num2;
        if (num1<num3) {
            second=num1;
            third=num3;
        } else{
            second=num3;
            third=num1;
        }
    }else{
        first=num3;
        if(num1<num2) {
            second=num1;
            third=num2;
        } else{
            second=num2;
            third=num1;
        }
    }
    printf("%d %d %d é a sequência em ordem crescente.\n",first,second,third);


}

//11. Faça um programa que leia 3 números e imprima o maior deles.
void questao11() {
	int num,num1,num2;
	int maior;
	printf("Digite 3 numeros: ");
	scanf("%d %d %d",&num, &num1, num2);
	if(num>num1 && num>num2){
		maior=num;
	}else if(num1>num &&num1>num2){
		maior=num1;
	}else if(num2>num &&num2>num1){
		maior=num2;
	}
	printf("O maior numero entre %d, %d e %d e: %d ",num,num1,num2,maior);
	
	
}

//12. Faça um programa que leia a idade de uma pessoa e informe:
//• Se é maior de idade
//• Se é menor de idade
//• Se é maior de 65 anos
void questao12() {
	int idd;
	printf("Digite sua idade: ");
	scanf("%d",&idd);
	if(idd>=18){
		printf("Tu es maior de idade!");
	}else if(idd<18){
		printf("Voce e muleke!");
	}else if(idd>65){
		printf("Vos sois um nobilissimo senhor(a)!");
	}else("???");
	
}

//13. Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da
//prova 2 de um aluno. O programa deve imprimir o nome, a nota da prova 1, a nota da prova 2, a média das notas e uma das mensagens: "Aprovado", "Reprovado"ou "em Prova Final"(a média é 7 para aprovação, menor que 3 para reprovação e as demais em prova final).
void questao13() {
	char nome[50];
	float nota1,nota2;
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	printf("Digite a nota da prova 1 e da prova 2 respectivamente: ");
	scanf("%f %f",&nota1,&nota2);
	med=(nota1+nota2)/2;
	if(med>=7){
		printf("Aprovado!");
	}else if(med>3 &&med<7){
		printf("Prova final!");
	}else if(med<3){
		printf("Reprovado!");
	}else("Opcao invalida");
	
	
	
}

//14. Faça um programa que permita entrar com o salário de uma pessoa e imprima o
//desconto do INSS segundo a tabela seguir:
//Salário Faixa de Desconto
//Menor ou igual à R$600,00 Isento
//Maior que R$600,00 e menor ou igual a R$1200,00 20%
//Maior que R$1200,00 e menor ou igual a R$2000,00 25%
//Maior que R$2000,00 30%
void questao14() {
	float salario,desconto;
	printf("Digite seu salario para o calculo do desconto do INSS");
	scanf("%f",&salario);
	if(salario<=600){
		printf("Isento!")
			}
	else if(salario>600 && salario<=1200){
		desconto=salario-salario*0.20;
		printf("Seu salario recebe 20 por cento de desconto do INSS. Total liquido: %.2f",desconto);
	}else if(salario>1200 && salario<=2000){
		desconto=salario-salario*0.25;
		printf("Seu salario recebe 25 por cento de desconto do INSS. Total liquido: %.2f",desconto);
	}
	
}

//15. Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor
//da compra for menor que R$20,00, caso contrário, o lucro será de 30%. Faça um programa que leia o valor do produto e imprima o valor da venda.
void questao15() {
	float valorproduto;
	float lucro;
	printf("Digite o valor do produto: ");
	scanf("%f",&valorproduto);
	if(valorproduto<20){
		lucro=valorproduto+valorproduto*0.45;
	}else if(valorproduto>20){
		lucro=valorproduto+valorproduto*0.30;
	}printf("O valor da venda final de um produto custando %.2f sera de %.2f",valorproduto,lucro);
	
	
}

//16. A confederação brasileira de natação irá promover eliminatórias para o próximo
//mundial. Faça um programa que receba a idade de um nadador e imprima a sua categoria segundo a tabela a seguir:
//Categoria Idade
//Infantil A 5 - 7 anos
//Infantil B 8 - 10 anos
//Juvenil A 11 - 13 anos
//Juvenil B 14 - 17 anos
//Sênior maiores de 18 anos
void questao16() {
	int idd;
	printf("Digite a idade do atleta: ");
	scanf("%d",&idd);
			if(idd>=5 && idd<=7){
			printf("%d anos esta na categoria infantil A.");
			}else if(idd>=8 && idd<=10){
				printf("%d anos esta na categoria infantil B. ");
	}else if(idd>=11 && idd<=13){
	printf("%d anos esta na categoria juvenil A. ");
	}else if(idd>=14 && idd<=17){
	printf("%d anos esta na categoria juvenil B. ");
	}		if(idd>=18){
			printf("%d anos esta na categoria Senior. ");
	}else("Opcao invalida");
		
	
}

//17. Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas começaram a fazer pesquisas para descobrir um bom plano, não muito caro. Umvendedor de um plano de saúde apresentou a tabela a seguir. Faça um programa que entre com o nome e a idade de uma pessoa e imprima o nome e o valor que ela deverá pagar.
//Idade Valor
//Até 10 anos R$30,00
//Acima de 10 até 29 anos R$60,00
//Acima de 29 até 45 anos R$120,00
//Acima de 45 até 59 anos R$150,00
//Acima de 59 até 65 anos R$250,00
//Maior que 65 anos R$400,00
void questao17() {
	char nome[50];
	int idd;
	printf("Digite o seu nome: ");
	scanf("%s",&nome);
	printf("Digite a sua idade: ");
	scanf("%d",&idd);
	if(idd<=10){
		printf("Ate 10 anos pagara um valor de R$30,00");
			}
			if(idd>10 && idd<=29){
		printf("11 ate 29 anos pagara um valor de R$60,00");
			}
			if(idd>29 && idd<=45){
		printf(" 30 ate 45 anos pagara um valor de R$120,00");
			}
			if(idd>45 && idd<=59){
		printf("46 ate 59 anos pagara um valor de R$150,00");
			}
			if(idd>59 && idd<=65){
		printf("60 ate 65 anos pagara um valor de R$250,00");
			}
			if(idd>65){
		printf("Maiores de 65 anos pagara um valor de R$400,00");
			}
	
}

//18. Faça um programa que leia um número inteiro entre 1 e 12 e escreva o mês correspondente. Caso o usuário digite umnúmero fora desse intervalo, deverá aparecer uma mensagem informando que não existe mês com este número. Utilize o switch para este problema.
void questao18() {
	int num;
	printf("Digite um numero de 1 a 12");
	scanf("%d",&num);

	switch(num){
		case 1: 
		printf("Janeiro\n");
		break;
		case 2: 
		printf("Fevereiro\n");
		break;
		case 3: 
		printf("Marco\n");
		break;
		case 4: 
		printf("Abril\n");
		break;
		case 5: 
		printf("Maio\n");
		break;
		case 6: 
		printf("Junho\n");
		break;
		case 7: 
		printf("Julho\n");
		break;
		case 8: 
		printf("Agosto\n");
		break;
		case 9: 
		printf("Setembro\n");
		break;
		case 10: 
		printf("Outubro\n");
		break;
		case 11: 
		printf("Novembro\n");
		break;
		case 12: 
		printf("Dezembro\n");
		break;
			default:
			printf("Nao existe mes correspondente a este numero.");
				}
	
}

//19. Em um campeonato nacional de arco-e-flecha, tem-se equipes de três jogadores para cada estado. Sabendo-se que os arqueiros de uma equipe não obtiveram o mesmo número de pontos, criar um programa que informe se uma equipe foi classificada, de acordo com a seguinte especificação:
//• Ler os pontos obtidos por cada jogador da equipe;
//• Mostrar esses valores em ordem decrescente;
//• Se a soma dos pontos for maior do que 100, imprimir a média aritmética entre eles, caso contrário, imprimir a mensagem "Equipe desclassificada".
void questao19() {
	int n1,n2,n3;
	printf("Digite os pontos obtidos pelo primeiro atleta: ");
	scanf("%d",&n1);
	printf("Digite os pontos obtidos pelo segundo atleta: ");
	scanf("%d",&n2);
	printf("Digite os pontos obtidos pelo terceiro atleta: ");
	scanf("%d",&n3);
	if(n1<n2 && n1<n3){
		if(n2<n3){
			printf("%d, %d, %d ",n1,n2,n3);
		}else
			printf("%d, %d, %d ",n1,n3,n2);
		}
	else if(n2<n1 && n2<n3){
		if(n1<n3){
			printf("%d, %d, %d ",n2,n1,n3);
		}else
			printf("%d, %d, %d ",n2,n3,n1);
	                      }
	else if(n3<n1 && n3<n2){
		if(n1<n2){
			printf("%d, %d, %d ",n3,n1,n2);
		}else
			printf("%d, %d, %d ",n3,n2,n1);
	}
	
}

//20. O banco XXX concederá um crédito especial com juros de 2% aos seus clientes de acordo com o saldomédio no último ano. Faça um programa que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela a seguir. O programa deve imprimir uma mensagem informando o saldo médio e o valor de crédito.
//Saldo Médio Percentual
//de 0 a 500 nenhum crédito
//de 501 a 1000 30% do valor do saldo médio
//de 1001 a 3000 40% do valor do saldo médio
//acima de 3001 50% do valor do saldo médio
void questao20() {
	float saldomed,valorcred;
	printf("Digite seu saldo medio para calculo do credito especial: ");
	scanf("%f",&saldomed);
	if(saldomed>=0 && saldomed<=500){
		printf("Nenhum credito!");
	}else if(saldomed>500 && saldomed<=1000){
		printf("Voce recebera 30 por cento do valor do saldo medio totalizando: ",saldomed+saldomed*0.30);
	}else if(saldomed>1000 && saldomed<=3000){
		printf("Voce recebera 40 por cento do valor do saldo medio totalizando: ",saldomed+saldomed*0.40");
	}else if(saldomed>3000){
		printf("Voce recebera 50 por cento do valor do saldo medio totalizando: ",saldomed+saldomed*0.50");
	}
	
	
}

//21. A biblioteca de uma Universidade deseja fazer um programa que leia o nome do livro que será emprestado, o tipo de usuário (professor ou aluno) e possa imprimir um recibo conforme mostrado a seguir. Considerar que o professor tem dez dias para devolver o livro e o aluno só três dias.
//• Nome do livro:
//• Tipo de usuário:
//• Total de dias:
void questao21() {
	char nomeliv[50];
	int type;
	printf("Digite o nome do livro que deseja emprestar: ");
	scanf("%s",&nomeliv);
	printf("Professor, digite (1):\nAluno, Digite (2):");
		if(type==1){
			printf("Professor, o livro %s foi emprestado com sucesso e devera ser devolvido em ate 10 dias);
				}
		else if(type==2){
			printf("Aluno, o livro %s foi emprestado com sucesso e devera ser devolvido em ate 3 dias);
				}
	
	
	
}

//22. Construa um programa que leia o percurso em quilómetros, o tipo do carro e informe o consumo estimado de combustível, sabendo-se que umcarro tipo C faz 12 kmcom umlitro de gasolina, um tipo B faz 9 kme o tipo C, 8 kmpor litro.
void questao22() {

	int type;
	float km,consume;
	printf("------------------------------------\nDigite o tipo de carro e o percurso em quilometros respectivamente: \n(1)Tipo A.\n(2)Tipo B.\n(3)Tipo C.\n------------------------------------\n");
	scanf("%d %f",&type,&consume);
	if(type==1){
		km=consume/12;
		printf("O consumo estimado para um carro tipo A e de %.2f km/l.",km);
	}else if(type==2){
		km=consume/9;
		printf("O consumo estimado para um carro tipo B e de %.2f km/l.",km);
	}
	else if(type==3){
		km=consume/8;
		printf("O consumo estimado para um carro tipo C e de %.2f km/l.",km);
	}
		
	
}

//23. Crie um programa que informe a quantidade total de calorias de uma refeição a partir da escolha do usuário que deverá informar o prato, a sobremesa, e bebida conforme a tabela a seguir.
//Prato Sobremesa Bebida
//Vegetariano 180cal Abacaxi 75cal Chá 20cal
//Peixe 230cal Sorvete diet 110cal Suco de laranja 70cal
//Frango 250cal Mousse diet 170cal Suco de melão 100cal
//Carne 350cal Mousse chocolate 200cal Refrigerante diet 65cal
void questao23() {

}

//24. A polícia rodoviária resolveu fazer cumprir a lei e vistoriar veículos para cobrar dos motoristas o DUT. Sabendo-se que o mês em que o emplacamento do carro deve ser renovado é determinado pelo último número da placa do mesmo, faça um programa que, a partir da leitura da placa do carro, informe o mês em que o emplacamento deve ser renovado.
void questao24() {
	int placa;
	printf("Digite o ultimo numero da placa" );
	scanf("%d",&placa);
	
	
}

//25. A prefeitura contratou uma firma especializada para manter os níveis de poluição considerados ideais para umpaís do 1º mundo. As indústrias, maiores responsáveis pela poluição, foram classificadas em três grupos. Sabendo-se que a escala utilizada varia de 0,05 e que o índice de poluição aceitável é até 0,25, fazer um programa que possa imprimir intimações de acordo com o índice e a tabela a seguir:
//Índice Indústrias que receberão intimação
//0,3 1º gurpo
//0,4 1º e 2º grupos
//0,5 1º, 2º e 3º grupos
void questao25() {
	float nivelpol;
	printf("Digite o nivel de poluicao, sendo 0.25 o valor maximo aceitavel: ");
	scanf("%f",&nivelpol);
	if(nivelpol>=0.05 && nivelpol<=0.3){
		("Vossa empresa ultrapassou os limites aceitaveis de poluicao, e por meio desta notificacao, voce foi intimado por estar no 1 Grupo. ");
	}else if(nivelpol<=0.4){
		("Vossa empresa ultrapassou os limites aceitaveis de poluicao, e por meio desta notificacao, voce foi intimado por estar no 1 e 2 Grupos. ");
	}else if(nivelpol<=0.5 || nivelpol>0.5){
		("Vossa empresa ultrapassou os limites aceitaveis de poluicao, e por meio desta notificacao, voce foi intimado por estar no 1, 2 e 3 Grupos. ");
	}
		
}

int main() {
	const char menu[1000] = "\n================================\n            PROGRAMAS\n================================\n[1]  - Adição\n[2]  - Adição 2\n[3]  - Múltiplo\n[4]  - Múltiplo 2\n[5]  - Múltiplo 3\n[6]  - Crédito\n[7]  - Intervalo\n[8]  - Menor/Maior\n[9]  - Idade\n[10] - Crescente\n[11] - Maior\n[12] - Idade 2\n[13] - Situação Aluno\n[14] - INSS\n[15] - Valor de Venda\n[16] - Natação\n[17] - Plano de Saúde\n[18] - Mês do Ano\n[19] - Arco e Flecha\n[20] - Crédito Especial\n[21] - Biblioteca\n[22] - Consumo Combustível\n[23] - Calorias\n[24] - Emplacamento\n[25] - Intimação\n================================\n";
	printf("%s",menu);
	int opcao;
	printf("Digite a questão a ser executada: ");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1:
			questao01();
			break;
		case 2:
			questao02();
			break;
		case 5:
			questao05();
			break;			
		case 10:
			questao10();
			break;
		default:
			printf("Opção inválida!");
	}
	
	return EXIT_SUCCESS;
}

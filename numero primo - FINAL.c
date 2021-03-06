/****************************************************
* Trab 2 : Numeros Primos
* Nome: Gabriel Duarte Louredo da Costa
* Matrícula: 0050015048
* Professor: Alex Salgado
*****************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
	int num, p=1;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nOlá, meu nome é Gabriel Duarte e vou calcular números primos.\n");
	
	while (p<=1) 
	{
	
		do
		{
			printf("\nEntre com um número positivo: ");
			scanf("%d", &num);
		}
		while(num<=0);
	
		/* 
		Filtra todos os múltiplos de 2, 3, 5, 7 e, consequentemente, os múltiplos de todos os demais números.
		Se o número digitado for múltiplo de um desses 4 números, exceto se o mesmo for equivalente a eles próprios (2, 3, 5 e 7),
		logo, o número não é primo, caso contrário, o número é primo.
		Construí essa lógica tendo como base o raciocínio mostrado nesse site:
		https://educacao.uol.com.br/disciplinas/matematica/numeros-primos-veja-algoritmo-para-encontra-los.htm
		*/ 
		if ( ((num==1) || (num%2 == 0) || (num%3 == 0) || (num%5 == 0) || (num%7 == 0)) && !((num==2) || (num==3) || (num==5) || (num==7)) )

		printf("\n%d NÃO É um número primo.\n", num);
	
		else

		printf("\n%d é um número primo.\n", num);

		printf("\nDeseja continuar (1-Sim / 2-Não) ? ");
		scanf("%d", &p);
	}
	
	if (p=2) //Exibe mensagem de agradecimento, caso opte por não continuar (opção 2).
	
	printf("\nObrigado, até a próxima! Para ver o meu código entre no link:\n\nhttps://goo.gl/cH5YiE\n\n");

	system("pause");
	return 0;
}

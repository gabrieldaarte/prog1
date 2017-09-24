/****************************************************
* Trab 2 : Numeros Primos
* Nome: Gabriel Duarte Louredo da Costa
* Matrícula: 0050015048
* Professor: Alex Salgado
*****************************************************/

#include <stdio.h>

int main()
{
	int num, p=1;
	
	printf("\nOla, meu nome eh Gabriel Duarte e vou calcular numeros primos.\n");
	
	while (p<=1) 
	{
	
		do
		{
			printf("\nEntre com um numero positivo: ");
			scanf("%d", &num);
		}
		while(num<=0);
	
		/* 
		Filtra todos os múltiplos de 2, 3, 5, 7 e, consequentemente, os múltiplos de todos os demais números.
		Se o número digitado for múltiplo de um desses 4 números, exceto se o mesmo for equivalente a eles próprios (2, 3, 5 e 7),
		logo, o número não é primo, caso contrário, o número é primo.
		Construi essa lógica tendo como base o raciocínio mostrado nesse site:
		https://educacao.uol.com.br/disciplinas/matematica/numeros-primos-veja-algoritmo-para-encontra-los.htm
		*/ 
		if ( ((num==1) || (num%2 == 0) || (num%3 == 0) || (num%5 == 0) || (num%7 == 0)) && !((num==2) || (num==3) || (num==5) || (num==7)) )

		printf("\n%d NAO EH um numero primo.\n", num);
	
		else

		printf("\n%d eh um numero primo.\n", num);

		printf("\nDeseja continuar (1-Sim / 2-Nao) ? ");
		scanf("%d", &p);
	}
	
	if (p=2)
	
	printf("\nObrigado, ate a proxima! Para ver o meu codigo entre no link:\nhttps://github.com/gabrieldaarte/prog1/blob/master/numero%20primo%20-%20FINAL.c\n");

	system("pause");
	return 0;
}

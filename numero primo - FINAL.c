/****************************************************
* Trab 2 : Numeros Primos
* Nome: Gabriel Duarte Louredo da Costa
* Matr�cula: 0050015048
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
		Filtra todos os m�ltiplos de 2, 3, 5, 7 e, consequentemente, os m�ltiplos de todos os demais n�meros.
		Se o n�mero digitado for m�ltiplo de um desses 4 n�meros, exceto se o mesmo for equivalente a eles pr�prios (2, 3, 5 e 7),
		logo, o n�mero n�o � primo, caso contr�rio, o n�mero � primo.
		Construi essa l�gica tendo como base o racioc�nio mostrado nesse site:
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
	
	printf("\nObrigado, ate a proxima! Para ver o meu codigo entre no link:\n");

	system("pause");
	return 0;
}

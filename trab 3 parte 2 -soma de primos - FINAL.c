/****************************************************
* Trab 3 : Criar 1 exerc�cio, resolver outro e corrigir - PARTE 2
* Nome: Gabriel Duarte Louredo da Costa
* Matr�cula: 0050015048
* Professor: Alex Salgado
*****************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
	int num, num2, p=1;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n<||_SOMA APENAS PARA N�MEROS PRIMOS_||>");
	
	while (p<=1) 
	{	
	
		do
		{
			printf("\n\nEntre com o primeiro n�mero primo: ");
			scanf("%d", &num);		
        }
		while((num<=0) && ((num==1) || (num%2>0) || (num%3>0) || (num%5>0) || (num%7>0)));
		
		if ( ((num==1) || (num%2 == 0) || (num%3 == 0) || (num%5 == 0) || (num%7 == 0)) && !((num==2) || (num==3) || (num==5) || (num==7)) )
		printf("\n%d n�o � um n�mero v�lido, pois n�o � primo.", num);
		
		else
        
		do
        {
	        do
	        {
				printf("\nEntre com o segundo n�mero primo: ");
				scanf("%d", &num2);
			}
			while((num<=0) && ((num==1) || (num%2>0) || (num%3>0) || (num%5>0) || (num%7>0)));
		
			if ( ((num2==1) || (num2%2 == 0) || (num2%3 == 0) || (num2%5 == 0) || (num2%7 == 0)) && !((num2==2) || (num2==3) || (num2==5) || (num2==7)) )
			printf("\n%d n�o � um n�mero v�lido, pois n�o � primo.", num2);
			
			else
			printf("\n%d + %d = %d", num, num2, num + num2);   
		}
		while((num<=0) && ((num==1) || (num%2>0) || (num%3>0) || (num%5>0) || (num%7>0)));
        
		printf("\n\nDeseja continuar (1-Sim / 2-N�o) ? ");
		scanf("%d", &p);
	}
	
	if (p=2)
	
	printf("\nObrigado, at� a pr�xima!\n\n");

	system("pause");
	return 0;
}


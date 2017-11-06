#include <stdio.h>
#include <string.h>

int main()
{
    char tweet[140];
    int i, tam, qtdHash=0;
    
    printf("\nEntre: ");
    scanf("%[^\n]s", tweet);
    
    tam = strlen(tweet);
    
    for(i=0; i<tam; i++)
    {
	 		 if(tweet[i] == '#')
	 		 qtdHash++;
			 }
			 
			 printf("\nNumero de hashtg´s encontrado: %d\n\n", qtdHash);
			 
			 system ("pause");
			 return 0;
}

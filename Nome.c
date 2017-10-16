#include <stdio.h>
#include <string.h>

int main()
{
    char nome[20];
    int tam, i;
    
    printf ("Qual o seu nome:");
    scanf("%s", nome);
    
    tam = strlen(nome);
    
    printf("\nBoa noite %s\n", nome);
    printf("\nO seu nome tem %d caracteres", tam);
    printf("\nA primeira letra do seu nome eh %c\n", nome[0]);
    
    for(i=0; i<tam; i++)
    {
             printf("\n%c", nome[i]);
             }
   
    system ("pause");
    return 0;
    
}

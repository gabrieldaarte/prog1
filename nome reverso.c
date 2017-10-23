#include <stdio.h>
#include <string.h>

int main()
{
    char nome[20];
    int tam, i;
    
    printf("\nEntre com um nome:");
    scanf("%s", nome);
    
    tam = strlen(nome); //retorna o numero de caracteres da string
    
    printf("\nO nome na ordem reversa:");
    
    for(i=tam-1; i>=0; i--) // imprime na ordem reversa
    {
                 printf("%c", nome[i]); // imprime caracter a caracter
                 }
                 
    printf("\n\n");
    system ("pause");
    return 0;
}

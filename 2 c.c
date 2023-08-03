#include <stdio.h>
#include <string.h>

//Funcção para inverter uma string
void inverterString(char *str)  {
    int inicio = 0;
   int fim = strlen(str) - 1;

   // Inverte a string trocando os caracteres de posição
   while (inicio < fim) {
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        inicio++;
        fim--;
   }
}

int main() {
   char palavra[100];

   // Solicita ao usuário que digite uma palavra
   printf("Digite uma palavra: ");
   scanf("%s", palavra);

   // Chama a função para inverter a palavra digitada
   inverterString(palavra);

   // Exibe a palavra invertida na tela
   printf("A palavra invertida é: %s\n", palavra);
   return 0;
} 



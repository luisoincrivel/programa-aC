#include <stdio.h>

int main() {
   int num1, num2, soma;

   //lendo dois números do usuário
   printf("Digite o primeiro número: ");
   scanf("%d", &num1);

   printf("Digite o segundo número: ");
   scanf("%d", &num2);

   //Calculando a soma dos dois números
   soma = num1 + num2;

   //Exibindo resultado
   printf("A soma de %d e %d é: %d\n", num1, num2, soma);
   
   return 0;
}
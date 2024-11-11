#include <stdio.h>

int main(){

int idade;
float altura;
char caractere;
char nome[4];

printf("Entre com sua idadde: \n");
scanf("%d", &idade);

printf("Entre com a altura: \n");
scanf("%f", &altura);

printf("Entre com o caractere: \n");
scanf("%c", &caractere);

printf("Entre com o nome: \n");
scanf("%s", &nome);

printf("Nome: %s - Altura: %f\n", nome, altura);
printf("Caractere: %c - Idade: %d", caractere, idade);

return 0;

}
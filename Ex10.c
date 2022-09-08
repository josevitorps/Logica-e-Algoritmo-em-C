#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{

setlocale(LC_ALL,"Portuguese");

//Declarando as variáveis
float b, c, soma, sub, mult, divi;
int a;

//Recebendo os valores
    printf ("Digite um valor de 1 a 4, sabendo que 1 corresponde a soma, 2 corresponde a subtração, 3 corresponde a multiplicação e 4 corresponde a divisão: \n");
    scanf("%i", &a);

//Limpando o conteúdo da tela
system("cls");

//Iniciando a condicional
switch (a)
{
case 1:
    printf("\nInsira o primeiro valor a ser somado: ");
    scanf("%f",&b);
    printf("\nInsira o segundo valor a ser somado: ");
    scanf("%f",&c);
    soma = (b + c);
    printf("\nO valor do seu somatório deu: %1.f", soma);
    break;

case 2:
    printf("\nInsira o primeiro valor a ser subtraído: ");
    scanf("%f",&b);
    printf("\nInsira o segundo valor a ser subtraído: ");
    scanf("%f",&c);
    sub = (b - c);
    printf("\nO valor de sua subtração deu: %1.f", sub);
    break;

case 3:
    printf("\nInsira o primeiro valor a ser multiplicado: ");
    scanf("%f",&b);
    printf("\nInsira o segundo valor a ser multiplicado: ");
    scanf("%f",&c);
    mult = (b * c);
    printf("\nO valor de sua multiplicação deu: %.1f", mult);
    break;

case 4:
    printf("\nInsira o primeiro valor a ser dividido: ");
    scanf("%f",&b);
    printf("\nInsira o segundo valor a ser dividido: ");
    scanf("%f",&c);
    divi = (b / c);
    printf("\nO valor de sua divisão deu: %1.f", divi);
    break;

default:
    printf ("\nO valor digitado é inválido.");
}
}
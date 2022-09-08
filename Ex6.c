#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{

setlocale(LC_ALL,"Portuguese");

//Declarando variáveis
int numero, resto, soma;

//Recebendo os valores
printf("Digite o número pensado para que seja realizado o somatório dos mesmos: ");
scanf("%d",&numero);
soma=0;

//Iniciando a condicional

if (numero > 0){
while (numero > 0){
    resto = numero % 10;
    numero = (numero - resto)/10;
    soma = (soma + resto);
} 
    printf("\nA soma dos seus algarismo é: %d", soma);
} else{
    printf("\nO número digitado é inválido. Digite um número maior do que zero!");
}
}
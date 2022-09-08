#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

setlocale(LC_ALL,"Portuguese");

//Declarando variáveis
float nota1, nota2, nota3, mp;

//Recebendo os valores
printf("Digite o valor da sua primeira nota: ");
scanf("%f",&nota1);
printf("\nDigite o valor da sua segunda nota: ");
scanf("%f",&nota2);
printf("\nDigite o valor da sua terceira nota: ");
scanf("%f",&nota3);

mp = ((nota1 * 1) + (nota2 * 1) + (nota3 * 2))/4;

//Limpando a tela
system("cls");

//Iniciando a condicional

if (mp >= 60){
    printf("\nA sua nota final foi: %.2f", mp);
    printf("\nCom essa nota você está aprovado!");
}
else{
    printf("\nA sua nota final foi: %.2f", mp);
    printf("\nCom essa nota você está convidado de livre espontânea pressão a repetir o ano!!!");
}
}
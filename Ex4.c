#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{

setlocale(LC_ALL,"Portuguese");

//Declarando variáveis
float salario, emprestimo;

//Recebendo valores
printf("\nDigite o valor do seu salário: ");
scanf("%f",&salario);
printf("\nDigite o valor que você pagará de prestação: ");
scanf("%f",&emprestimo);

//Iniciando condicional

if(emprestimo > salario * 0.2){
printf("\nO empréstimo solicitado não foi concedido!");
} 
else{
    printf("\nO empréstimo solicitado foi liberado junto ao banco!");
}
}
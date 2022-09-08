#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
TESTAR NO DEVC SE O PROGRAMA FUNCIONA COM O PRIMEIRO IF SEM PONTOS OU SOMENTE COM PONTOS{

setlocale(LC_ALL,"Portuguese");

//Declarando variáveis
float venda, comissao, comissaocalc;

//Recebendo os valores
printf("Digite o valor da venda mensal: ");
scanf("%f", &venda);

//Limpando a tela
system("cls");

//Iniciando a condicional
if (venda >= 100000){
    comissao = venda * 0.16;
    comissaocalc = comissao + 700;
    printf("O valor da comissão que deverá ser paga ao vendedor é R$: %.1f", comissaocalc);

} else if (venda < 100.000 && venda >= 80.000){
    comissao = venda * 0.14;
    comissaocalc = comissao + 650;
    printf("O valor da comissão que deverá ser paga ao vendedor é R$: %.1f", comissaocalc);

} else if (venda < 80.000 && venda >= 60.000){
    comissao = venda * 0.14;
    comissaocalc = comissao + 600;
    printf("O valor da comissão que deverá ser paga ao vendedor é R$: %.1f", comissaocalc);

} else if (venda < 60.000 && venda >= 40.000){
    comissao = venda * 0.14;
    comissaocalc = comissao + 550;
    printf("O valor da comissão que deverá ser paga ao vendedor é R$: %.1f", comissaocalc);

} else if (venda < 40.000 && venda >= 20.000){
    comissao = venda * 0.14;
    comissaocalc = comissao + 500;
    printf("O valor da comissão que deverá ser paga ao vendedor é R$: %.1f", comissaocalc);
} else if (venda < 20.000){
    comissao = (venda * 0.14);
    comissaocalc = comissao + 400;
    printf("O valor da comissão que deverá ser paga ao vendedor é R$: %.1f", comissaocalc);
}
}
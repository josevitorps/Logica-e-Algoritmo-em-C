#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{

setlocale(LC_ALL,"Portuguese");

//Declarando variáveis
float preco, percentual, preconovo;


//Recebendo os valores
printf("Digite o preço antigo: ");
scanf("%f", &preco);


//Limpando a tela
system("cls");



//Iniciando a condicional
if (preco < 50){
    percentual = preco * 0.05;
    preconovo = preco + percentual;
    printf("O novo preço do produto é R$: %.1f.", preconovo);

} else if (preco >= 50 && preco <=100){
    percentual = preco * 0.10;
    preconovo = preco + percentual;
    printf("O novo preço do produto é R$: %.1f.", preconovo);

} else {
    percentual = preco * 0.15;
    preconovo = preco + percentual;
    printf("O novo preço do produto é R$: %.1f.", preconovo);
}

if (preconovo < 80){
    printf("\nO produto está barato!");

} else if (preconovo >= 80 && preconovo <= 120){
    printf("\nO produto está com preço normal!");

} else if (preconovo > 120 && preconovo <= 200){
    printf("\nO produto está caro!");

} else {
    printf("\nO produto está muito caro!");
}
}
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    setlocale(LC_ALL,"Portuguese");

// Declarando as variáveis

int codigo, qtd;
float soma;


// Recebendo os valores
printf("Código 100 | Cachorro Quente | Preço = 1,20\n");
printf("Código 101 | Bauru Simples | Preço = 1,30\n");
printf("Código 102 | Bauru com Ovo | Preço = 1,50\n");
printf("Código 103 | Hamburguer | Preço = 1,20\n");
printf("Código 104 | Cheeseburguer | Preço = 1,70\n");
printf("Código 105 | Suco | Preço = 2,20\n");
printf("Código 106 | Refrigerante | Preço = 1,00\n");
printf("\nDigite qual o código do produto que você gostaria conforme a tabela acima: ");
scanf("%i", &codigo);

//Validando se o usuário colocou um dos códigos possíveis
if(codigo >= 100 && codigo <= 106){
printf("\nDigite qual a quantidade desse produto que você gostaria de comprar: ");
scanf("%i", &qtd);
} else {
    printf("Você não digitou um código correto, por favor, digite o código do produto conforme a tabela.");
}

//Limpando o conteúdo da tela após ele selecionar item e quantidade
system("cls");

// Iniciando as condicionais para fornecer o preço final

if(codigo == 100){
    soma = (qtd * 1.20);
    printf("Você pediu %i cachorro(s) quente(s) e custará R$: %.2f", qtd, soma);
} else if (codigo == 101){
    soma = (qtd * 1.30);
    printf("Você pediu %i bauru(s) simples e custará R$: %.2f", qtd, soma);
} else if (codigo == 102){
    soma = (qtd * 1.50);
    printf("Você pediu %i bauru(s) com ovo(s) e custará R$: %.2f", qtd, soma);
} else if (codigo == 103){
    soma = (qtd * 1.20);
    printf("Você pediu %i hamburguer(es) e custará R$: %.2f", qtd, soma);
} else if (codigo == 104){
    soma = (qtd * 1.70);
    printf("Você pediu %i cheeseburguer(s) e custará R$: %.2f", qtd, soma);
} else if (codigo == 105){
    soma = (qtd * 2.20);
    printf("Você pediu %i suco(s) e custará R$: %.2f", qtd, soma);
} else if (codigo == 106){
    soma = (qtd * 1.00);
    printf("Você pediu %i refrigerante(s) e custará R$: %.2f", qtd, soma);
}
}
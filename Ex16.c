#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{

setlocale(LC_ALL,"Portuguese");

//Declarando as variáveis
int a, b, c, d, e, f, g, h, n, j;
int resp, resp2, resp3, resp4, resp5;
int soma, soma2, soma3, soma4, soma5;
int java;

//Recebendo os valores
    printf("\nDigite um valor entre 1 e 100: ");
        scanf("%i", &b);
    printf("\nDigite um valor entre 1 e 100: ");
        scanf("%i", &c);
    printf("\nDigite um valor entre 1 e 100: ");
        scanf("%i", &a);
    printf("\nDigite um valor entre 1 e 100: ");
        scanf("%i", &e);
    printf("\nDigite um valor entre 1 e 100: ");
        scanf("%i", &f);
    printf("\nDigite um valor entre 1 e 100: ");
        scanf("%i", &g);
    printf("\nDigite um valor entre 1 e 100: ");
        scanf("%i", &h);
    printf("\nDigite um valor entre 1 e 100: ");
        scanf("%i", &n);
    printf("\nDigite um valor entre 1 e 100: ");
        scanf("%i", &d);
    printf("\nDigite um valor entre 1 e 100: ");
        scanf("%i", &j);
    printf("Quando você estiver pronto, digite 0, dê um enter e iniciaremos sua avaliação! \n");
        scanf("%i", &java);

//Limpando a tela
system("cls");


//Iniciando a condicional
    switch (java){
        case 0:
        printf("Digite a soma dos valores: %i + %i\n", a, j);
            scanf("%i", &resp);
            soma = a + j;

        printf("Digite a soma dos valores: %i + %i\n", c, d);
            scanf("%i", &resp2);
            soma2 = c + d;

        printf("Digite a soma dos valores: %i + %i\n", b, f);
            scanf("%i", &resp3);
            soma3 = b + f;

        printf("Digite a soma dos valores: %i + %i\n", h, n);
            scanf("%i", &resp4);
            soma4 = h + n;

        printf("Digite a soma dos valores: %i + %i\n", e, g);
            scanf("%i", &resp5);
            soma5 = e + g;
    break;

        default:
        printf("Você é um engraçadinho né, vai digitar todos os valores de novo pra aprender.");
    } 
    if (soma != resp && soma2 != resp2 && soma3 != resp3 && soma4 != resp4 && soma5 != resp5){
        printf("Você errou todas as questões, precisa estudar mais!!!");
    } else if (soma == resp && soma2 != resp2 && soma3 != resp3 && soma4 != resp4 && soma5 != resp5){
        printf("Você acertou apenas uma questão, logo, errou as outras 4!!!");
    } else if (soma == resp && soma2 != resp2 && soma3 != resp3 && soma4 != resp4 && soma5 != resp5){
        printf("Faltou um pouco de estudo, continue praticando mais, você acertou apenas 2 questões.");
    } else if (soma == resp && soma2 == resp2 && soma3 != resp3 && soma4 != resp4 && soma5 != resp5){
        printf("Você está no caminho certo, continue assim, você acertou 3.");
    } else if (soma == resp && soma2 == resp2 && soma3 == resp3 && soma4 == resp4 && soma5 != resp5){
        printf("Você está muito próximo de acertar todas, capriche um pouco, nessa tentativa você acertou 4.");
    } else if (soma == resp && soma2 == resp2 && soma3 == resp3 && soma4 == resp4 && soma5 == resp5){
        printf("Boa meu garoto(a), você acertou as 5!!!");
    }
} 
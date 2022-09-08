#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{

setlocale(LC_ALL,"Portuguese");

// Declarando as variáveis
int numero;

// Recebendo os valores
printf("Digite o seu número inteiro: ");
scanf("%i", &numero);

// Iniciando a condicional
if (numero % 3 == 0 && numero % 5 != 0){
    printf("\nO seu número é divisível apenas por 3.");
} else if (numero % 5 == 0 && numero % 3 != 0){
    printf("\nO seu número é divisível apenas por 5.");
} else if (numero % 3 == 0 && numero % 5 == 0){
    printf("\nO seu número é dívisivel por 3 e também é divisível por 5.");
} else {
    printf("\nO seu número não é dívisivel por 3 e nem é divisível por 5.");
}
}
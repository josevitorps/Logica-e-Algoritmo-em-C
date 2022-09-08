#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{

setlocale(LC_ALL,"Portuguese");

//Declarando as variáveis
float altura, pesoim, pesoif;
int sexo;

//Recebendo os valores
printf("\nDigite a sua altura: ");
scanf("%f",&altura);
printf("\nDigite o seu sexo, sendo 1 para homem e 2 para mulher: ");
scanf("%i",&sexo);

//Iniciando a condicional

if (sexo != 2){
    pesoim = (72.7 * altura) - 58;
    printf("\nPor ser homem o seu peso ideal é %.1f", pesoim);
}
else{
    pesoif = (62.1 * altura) - 44.7;
    printf("\nPor ser mulher o seu peso ideal é %.1f", pesoif);
}
}
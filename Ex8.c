#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{

setlocale(LC_ALL,"Portuguese");

//Declarando variaveis
float nota1, nota2, nota3, media;

//Recebendo valores
printf("Digite o valor da sua nota do trabalho de laboratório: ");
scanf("%f",&nota1);
printf("\nDigite o valor da sua nota da avaliação semestral: ");
scanf("%f",&nota2);
printf("\nDigite o valor da sua nota do exame final: ");
scanf("%f",&nota3);

//Iniciando a condicional
if ( (nota1 > 0) && (nota1 <= 10) && (nota2 > 0) && (nota2 <= 10) && (nota3 > 0) && (nota3 <= 10) ){
    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5))/10;
}
else{
    printf("\nVocê inseriu uma nota inválida, para que o cálculo de sua média seja feito, insira valores que vão de 1 até 10.");
    return 0;
}

//Limpando a tela
system("cls");

//Exibindo o resultado da condicional

if (media <= 2.9){
    printf("Você está reprovado, pois sua média foi: %.1f", media);
} else if (media >= 3.0 && media <= 4.9){
    printf("Você está de recuperação, pois sua média foi: %.1f", media);
} else {
    printf("Você passou, porque teve uma média excepcional de: %1.f", media);
}
}
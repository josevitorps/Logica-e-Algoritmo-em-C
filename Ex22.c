#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main(){

setlocale(LC_ALL,"Portuguese");

//Declarando variáveis
float peso, altura, imc;

//Recebendo os valores
printf("\nSeja bem vindo a calcudora do Indíce de Massa Corporal do José Vitor!");
printf("\nPrimeiro, peço que digite seu peso, por exemplo ''62.45'': ");
scanf("%f", &peso);
printf("\nAgora preciso que digite sua altura, por exemplo ''1.77'': ");
scanf("%f", &altura);
imc = peso / (altura*altura);

//Limpando a tela
system("cls");

//Iniciando a condicional
if(imc < 18.5){
    printf("Infelizmente você está abaixo do peso, precisa comer mais meu jovem gafanhoto(a).");

} else if(imc >= 18.6 && imc <= 24.9){
    printf("Você está de parabéns, está saudável, VOOOA MEU GAROTO(A)!");

} else if(imc >= 25.0 && imc <= 29.9){
    printf("Você está com excesso de peso, lamento mas a dieta vai ter que começar em.");

} else if(imc >= 30 && imc <= 34.9){
    printf("Tá de brincadeira? Já ta em obesidade grau 1, essa dieta tem que sair pra ontém!!!");

} else if(imc >= 35.0 && imc <= 39.9){
    printf("Que isso meu(minha) jovem, tá brincando com a sua vida pra quê? Você está com obesidade grau 2 que é severa, procura se cuidar!");

} else {
    printf("Se você gosta de viver, é melhor emagrecer, tá com obesidade de grau 3, ou obesidade mórbida!!!!");
}
}
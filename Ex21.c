#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main(){

setlocale(LC_ALL,"Portuguese");

//Declarando variáveis
float tempo, salario, aumento, novo, bonus;

//Recebendo os valores
printf("Digite o seu salário atual: ");
scanf("%f", &salario);
printf("\nDigite o tempo de serviço que você possui na empresa, em anos, por gentilza: ");
scanf("%f", &tempo);

//Limpando a tela
system("cls");

//Iniciando a condicional
if(salario <= 500.00 && tempo < 1 ){
    aumento = salario * 0.25;
    novo = aumento + salario;
    printf("\nO seu novo salário é R$: %0.2f e você não tem direito a bônus.", novo);

} else if (salario <= 1000.00 && tempo >= 1 && tempo <= 3){
    aumento = salario * 0.20;
    novo = salario + aumento;
    printf("\nO seu novo salário é R$: %0.2f e você tem direito a R$ 100.00 de bônus", novo);
    bonus = novo + 100.00;
    printf("\nO seu novo salário com o aumento é R$: %.2f", bonus);

} else if (salario <= 1500.00 && tempo >= 4 && tempo <= 6){
    aumento = salario * 0.15;
    novo = salario + aumento;
    printf("\nO seu novo salário é R$: %0.2f e você tem direito a R$ 200.00 de bônus", novo);
    bonus = novo + 200.00;
    printf("\nO seu novo salário com o aumento é R$: %.2f", bonus);

} else if (salario <= 2000.00 && tempo >= 7 && tempo <= 10){
    aumento = salario * 0.10;
    novo = salario + aumento;
    printf("\nO seu novo salário é R$: %0.2f e você tem direito a R$ 300.00 de bônus", novo);
     bonus = novo + 300.00;
    printf("\nO seu novo salário com o aumento é R$: %.2f", bonus);

} else if (salario > 2000.00 && tempo > 10){
    printf("\nVocê não tem direito a um ajuste, portanto seu salário continua igual. Porém você tem direito a bônus de R$500.00");
    bonus = salario + 500.00;
    printf("\nO seu novo salário com o aumento é R$: %.2f", bonus);
}
}
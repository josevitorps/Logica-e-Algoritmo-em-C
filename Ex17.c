#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    setlocale(LC_ALL,"Portuguese");

// Declarando as variáveis
float a, b, c;

//Recebendo os valores
printf("Digite o primeiro número: ");
scanf("%f", &a);
printf("Digite o segundo número: ");
scanf("%f", &b);
printf("Digite o terceiro número: ");
scanf("%f", &c);

//Limpando a tela para melhor visualização
system("cls");

//Iniciando a condicional
if(a > b && a > c && b > c){
    printf("\nA ordem crescente é: \n1°: %.2f \n2°: %.2f \n3°: %.2f", a, b, c);
} else if (a > b && a > c && c > b ){
    printf("\nA ordem crescente é: \n1°: %.2f \n2°: %.2f \n3°: %.2f", a, c, b);
} else if (b > a && b > c && c > a ){
    printf("\nA ordem crescente é: \n1°: %.2f \n2°: %.2f \n3°: %.2f", b, c, a);
} else if (b > a && b > c && a > c ){
    printf("\nA ordem crescente é: \n1°: %.2f \n2°: %.2f \n3°: %.2f", b, a, c);
} else if (c > a && c > b && a > b){
    printf("\nA ordem crescente é: \n1°: %.2f \n2°: %.2f \n3°: %.2f", c, a, b);
} else if (c > a && c > b && b > a){
    printf("\nA ordem crescente é: \n1°: %.2f \n2°: %.2f \n3°: %.2f", c, b, a);
}
}
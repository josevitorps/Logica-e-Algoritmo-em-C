#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{

setlocale(LC_ALL,"Portuguese");

//Declarando as variáveis
int x;

//Inicializando a estrtura de repetição
for(x=3;x<=10;x++){
    printf("\nO valor da operação y = x+2 é %i", x);
}
}

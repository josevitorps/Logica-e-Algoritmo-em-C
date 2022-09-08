#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main ()
{

setlocale(LC_ALL,"Portuguese");

//Declarando variaveis
  int valor;


//Recebendo valores
  printf ("Digite um valor de 1 a 7: ");
  scanf("%i", &valor);


//Iniciando as condicionais 
  switch (valor)
  {
    case 1 :
    printf ("\nDomingo");
    break;
    
    case 2 :
    printf ("\nSegunda");
    break;
    
    case 3 :
    printf ("\nTerça");
    break;
    
    case 4 :
    printf ("\nQuarta");
    break;
    
    case 5 :
    printf ("\nQuinta");
    break;
    
    case 6 :
    printf ("\nSexta");
    break;
    
    case 7 :
    printf ("\nSabado");
    break;
    
    default :
    printf ("\nValor invalido!");
  }
}
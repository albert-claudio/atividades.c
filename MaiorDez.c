#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");


    float primeiroNumero = 0;


    printf("Escreva um numero at� dez meu nobre: ");
    scanf("%f", &primeiroNumero);

    Exibindo Resultados
    if (primeiroNumero > 10)
    {
    printf("Este numero está maior que dez meu caro! \n");
    }
    else
    {
    printf("Menor que Dez meu nobre! \n");
    }
    

    

        return 0;
    }
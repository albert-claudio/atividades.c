#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");


    float primeiroNumero = 0;


    printf("Escreva um numero atÈ dez meu nobre: ");
    scanf("%f", &primeiroNumero);

    Exibindo Resultados
    if (primeiroNumero > 10)
    {
    printf("Este numero est√° maior que dez meu caro! \n");
    }
    else
    {
    printf("Menor que Dez meu nobre! \n");
    }
    

    

        return 0;
    }
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // inciando a variaveis.
    int idade = 0;
    float peso = 0;
    char sexo;
    char nome [500];
    char sobrenome[500];

    // solicitando dados do usuario
    printf("Digite sua idade: ");
    scanf("%i", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    fflush(stdin); // Limpa o cache de input.

    printf("Digite seu sexo: ");
    scanf("%c", &sexo);

    fflush(stdin); // Limpa o cache de input.

    printf("Informe seu nome: ");
    gets(nome);
    //fgets(nome, 250,stdin);
    //nome[strcspn(nome, "\n")] = 0;

    printf("informe seu sobrenome: ");
    gets(sobrenome);

    //Limpa a Tela (limpa o terminal).
    system("cls || clear"); 

    // Exibindo dados do usuario
    printf("Idade: %d \n", idade);
    printf("Peso: %.2f \n", peso);
    printf("Sexo: %c \n", sexo);
    printf("Nome: %s \n", nome);
    printf("Sobrenome: %s \n", sobrenome);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){ 
    int idade = 20; //inteiro
    float peso = 80.2; //real
    char sexo = 'F';
    char nome [250] = "Marta";

    //int -> números inteiros
    //float -> números reais
    //char -> apenas um caracter

    printf("Idade: %d \n", idade);
    printf("Peso: %.2f \n", peso);
    printf("Sexo: %c \n", sexo);

 
    return 0;
}
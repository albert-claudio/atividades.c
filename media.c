#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //Declarando variáveis
    float primeiraNota;
    float segundaNota;
    float media;

    //Solicitando dados do usuario
    printf("Digite a sua primeira nota: ");
    scanf("%f", &primeiraNota);

    printf("Digite a segunda nota: ");
    scanf("%f", &segundaNota);

    //Calculando a média.
    media = (primeiraNota + segundaNota) / 2;

    //Exibindo dados para o usuario.
    if (media >= 7)
    {
        printf("Aprovado! \n");
    }
    else
    {
        printf("Reprovado \n");
    }
    

    printf("Media: %.2f", media);

    return 0;
}
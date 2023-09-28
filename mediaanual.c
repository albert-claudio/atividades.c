#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome[250];
    float nota=0;
    float soma=0, media=0;
    int i=0;
    printf("Digite seu nome: ");
    gets(nome);

   for(i=0;i<3;i++){
        printf("nota: ");
        scanf("%f", &nota);
        while (nota >10)
        {
            printf("nota: ");
            scanf("%f", &nota);
        }
        soma += nota;
   }
   media = soma/i;


    
    if (media >= 7)
    {
        printf("passou de parabéns");
    }
    else
    {
        printf("Perdeu Infelizmente\n");
        float nota_recu = 0;
        printf("nota: ");
        scanf("%f", &nota_recu);
        while (nota_recu > 10)
        {
            printf("error\n");
            printf("nota: ");
            scanf("%f", &nota_recu);
        }
        if (nota_recu > 5)
        {
            printf("passou na recu, seu merda");
        }
        else
        {
            printf("seu merda, nao passou nem na recu");
        }
    }

    return 0;
}
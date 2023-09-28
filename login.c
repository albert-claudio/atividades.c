#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    char loginSalvo[250] = "Marta";
    char senhaSalva[200] = "senai123";
    char login[200];
    char senha[200];

    printf("Digite seu login: ");
    gets(login);

    printf("Digite sua senha: ");
    gets(senha);

    //Strcmp
    if (strcmp(login, loginSalvo) == 0 && strcmp(senha, senhaSalva) == 0)  {
        printf("Bem-vindo");
    } else {
        printf("Acesso negado");
    }

    return 0;
}
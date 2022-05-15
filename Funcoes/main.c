#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    char nome[61];
    int operacao, v1, v2, resultado;

    //Get name
    printf("Seu nome eh: \n>>>");
    gets(nome);

    printf("Qual operacao voce deseja fazer: \n1: soma\n2: multiplicacao\n>>>");
    scanf("%d", &operacao);

    //Number colect
    printf("Digite o primeiro numero ");
    scanf("%d", &v1);
    printf("Digite o segundo numero ");
    scanf("%d", &v2);

    //Result with ternary operator
    resultado = (operacao == 1)? sum(v1, v2) : multi(v1, v2);
    printf("\n\n%s, o resultado da operacao eh: %i", nome,resultado);
    printf("\n\n\n\n");
    system("pause");
    system("cls");

    return 0;
}

//Doing the sum in a different "function"
int sum(int n1, int n2){
    int resultado = n1 + n2;
    return (resultado);
}

//Doing the multiplication in a different "function"
int multi(int n1, int n2){
    int resultado = n1 * n2;
    return (resultado);
}

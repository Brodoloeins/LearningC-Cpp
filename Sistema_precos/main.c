#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 1;
    float valorTotal = 0;

    while(x == 1){
        float produtos[3][2] = {
            {
                1, 35.99
            },
            {
                2, 61.99
            },
            {
                3, 57.29
            }
        };

        int produto;

        printf("Lista de produtos: \n");
        for(int i = 0; i < 3; i++){
            printf("\t Produto: %.0f", produtos[i][0]);
            printf("\t Preco: %.2f", produtos[i][1]);
            printf("\n");
        }
        printf("Digite o produto que deseja comprar: >>>");
        scanf("%i", &produto);

        printf("O preco do produto eh: %.2f", produtos[produto-1][1]);

        valorTotal += produtos[produto-1][1];

        printf("\n Deseja comprar mais alguma coisa?");
        printf("\n Digite 1 para Sim e 0 para Nao >>>");
        scanf("%i", &x);
        if(x == 1){
            system("cls");
        }
    }

    system("pause");
    system("cls");

    int boolean;

    printf("Voce deseja pagar agora? ");
    printf("\n Digite 1 para Sim e 0 para Nao >>>");
    scanf("%i", &boolean);
    if(boolean == 1){
        printf("O valor total da sua compra eh: %.2f", valorTotal);
    }else{
        printf("Voce nao pode levar o produto se nao pagar");
    }
};

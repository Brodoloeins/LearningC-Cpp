#include <stdio.h>
#include <stdlib.h>

int main(){
    for(int i = 1; i < 2; i++){
        int select;
        printf("Qual bases voce deseja ver?");
        printf("\nDigite 2 para binario \nDigite 8 para octal \nDigite 16 para hexadecimal");
        printf("\n>>> ");
        scanf("%d", &select);

        system("cls");

        if(select == 2){
            int numbers[31];
            numbers[0] = 1;
            numbers[1] = 2;
            printf("\n elevado a 0");
            printf("\t 1");
            printf("\n elevado a 1");
            printf("\t 2");
            for(int x = 2; x < 31; x++){
                numbers[x] = numbers[x-1] * numbers[1];
                printf("\n elevado a %d", x);
                printf("\t %d", numbers[x]);
            }
        }else if(select == 8){
            int numbers[11];
            numbers[0] = 1;
            numbers[1] = 8;
            printf("\n elevado a 0");
            printf("\t 1");
            printf("\n elevado a 1");
            printf("\t 8");
            for(int x = 2; x < 11; x++){
                numbers[x] = numbers[x-1] * numbers[1];
                printf("\n elevado a %d", x);
                printf("\t %d", numbers[x]);
            }
        }else if(select == 16){
            int numbers[8];
            numbers[0] = 1;
            numbers[1] = 16;
            printf("\n elevado a 0");
            printf("\t 1");
            printf("\n elevado a 1");
            printf("\t 16");
            for(int x = 2; x < 8; x++){
                numbers[x] = numbers[x-1] * numbers[1];
                printf("\n elevado a %d", x);
                printf("\t %d", numbers[x]);
            }
        }
        printf("\n Voce deseja ver denovo?, 1 para sim e 2 para nao");
        scanf("%d", &i);
    };
    return 0;
}

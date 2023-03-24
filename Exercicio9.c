#include<stdio.h>

int main(){
    int number;

    printf("Enter a number: \n");
    scanf("%i", &number);

    if( number >=100 && number<=200){
        printf("Você digitou um número entre 100 e 200! ");

    }else {
        printf("Você digitou um numero fora da faixa!");
    }
}
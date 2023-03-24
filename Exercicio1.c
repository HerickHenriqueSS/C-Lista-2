#include<stdio.h>

int main(){
    int number;
    float result;

    printf("Enter a number: \n");
    scanf("%i", &number);

    result = number * 39.3701;

    printf("Result: %.2f", result);
}
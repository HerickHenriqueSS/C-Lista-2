#include<stdio.h>

int main(){
    float Celsius;
    float result;

    printf("Insert to temperute in Celsius: \n");
    scanf("%f", &Celsius);

    result = Celsius *1.8 + 32;

    printf("result the Celsius to Farenheit: %.2f \n", result);
}
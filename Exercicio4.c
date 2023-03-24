#include<stdio.h>

int main (){
    float farenheit;
    float result;

    printf("Insert to temperute in Farenheit: \n");
    scanf("%f", &farenheit);

    result = (farenheit -32) * 5/9;

    printf("Result the Farenheit to Celsius: %f ", result);
}
#include<stdio.h>

int main(){

    int numberOne;
    int numberTwo;
    float numberReal;
    float resultOne;
    float resultTwo;
    float resultThree;


    printf("Insert two numbers: \n");
    scanf("%i %i", &numberOne, &numberTwo);

    printf("Insert one numbers real: \n");
    scanf("%f", &numberReal);

    resultOne = (numberOne *2) + (numberTwo/2);
    
    printf("Double the Firt Number plus half the Second Number: %f \n", resultOne);

    resultTwo = (numberOne * 3) + numberReal;

    printf("Sum of three times the Firt Number plus Third Number: %f \n", resultTwo);
    
    resultThree = (numberReal * numberReal * numberReal) ;

    printf("Triple the Third Number: %f \n", resultThree);

    

}
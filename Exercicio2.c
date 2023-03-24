#include<stdio.h>

int main(){
    
    float raio = 5;
    float perimeter;
    float area;
    float pi = 3.14;
    
    printf("Insert a number the Raio: \n");
    scanf("%f", &raio);

    //Calculation the Perimeter
    perimeter = 2 * pi * raio;

    //Calculation the area
    area = pi * (raio * raio);

    printf("Raio: %.2f \n", raio);
    printf("Perimeter: %.2f \n", perimeter);
    printf("Area: %.2f \n", area);
    
}
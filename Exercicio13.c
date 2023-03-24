#include <stdio.h>

int main() {
    int class, region, weapon;
    char* nameClass;
    char* nameRegion;
    char* nameWeapon;
    
    printf("Escolha a sua classe:\n");
    printf("1 - Guerreiro\n");
    printf("2 - Mago\n");
    printf("3 - Druida\n");
    printf("4 - Sacerdote\n");
    scanf("%d", &class);
    
    printf("Escolha a sua regiao:\n");
    printf("1 - Azeroth\n");
    printf("2 - Azkaban\n");
    printf("3 - Aurora\n");
    printf("4 - Brightwood\n");
    scanf("%d", &region);
    
    printf("Escolha a sua arma:\n");
    printf("1 - Machado cego\n");
    printf("2 - Picareta invertida\n");
    printf("3 - Adaga sem ponta\n");
    printf("4 - Corrente sem elo\n");
    scanf("%d", &weapon);
    
    switch(class) {
        case 1:
            nameClass ="Guerreiro";
            break;
        case 2:
            nameClass = "Mago";
            break;
        case 3:
            nameClass = "Druida";
            break;
        case 4:
            nameClass = "Sacerdote";
            break;
        default:
            printf("classe invalida! Digite novamente \n");
            break;
    }

    switch(region) {
        case 1:
            nameRegion = "Azeroth";
            break;
        case 2:
            nameRegion = "Azkaban";
            break;
        case 3:
            nameRegion = "Aurora";
            break;
        case 4:
           nameRegion = "Brightwood";
            break;
        default:
            printf("regiao invalida! Digite novamente \n");
            break;
    }

    switch(weapon) {
        case 1:
            nameWeapon = "Machado cego";
            break;
        case 2:
            nameWeapon = "Picareta invertida";
            break;
        case 3:
            nameWeapon = "Adaga sem ponta";
            break;
        case 4:
           nameWeapon = "Corrente sem elo";
            break;
        default:
            printf("Arma invalida! Digite novamente \n");
            break;
    }

    printf("Voce agora e um %s da regiao de %s armado com um %s.", nameClass, nameRegion, nameWeapon);

}    
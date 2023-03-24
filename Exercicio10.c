#include<stdio.h>

int main(){
    int life;
    int attack;
    int defence;
    int level;

    printf("Enter a life points: \n");
    scanf("%i", &life);

    printf("Enter a attack points: \n");
    scanf("%i", &attack);

    printf("Enter a defence points: \n");
    scanf("%i", &defence);

    level = (life+attack+defence)/3;

    if( level >=0 && level<=25){
        printf("You are at the Newbie level!");

    }else if ( level >=26 && level<=50){
            printf("You ate at the Mage level!");
            
        }else if( level >=51 && level<=75){
                printf("You are at the Supreme Mage level!");

            }else if ( level >=76 && level<=100){
                printf("You are at the Lord of Spells level!");
                
            }
}
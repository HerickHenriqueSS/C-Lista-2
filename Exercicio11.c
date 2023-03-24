#include<stdio.h>

void main() { 

    int victoryOne, defeatOne, empateA, pontosA;
    int vitoriaB, derrotaB, empateB, pontosB;

    printf("Digite a quantidade de vitorias da equipe ALFA:\n ");
    scanf("%d", &victoryOne);

    printf("Digite a quantidade de empates da equipe ALFA:\n ");
    scanf("%d", &empateA);

    printf("Digite a quantidade de derrotas da equipe ALFA:\n ");
    scanf("%d", &defeatOne);

    printf("Digite a quantidade de vitorias da equipe BETA:\n ");
    scanf("%d", &vitoriaB);

    printf("Digite a quantidade de empates da equipe BETA:\n ");
    scanf("%d", &empateB);

    printf("Digite a quantidade de derrotas da equipe BETA:\n ");
    scanf("%d", &derrotaB);

    pontosA = victoryOne * 3;
    pontosA = pontosA + victoryOne; 

    pontosB = vitoriaB * 3;
    pontosB = pontosB + vitoriaB; 

    printf("A Equipe ALFA tem %d vitorias %d derrotas e %d empates e uma pontuacao total de %d\n ", victoryOne, defeatOne, empateA, pontosA);

    printf("A Equipe BETA tem %d vitorias %d derrotas e %d empates e uma pontuacao total de %d\n ", vitoriaB, derrotaB, empateB, pontosB);

    return 0;
}
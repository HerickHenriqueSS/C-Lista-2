#include<stdio.h>

void main() { 

    int wins, loses, drawns;
    float totalGames, scoreWins, , scoreDrawns;

    printf("Enter the number of wins for team Alpha:\n ");
    scanf("%d", &wins);

    printf("Enter the number of loses for team Alpha:\n ");
    scanf("%d", &loses);

    printf("ENter the number of drawns for team Alpha:\n ");
    scanf("%d", &drawns);


    totalGames = wins + drawns + loses;
    scoreWins = (wins / totalGames) * 100;
     = (loses / totalGames) * 100;
    scoreDrawns = (drawns / totalGames) * 100;
   
   
    printf("The Alpha team has:\n %d wins with percentage of %.2f% \n %d defeats with percentage of %.2f % \n %d ties with percentage of %2.f\n ", wins, scoreWins, loses, , drawns, scoreDrawns);

    return 0;
}
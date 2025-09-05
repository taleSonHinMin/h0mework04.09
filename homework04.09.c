#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int count, userChoice;
    printf("GLASS BRIDGE\n\n-------------------------\n");
    printf("Cross a bridge of 10 pairs of glass panels, stepping only on the strong tempered glass and avoiding the regular glass, \nwhich then breaks, leading to the death of the player. \nParticipants have to guess which of the two panels in each pair is strong, \nsince the wrong choice ends in death.\n");
    printf("-------------------------\n\n"); printf("If you want to jump to the first panel - type 1, otherwise - type 2\n");
    _sleep(1000);
    int randomNum = 1 + rand()%2;
    while (count < 11) {
        printf("        [ ] || [ ] \n");
        printf("Choose which panel to jump to: ");
        scanf_s("%d", &userChoice);
        if (userChoice == randomNum) {
            printf("Great, you jumped on tempered glass!\n");
            count+=1;
            randomNum = 1 + rand()%2;
            _sleep(1000);
        } else {
            printf("YOU DIED!\n");
            count=0;
            randomNum = 1 + rand()%2;
            _sleep(1000);
        }
    }
    printf("\n\nCONGRATULATIONS! You completed the game");
    return 0;
}

    

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user, computer;

    srand(time(0));

    printf("===== Rock Paper Scissors Game =====\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");

    printf("Enter your choice (1-3): ");
    scanf("%d", &user);

    if (user < 1 || user > 3) {
        printf("Invalid choice!\n");
        return 0;
    }

    computer = rand() % 3 + 1;

    printf("\nYou chose: ");
    if (user == 1)
        printf("Rock\n");
    else if (user == 2)
        printf("Paper\n");
    else
        printf("Scissors\n");

    printf("Computer chose: ");
    if (computer == 1)
        printf("Rock\n");
    else if (computer == 2)
        printf("Paper\n");
    else
        printf("Scissors\n");

    if (user == computer) {
        printf("\nResult: It's a Draw!\n");
    }
    else if ((user == 1 && computer == 3) ||
             (user == 2 && computer == 1) ||
             (user == 3 && computer == 2)) {
        printf("\n You Win!\n");
    }
    else {
        printf("\n Computer Wins!\n");
    }

    return 0;
}
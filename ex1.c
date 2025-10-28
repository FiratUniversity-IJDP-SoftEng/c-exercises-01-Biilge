#include <stdio.h>

int main() {
    int number;

    printf("\nGuess one of the numbers (1), (2), (3), (4) or (5): ");
    scanf("%d", &number);

    if (number == 3) {
        printf("\nCongratulations, you guessed correctly!\n");
    }
    else if (number == 1 || number == 2 || number == 4 || number == 5) {
        printf("\nSorry, that's wrong. Try again.\n");
        scanf("%d", &number);

        if (number == 3)
            printf("\nCongratulations, you guessed correctly!\n");
        else
            printf("\nSorry, still wrong.\n");
    }
    else {
        printf("\n%d is not a valid option.\n", number);
    }

    return 0;
}



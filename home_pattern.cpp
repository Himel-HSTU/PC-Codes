#include <stdio.h>

int main() {
    int i, j;

    // Print the roof
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print the walls and door
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 9; j++) {
            if (j == 0 || j == 8 || (i >= 3 && j == 4)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

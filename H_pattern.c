#include <stdio.h>

int main() {
    int i, j;

    // Define the height and width of the letter "H"
    int height = 7;
    int width = 5;

    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            // Print '*' for the vertical lines and the middle horizontal line
            if (j == 0 || j == width - 1 || i == height / 2) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
#define NUM_VARS 4 
void generateBooleanExpression(int kmap[4][4]) {
    char vars[NUM_VARS] = {'A', 'B', 'C', 'D'};

    printf("Simplified Boolean Expression: ");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (kmap[i][j] == 1 || kmap[i][j] == -1) { 
                if (i == 0) {
                    if (j == 0) {
                        printf("A'B'C'D'");
                    } else if (j == 1) {
                        printf("A'B'C'D");
                    } else if (j == 2) {
                        printf("A'BC'D'");
                    } else {
                        printf("A'BC'D");
                    }
                } else if (i == 1) {
                    if (j == 0) {
                        printf("AB'C'D'");
                    } else if (j == 1) {
                        printf("AB'C'D");
                    } else if (j == 2) {
                        printf("ABC'D'");
                    } else {
                        printf("ABC'D");
                    }
                } else if (i == 2) {
                    if (j == 0) {
                        printf("A'B'C'D'");
                    } else if (j == 1) {
                        printf("A'B'C'D");
                    } else if (j == 2) {
                        printf("A'BC'D'");
                    } else {
                        printf("A'BC'D");
                    }
                } else if (i == 3) {
                    if (j == 0) {
                        printf("AB'C'D'");
                    } else if (j == 1) {
                        printf("AB'C'D");
                    } else if (j == 2) {
                        printf("ABC'D'");
                    } else {
                        printf("ABC'D");
                    }
                }
                if (i != 3 || j != 3) {
                    printf(" + ");
                }
            }
        }
    }
    printf("\n");
}

void main() {
    int kmap[4][4];
    printf("Enter the K-map values (0, 1, or X for don't care) for a 4-variable K-map:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            char input;
            printf("Enter value for cell [%d][%d] (either 0, 1, or X for don't care): ", i, j);
            scanf(" %c", &input); 
            if (input == '1') {
                kmap[i][j] = 1;
            } else if (input == '0') {
                kmap[i][j] = 0;
            } else if (input == 'X' || input == 'x') {
                kmap[i][j] = -1;  
            } else {
                printf("Invalid input. Please enter 0, 1, or X.\n");
                j--; 
            }
        }
    }
    generateBooleanExpression(kmap);
}

#include "sem3_3.h"

void count_digits(int digits_count[]) {
    int c;
    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            digits_count[c - '0']++;
        }
        c = getchar();
    }
}
void print_horizontal_histogram(int digits_count[]) {
    for (int i = 0; i < 10; i++) {
        printf("%d: ", i);
        for (int j = 0; j < digits_count[i]; j++) {
            printf("#");
        }
        printf("\n");
    }
}

void print_vertical_histogram(int digits_count[]) {
    int max_count = 0;
    for (int i = 0; i < 10; i++) {
        if (digits_count[i] > max_count) {
            max_count = digits_count[i];
        }
    }

    for (int row = max_count; row > 0; row--) {
        for (int col = 0; col < 10; col++) {
            if (digits_count[col] >= row) {
                printf("#\t");
            } else {
                printf("\t");
            }
        }
        printf("\n");
    }

    for (int col = 0; col < 10; col++) {
        printf("#\t");
    }
    printf("\n");

    for (int col = 0; col < 10; col++) {
        printf("%d\t", col);
    }
    printf("\n");
}


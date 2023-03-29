#include "sem3_3.h"

#define MAX_DIGITS 10   

int get_num_digits(char input[]) {
    int num_digits = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= '0' && input[i] <= '9') {
            num_digits++;
        }
    }
    return num_digits;
}

void fill_digit_frequencies(char input[], int frequencies[]) {
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= '0' && input[i] <= '9') {
            int digit = input[i] - '0';
            frequencies[digit]++;
        }
    }
}

void print_horizontal_histogram(int frequencies[]) {
    printf("Horizontal Histogram:\n");
    for (int i = 0; i < MAX_DIGITS; i++) {
        printf("%d: ", i);
        for (int j = 0; j < frequencies[i]; j++) {
            putchar('#');
        }
        putchar('\n');
    }
}

void print_vertical_histogram(int frequencies[]) {
    printf("Vertical Histogram:\n");
    int max_frequency = 0;
    for (int i = 0; i < MAX_DIGITS; i++) {
        if (frequencies[i] > max_frequency) {
            max_frequency = frequencies[i];
        }
    }
    for (int i = max_frequency; i > 0; i--) {
        for (int j = 0; j < MAX_DIGITS; j++) {
            if (frequencies[j] >= i) {
                printf("#\t");
            } else {
                printf("\t");
            }
        }
        printf("\n");
    }
    for (int i = 0; i < MAX_DIGITS; i++) {
        printf("%d\t", i);
    }
}



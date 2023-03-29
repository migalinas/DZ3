#include <stdio.h>
#include "sem3_3.h"
#include "sem3_3_func.c"

int main() {
    char input[1000];
    printf("Enter some text (letters and digits only): ");
    fgets(input, 1000, stdin);

    int num_digits = get_num_digits(input);
    int frequencies[MAX_DIGITS] = {0};
    fill_digit_frequencies(input, frequencies);

    print_horizontal_histogram(frequencies);
    print_vertical_histogram(frequencies);

    return 0;
}

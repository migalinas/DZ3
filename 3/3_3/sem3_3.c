#include <stdio.h>
#include "sem3_3.h"
#include "sem3_3_func.c"

int main() {
    int digits_count[10] = {0};
    count_digits(digits_count);

    printf("Horizontal histogram:\n");
    print_horizontal_histogram(digits_count);

    printf("\nVertical histogram:\n");
    print_vertical_histogram(digits_count);

    return 0;
}
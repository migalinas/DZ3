#include <stdio.h>
#include "sem3_2_added.h"
#include "sem3_2_func_added.c"

int main() {
    char s1[100], s2[100];
    int i = 0;

    printf("Enter s1: ");
    while ((s1[i] = getchar()) != '\n' && i < 99) {
        i++;
    }
    s1[i] = '\0';

    i = 0;
    printf("Enter s2: ");
    while ((s2[i] = getchar()) != '\n' && i < 99) {
        i++;
    }
    s2[i] = '\0';

    delete_string(s1, s2);

    printf("Result: %s\n", s1);

    return 0;
}

#include <stdio.h>
#include "sem3_1.h"
#include "sem3_1_func.c"

int main() {
    char s1[100], s2[100];
    int i;
    printf("Enter s1: ");
    i = 0;
    while ((s1[i] = getchar()) != '\n') {
        i++;
    }
    s1[i] = '\0';
    printf("Enter s2: ");
    i = 0;
    while ((s2[i] = getchar()) != '\n') {
        i++;
    }
    s2[i] = '\0';
    removeChars(s1, s2);
    printf("Result: %s\n", s1);
    return 0;
}

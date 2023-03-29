#include <stdio.h>
#include "sem3_2_added.h"
#include "sem3_2_func_added.c"

int main() {
    char s1[100], s2[100];

    printf("Enter s1: ");
    scanf("%s", s1);

    printf("Enter s2: ");
    scanf("%s", s2);

    delete_string(s1, s2);

    printf("Result: %s\n", s1);

    return 0;
}

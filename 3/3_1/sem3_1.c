#include <stdio.h>
#include "sem3_1.h"
#include "sem3_1_func.c"
#define STR_MAXLEN 1000



int main() {
    string s1 = str_read('\n');
    string s2 = str_fill_a_z(s1);
    printf("\"%s\"\n", s2.data);
    return 0;
}

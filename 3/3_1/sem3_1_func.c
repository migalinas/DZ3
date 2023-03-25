#include "sem3_1.h"

void removeChars(char s1[], char s2[]) {
    int i, j, k;
    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                for (k = i; s1[k] != '\0'; k++) {
                    s1[k] = s1[k+1];
                }
                i--;
                break;
            }
        }
    }
}
#include "sem3_2_added.h"

void delete_string(char *s1, char *s2) {
    int i, j, k;
    for (i = 0; s1[i] != '\0'; i++) {
        j = 0;
        while (s1[i+j] == s2[j] && s2[j] != '\0') {
            j++;
        }
        if (s2[j] == '\0') {
            // found substring, delete it
            for (k = i; s1[k+j] != '\0'; k++) {
                s1[k] = s1[k+j];
            }
            s1[k] = '\0';
            i--;
        }
    }
}
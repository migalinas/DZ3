#include <stdio.h>
#include "sem3_1.h"

string str_new() {
    string s = { .len = 0 };
    s.data[0] = '\0';
    return s;
}

string str_read(char end) {
    string s = str_new();
    char c;
    while ((c = getchar()) != end && c != EOF && s.len < STR_MAXLEN) {
        s.data[s.len++] = c;
    }
    s.data[s.len] = '\0';
    return s;
}

int charGroup(char c) {
    if (c >= '!' && c <= '~') return 0;
    return -1;
}

string str_fill_a_z(string old) {
    string s = str_new();
    int i = 0;
    while (i < old.len) {
        if (old.data[i] == old.data[i + 1] && old.data[i + 1] == old.data[i + 2]){
            s.data[s.len++] = old.data[i++];
        }
        else {
            if (charGroup(old.data[i]) > -1 &&
                old.data[i+1] == '-' &&
                charGroup(old.data[i]) == charGroup(old.data[i+2]) ) {
            char z;
            if (old.data[i] <= old.data[i+2]) {
                for (z = old.data[i]; z <= old.data[i+2]; z++) {
                    s.data[s.len++] = z;
                }
            } else {
                for (z = old.data[i]; z >= old.data[i+2]; z--) {
                    s.data[s.len++] = z;
                }
            }
            i += 3;
        } else if (old.data[i - 1] != '\0' && old.data[i + 1] != '\0' && old.data[i] == '-') {
            s.data[s.len--] = old.data[i--];
        } else {
            s.data[s.len++] = old.data[i++];
        }
        }
    }
    s.data[s.len] = '\0';
    return s;
}

#ifndef SEM3_1_H
#define SEM3_1_H

#define STR_MAXLEN 1000

typedef struct {
    char data[STR_MAXLEN];
    int len;
} string;

string str_new();
string str_read(char end);
int charGroup(char c);
string str_fill_a_z(string old);

#endif

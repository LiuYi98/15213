#include <stdio.h>


int main() {
    unsigned int blank, tab, newline;
    blank = 0, tab = 0, newline = 0;
    int c;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            blank++;
        } else if (c == '\t') {
            tab++;
        } else if (c == '\n') {
            newline++;
        }
    }

    printf("blank = %d\ntab = %d\nnewline - %d\n", blank, tab, newline);
    
}
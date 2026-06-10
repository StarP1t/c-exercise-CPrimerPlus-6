#include <stdio.h>

int main(void)
{
    const char STOP = '#';
    char ch, prev;
    int n_space = 0, n_lines = 0, n_chars = 0;

    printf("Input the text:(print %c to terminate)\n", STOP);

    prev = '\n';
    while((ch = getchar()) != STOP){
        /*if (ch == '\n')
            n_lines++;
        else if (ch == ' ')
            n_space++;
        else
            n_chars++;*/

        switch(ch)
        {
            case '\n' : n_lines++; break;
            case ' ' : n_space++; break;
            default:  n_chars++;
        }
        prev = ch;
    }
    if (prev != '\n')
        n_lines++;

    printf("The Text has %d space(s), %d line(s), and %d character(s).",
            n_space, n_lines, n_chars);

    return 0;
}
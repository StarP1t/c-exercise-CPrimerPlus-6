#include <stdio.h>
#include <ctype.h>

int main(void)
{
    const char STOP = '#';
    char ch, prev = '\n';
    int count = 0;

    printf("Input the text to count 'ei':\n");

    while ((ch = getchar()) != STOP){
        if (prev == 'e' && ch == 'i')
            count++;
        prev = ch;
    }

    printf("%dx'ei' in the text.", count);

    return 0;
}
#include <stdio.h>
#include <ctype.h>
char get_first(void);

int main(void)
{
    char res;
    printf("Input test text:\n");
    res = get_first();
    printf("The first character is: %c", res);

    return 0;
}

char get_first(void)
{
    int ch;

    while (isspace(ch = getchar()) && ch != EOF)
        ;
    
    return (char)ch;
}
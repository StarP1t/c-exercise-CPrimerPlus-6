#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
    char ch;
    int i, j;

    printf("Please input the character: ");
    scanf("%c", &ch);
    printf("\nLines: ");
    scanf("%d", &j);
    printf("Column: ");
    scanf("%d", &i);
    
    printf("Result:\n");
    chline(ch, i, j);
    printf("Done.");

    return 0;
}

void chline(char ch, int i, int j)
{
    for (int count_1 = 1; count_1 <= i; count_1++)
    {
        for (int count_2 = 1; count_2 <= j; count_2++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}
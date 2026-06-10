#include <stdio.h>

int M2H(int min);

const int M_TO_H = 60;

int main(void)
{
    int min;

    printf("Enter a interger time in minute:");
    scanf("%d", &min);

    while (min > 0)
    {
        printf("The time is: %d hour(s) %d min.\n", M2H(min), min % M_TO_H);
        printf("Next:");
        scanf("%d", &min);
    }
    printf("Done");

    return 0;
}

int M2H(int min)
{
    return min / M_TO_H;
}
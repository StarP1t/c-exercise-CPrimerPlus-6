#include <stdio.h>

void three_numbers(double * num1, double * num2, double * num3);

// Driver
int main(void)
{
    double num1 = 3.123;
    double num2 = 5672;
    double num3 = -123.2;

    printf("Original numbers:\n");
    printf("No.1: %g, No.2: %g, No.3: %g.\n", num1, num2, num3);
    three_numbers(&num1, &num2, &num3);
    printf("Current numbers:\n");
    printf("No.1: %g, No.2: %g, No.3: %g.\n", num1, num2, num3);

    return 0;
}

void three_numbers(double * num1, double * num2, double * num3)
{
    double big, middle, small;
    int score1 = 0, score2 = 0, score3 = 0;

    *num1 < *num2 ? score2++ : score1++;
    *num1 < *num3 ? score3++ : score1++;
    *num2 < *num3 ? score3++ : score2++;

    switch (score1)
    {
    case 0: small = *num1; break;
    case 1: middle = *num1; break;
    case 2: big = *num1; break;
    }
    switch (score2)
    {
    case 0: small = *num2; break;
    case 1: middle = *num2; break;
    case 2: big = *num2; break;
    }
    switch (score3)
    {
    case 0: small = *num3; break;
    case 1: middle = *num3; break;
    case 2: big = *num3; break;
    }

    *num1 = big;
    *num2 = middle;
    *num3 = small;
}
#include <stdio.h>

void to_base_n(unsigned long n, int b);
 
int main(void)
{
    unsigned long number;
    int base;

    printf("Enter 1 positive integer and 1 base integer (2~16)\n");
    printf("to calculate the equivalent x-base number ");
    printf("(q to quit):\n");

    while (scanf("%lu%d", &number, &base) == 2)
    {
        printf("Base %d equivalent: ", base);
        to_base_n(number, base);
        putchar('\n');
        printf("Enter an integer and a base integer (2~16) ");
        printf("to calculate the equivalent x-base number ");
        printf("(q to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

void to_base_n(unsigned long n, int b)
{
    int r;

    r = n % b;
    if (n >= b)
        to_base_n(n / b, b);
    
    switch (r)
    {
    case 0: putchar('0'); break;
    case 1: putchar('1'); break;
    case 2: putchar('2'); break;
    case 3: putchar('3'); break;
    case 4: putchar('4'); break;
    case 5: putchar('5'); break;
    case 6: putchar('6'); break;
    case 7: putchar('7'); break;
    case 8: putchar('8'); break;
    case 9: putchar('9'); break;
    case 10: putchar('A'); break;
    case 11: putchar('B'); break;
    case 12: putchar('C'); break;
    case 13: putchar('D'); break;
    case 14: putchar('E'); break;
    case 15: putchar('F'); break;
    }
    
    return;
}
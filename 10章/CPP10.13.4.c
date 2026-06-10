#include <stdio.h>
#define COL 5

int max(double ar[], int n);

int main(void)
{
    int i;

    double value[COL] = {1.2, 1.2, 6.5, 13.2, 2.1};
    i = max(value, COL);
    printf("The max number is %d.\n", i);

    return 0;
}

int max(double ar[], int n)
{
    double max;
    int i;
    int count = 0;

    for (i = 1, max = ar[0]; i < n; i++)
        if (ar[i] > max)
        {
            max = ar[i];
            count = i;
        }
    
    return count;
}
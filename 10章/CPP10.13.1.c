#include <stdio.h>
#define MONTHS 12
#define YEARS 5

void year_sum(const float ar[][MONTHS], int r);
void month_avg(const float ar[][MONTHS], int c);

int main(void)
{
    const float rain[YEARS][MONTHS] =
    {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 5.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };
    
    printf(" YEAR    RAINFALL  (inches)\n");
    for (int i = 0; i < YEARS; i++)
        year_sum(rain, i);
    
    printf("\n MONTHLY AVERAGES: (inches)\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug");
    printf("  Sep  Oct  Nov  Dec\n");
    for (int i = 0; i < MONTHS; i++)
        month_avg(rain, i);

    return 0;
}

void year_sum(const float ar[][MONTHS], int r)
{
    float sum = 0.0;

    for (int i = 0; i < MONTHS ; i++)
        sum += ar[r][i];
    printf("%5d %10.1f\n", 2010 + r, sum);
}

void month_avg(const float ar[][MONTHS], int c)
{
    float sum = 0.0;
    for (int i = 0; i < YEARS; i++)
        sum += ar[i][c];
    printf("%4.1f ", sum / YEARS);
}
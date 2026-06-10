#include <stdio.h>

double power_rec(double n, int p);

int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the integer power to");
    printf(" which the number will be raised.\n");
    printf("Enter q to quit.\n");

    while (scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power_rec(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter the next pair of numbers or q to quit.\n");
    }
    printf("Done.");

    return 0;
}

double power_rec(double n, int p)
{
    double pow = 1;
    int i;

    // 0底数判断
    if (n == 0 && p == 0)
    {
        printf("0^0 is an undefined result.\n");
        return pow;
    }
    else if (n == 0)
    {
        return 0;
    }

    // 正负0次判断
    if (p > 0)
    {
        if (p == 1)
            return n;
            
        pow *= n;
        pow *= power_rec(pow, p - 1);
    }
    else if (p < 0)
    {
        if (p == -1)
            return 1 / n;

        pow /= n;
        pow /= power_rec(pow, p + 1);
    }

    return pow;
}
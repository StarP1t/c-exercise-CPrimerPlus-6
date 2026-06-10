#include <stdio.h>
#define COL 6

void rev_sort(double ar[], int n);

int main(void)
{
    double value[COL] = {3.2, 13.3, 234, 5, 0, -4.2};

    for (int i = 0; i < COL; i++)
        printf("%g ", value[i]);
    putchar('\n');

    rev_sort(value, COL);

    for (int i = 0; i < COL; i++)
        printf("%g ", value[i]);
    putchar('\n');
}

void rev_sort(double ar[], int n)
{
    int rank[n];
    double temp[n];

    // VLA初始化
    for (int count = 0; count < n; count++)
        rank[count] = 0;

    // 判断数值权
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (ar[i] < ar[j] && i != j)
                rank[i] += 1;
    }

    // rank数组检查
    // for (int i = 0; i < n; i++)
    //     printf("%d ", rank[i]);
    // putchar('\n');

    // 数组复制
    for (int i = 0; i < n; i++)
        temp[rank[i]] = ar[i];
    for (int i = 0; i < n; i++)
        ar[i] = temp[i];
}
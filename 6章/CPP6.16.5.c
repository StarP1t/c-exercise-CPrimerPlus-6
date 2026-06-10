#include <stdio.h>
void blanks(int n);

int main(void)
{
    char input, middle;
    int height, length, blank;

    printf("Please type a uppercase character:");
    scanf("%c", &input);

    height = (input - 'A') + 1;
    length = (input - 'A') * 2 + 1;

    for (int count = 1; count <= height; count++){
        blank = (length - (count * 2 - 1)) / 2;

        blanks(blank);

        for (int i = 'A'; i < count + 'A'; i++){ //前半段+中值
            printf("%c", i);
            middle = i;
        }

        for (int i = middle - 1; i >= 'A'; i--){ //后半段
            printf("%c", i);
        }

        blanks(blank);
        printf("\n");  
    }

    return 0;
}

void blanks(int n)
{
    for (int i = 0; i < n; i++){
        printf(" ");
    }
}
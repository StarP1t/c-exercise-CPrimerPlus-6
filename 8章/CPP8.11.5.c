#include <stdio.h>
void buffer_clear(void);

int main(void)
{
    char choice;
    int min = 0;
    int max = 100;
    int guess = 50;
    int sum;

    printf("Pick an integer from 1 to 100. I will try to guess");
    printf("it.\nRespond with a y if my guess is right and with ");
    printf("a b if it's big, a s if it's small, and q to quit.\n");
    printf("Is your number %d ?\n", guess);

    while ((choice = getchar()) != 'q')
    {
        switch (choice)
        {
        case 'b':
            max = guess;
            sum = min + max;
            guess = (sum % 2 == 1 ? (sum + 1 ) / 2 : sum / 2);
            printf("Is your number %d?\n", guess);
            buffer_clear();
            break;
        case 's': 
            min = guess;
            sum = min + max;
            guess = (sum % 2 == 1 ? (sum + 1 ) / 2 : sum / 2);
            printf("Is your number %d?\n", guess);
            buffer_clear();
            break;
        case 'y': 
            printf("I know I could do it!.\n");
            goto end;
        default: 
            printf("I only understand b, s, y and q.\n");
            printf("Try again:");
            buffer_clear();
            break;
        }
    }
    end: printf("Done."); 
    
    return 0;
}

void buffer_clear(void)
{
    char ch;
    while ((ch = getchar()) != '\n');
}
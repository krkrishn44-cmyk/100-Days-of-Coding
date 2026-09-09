//Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main()
{
    int n;
    int digit;
    int count[10] = {0};
    int i;
    int max = 0;
    int most = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if(n < 0)
    {
        n = -n;
    }

    if(n == 0)
    {
        printf("Digit occurring most times = 0");
        return 0;
    }

    while(n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for(i = 0; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            most = i;
        }
    }

    printf("Digit occurring most times = %d", most);

    return 0;
}
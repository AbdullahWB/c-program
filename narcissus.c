#include <stdio.h>
#include <math.h>
int main()
{
    int sum = 0;
    for (int i = 0; i <= 1000; i++)
    {
        if (i >= 100 && i <= 999)
        {
            int hundredNumber = (i / 100) % 10;
            int tenNumber = (i / 10) % 10;
            int oneNumber = i % 10;
            sum = pow(hundredNumber, 3) + pow(tenNumber, 3) + pow(oneNumber, 3);
            if (sum == i)
            {
                printf("%d\n", sum);
            }
        }
    }
    return 0;
}

#include <stdio.h>
#include <math.h>
int main()
{
    int sum = 0;
    for (int i = 100; i < 1000; i++)
    {
        int hundredNumber = (i / 100) % 10;
        int tenNumber = (i / 10) % 10;
        int oneNumber = i % 10;
        sum = pow(hundredNumber, 3) + pow(tenNumber, 3) + pow(oneNumber, 3);
        if (sum == i)
            printf("%d\n", sum);
    }
    return 0;
}
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
    int sum = 0,cnt=0;
    for (int i = 100; i < 1000; i++)
    {
        int h = (i / 100) % 10;
        int t = (i / 10) % 10;
        int o = i % 10;
        sum = pow(h, 3) + pow(t, 3) + pow(o, 3);
        if (sum == i)
        {
            cnt += 1;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
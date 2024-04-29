#include <stdio.h>

int main()
{
    int n, tmp1 = 0, tmp2 = 1, next, sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
        {
            sum += tmp1;
            continue;
        }
        if (i == 2)
        {
            sum += tmp2;
            continue;
        }
        next = tmp1 + tmp2;
        tmp1 = tmp2;
        tmp2 = next;
        sum += next;
    };

    if (n >= 2)
    {
        sum = tmp1 + tmp2;
        printf("%d\n", sum);
    }
    return 0;
}


#include<stdio.h>

int main()
{
    int i, a1, a2, a3, n;
    a1 = 1;
    a2 = 1;

    scanf("%d", &n);

    for (i = 1; i <= n - 2; i++)
    {
        a3 = a1 + a2;
        a1 = a2;
        a2 = a3;
    }

    printf("%d", a3);

    return 0;
}

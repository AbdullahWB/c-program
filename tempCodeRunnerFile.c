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
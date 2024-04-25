#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum -= i;
        else if (i % 2 != 0)
            sum += i;
    }
    printf("%d\n", sum);
    return 0;
}

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        if (i % 2 == 0)
        {
            i = -1 * i;
        }
        printf("%d\n", i);
    }
    return 0;
}


#include <stdio.h>
int main()
{
    
    return 0;
}
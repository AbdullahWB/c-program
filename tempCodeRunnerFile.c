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
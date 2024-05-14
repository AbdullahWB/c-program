#include <stdio.h>
int main()
{
    int i = 1, s = 3;
    do
    {
        s += i++;
        if (s % 7 == 0)
        {
            continue;
        }
        else
        {
            ++i;
        }
    } while (s < 15);
    printf("%d", i);
    return 0;
}


#include <stdio.h>
int main()
{
    int s = 0, k;
    for (k = 7; k >= 0; k--)
    {
        switch (k)
        {
        case 1:
        case 4:
        case 7:
            s++;
            break;
        case 2:
        case 3:
        case 6:
            break;
        case 0:
        case 5:
            s += 2;
            break;
        }
    }
    printf("%d", s);
    return 0;
}
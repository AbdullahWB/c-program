#include <stdio.h>
int main()
{
    int n;
    for (int i = 999; i <= 10000; i++)
    {
        if (1000 <= i && i <= 9999)
        {
            int thousandNumber = i / 1000;
            int hundredNumber = (i / 100) % 10;
            int tenNumber = (i / 10) % 10;
            int oneNumber = i % 10;
            if (thousandNumber == oneNumber && hundredNumber == tenNumber)
            {
                printf("symmetric no is %d\n", i);
            }
        }
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int cnt = 0;
    for (int i = 1000; i < 10000; i++)
    {
        int th = i / 1000;
        int h = (i / 100) % 10;
        int t = (i / 10) % 10;
        int o = i % 10;
        if (th == o && h == t)
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}

#include <stdio.h>
int main()
{
    int cnt = 0, sym=1000;
    while(sym<10000){
        int th = sym / 1000;
        int h = (sym / 100) % 10;
        int t = (sym / 10) % 10;
        int o = sym % 10;
        if (th == o && h == t)
            cnt++;
        sym++;
    }
    printf("%d\n", cnt);
    return 0;
}
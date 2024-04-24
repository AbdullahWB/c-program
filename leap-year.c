#include <stdio.h>
int main()
{
    for (int i = 1900; i <= 2024; i++)
    {
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
        {
            printf("is leap year %d\n", i);
        }
        else
        {
            printf("is not leap year %d\n", i);
        }
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int year;
    scanf("%d", &year);
    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
    {
        printf("leap year");
    }
    else
        printf("not leap year");
    return 0;
}
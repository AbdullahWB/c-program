#include <stdio.h>
int main()
{
    for (int i = 1000; i < 10000; i++)
    {
        int thousandNumber = i / 1000;
        int hundredNumber = (i / 100) % 10;
        int tenNumber = (i / 10) % 10;
        int oneNumber = i % 10;
        if (thousandNumber == oneNumber && hundredNumber == tenNumber)
            printf("symmetric no %d\n", i);
    }
    return 0;
}
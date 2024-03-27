#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 90 && n <= 100)
    {
        printf("golden A+ great job!\n");
    }
    else if (n >= 80 && n <= 89)
    {
        printf("B");
    }
    else if (n >= 70 && n <= 79)
    {
        printf("C");
    }
    else if (n >= 60 && n <= 69)
    {
        printf("D");
    }
    else if (n >= 0 && n <= 59)
    {
        printf("Fail you are a loser!\n");
    }
    return 0;
}
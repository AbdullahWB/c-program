#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a <= 'a' && a <= 'A' && a >= 'z' && a >= 'Z')
    {
        if (a == 'x' || a == 'y' || a == 'z' || a == 'X' || a == 'Y' || a == 'Z')
        {
            char b = a - 23;
            printf("Testing %c\n", b);
        }
        else
        {
            char b = a + 3;
            printf("Testing %c\n", b);
        }
    }
    return 0;
}
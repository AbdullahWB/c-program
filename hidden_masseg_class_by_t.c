#include <stdio.h>
int main()
{
    char c1;
    scanf("%c", &c1);
    c1 = c1 + 3;
    if (c1 > 'Z')
        c1 = c1 - 26;
    if (c1 > 'z')
        c1 = c1 - 26;
    printf("%c\n", c1);
    return 0;
}
#include <stdio.h>
int main()
{
    char a,b,c;
    scanf("%c %c %c", &a, &b, &c);
    char d=a+3, e=b+3, f=c+3;
    printf("print 3 char: %c %c %c", d, e, f);
    return 0;
}
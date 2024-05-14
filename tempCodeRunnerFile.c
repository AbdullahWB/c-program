#include <stdio.h>
int main()
{
    int n, tmp1 = 0, tmp2 = 1, next, sum = 0;
    scanf("%d", &n);
    next = tmp1 + tmp2;
    tmp1 = tmp2;
    tmp2 = next;
    printf("%d",next);
    return 0;
}
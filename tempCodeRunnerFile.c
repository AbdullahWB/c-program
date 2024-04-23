#include <stdio.h> //me 
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        sum += i;
        printf("sum => %d\n", sum);
    }
    printf("%d\n", sum);
    return 0;
}
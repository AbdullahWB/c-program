#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int start = 0;
    int end = n - 1;
    int tmp;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    while (start < end)
    {
        tmp = a[start];
        a[start] = a[end];
        a[end] = tmp;
        start++;
        end--;
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int i, n, s = 0, cnt = 0;
//     float avg = 0;
//     for (n = 2; n <= 100; n++)
//     {
//         for (i = 2; i <= n - 1; i++)
//         {
//             if (n % i == 0)
//                 break;
//         }
//         if (i >= n)
//         {
//             cnt++;
//             s += n;
//         }
//     }
//     avg = s * 1.0 / cnt;
//     printf("%d\n", cnt);
//     printf("%.2f", avg);
//     return 0;
// }
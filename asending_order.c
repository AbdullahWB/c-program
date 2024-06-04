// #include <stdio.h>
// #define n 5

// int main()
// {
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 int tmp = a[j];
//                 a[j] = a[i];
//                 a[i] = tmp;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);

    return 0;
}
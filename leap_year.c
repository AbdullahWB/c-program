// #include <stdio.h>
// #define lg 9999
// #define sm 999
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     if (n <= lg && n > sm)
//     {
//         if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//         {
//             printf("Yes\n");
//         }
//         else
//         {
//             printf("No\n");
//         }
//     }
//     else
//     {
//         printf("NO\n");
//     }
//     return 0;
// }

#include <stdio.h>

#define lg 9999
#define sm 999

int main()
{
    int n;
    scanf("%d", &n);

    if (n <= lg && n > sm)
    {
        if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

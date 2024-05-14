// #include <stdio.h>
// int main()
// {
//     int cnt = 0, sum = 0;
//     for (int n = 1; n < 100; n++)
//     {
//         if (n < 2)
//         {
//             continue;
//         }
//         else
//         {
//             int is_prime = 1;
//             for (int i = 2; i * i <= n; i++)
//             {
//                 if (n % i == 0)
//                 {
//                     is_prime = 0;
//                     break;
//                 }
//             }
//             if (is_prime)
//             {
//                 cnt++;
//                 sum += n;
//             }
//         }
//     }
//     printf("%d ", cnt);
//     if (cnt > 0)
//     {
//         double average = (double)sum / cnt;
//         printf("%.2f\n", average);
//     }
//     return 0;
// }


#include <stdio.h>

int main()
{
    int cnt = 0, sum = 0;

    for (int n = 1; n < 100; n++)
    {
        if (n < 2)
        {
            continue;
        }
        else
        {
            int is_prime = 1;

            for (int i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    is_prime = 0;
                    break;
                }
            }

            if (is_prime)
            {
                cnt++;
                sum += n;
            }
        }
    }

    printf("%d ", cnt);

    if (cnt > 0)
    {
        double avg = (double)sum / cnt;
        printf("%.2f\n", avg);
    }

    return 0;
}

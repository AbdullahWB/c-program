// #include <stdio.h>

// int main()
// {
//     int n, tmp1 = 0, tmp2 = 1, next;
//     scanf("%d", &n);
//     printf("1\n");
//     for (int i = 1; i <10; i++)
//     {
//         next = tmp1 + tmp2;
//         tmp1 = tmp2;
//         tmp2 = next;
//         printf("%d\n", next);
//     };
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a[10], i;
//     a[0] = a[1] = 1;
//     for (i = 2; i <= 9; i++)
//         a[i] = a[i - 2] + a[i - 1];
//     for (i = 0; i <= 9; i++)
//         printf("%d ", a[i]);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a[10];
    a[0]=a[1]=1;
    for(int i=2;i<=9;i++){
        a[i]=a[i-2]+a[i-1];
    }
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

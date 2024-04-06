#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (1000 <= n){
        int thousandNumber = n / 1000;
        int hundredNumber = (n / 100) % 10;
        int tenNumber = (n / 10) % 10;
        int oneNumber = n % 10;
        if (thousandNumber == oneNumber && hundredNumber == tenNumber){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    else{
        printf("NO\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int th = n / 1000;
    int h = (n / 100) % 10;
    int t = (n / 10) % 10;
    int o = n % 10;
    if (th == o && h == t)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}


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

#include <stdio.h>
int main()
{
    int a,s=0;
    scanf("%d",&a);
    for(int i=0; i<=a; i++)
        s=s+i;
    printf("%d\n",s);
    return 0;
}

//teacher
#include <stdio.h>
int main() 
{
    int i,n,s;
    s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    s=s+i;
    printf("%d\n",s);
    return 0;
}
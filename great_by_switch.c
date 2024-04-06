#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 0 && n >= 100)
    {
        switch (n / 10)
        {
        case 10:
            printf("great");
            break;
        case 9:
            printf("A+");
            break;
        case 8:
            printf("A");
            break;
        case 7:
            printf("B+");
            break;
        case 6:
            printf("B");
            break;
        case 5:
            printf("C+");
            break;
        case 4:
            printf("C");
            break;
        case 3:
            printf("D+");
            break;
        case 2:
            printf("D");
            break;
        case 1:
            printf("F");
            break;
        }
    }else{
        printf("apni ki bal pakna\n");
    }
    return 0;
}
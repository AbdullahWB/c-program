#include <stdio.h>
int main()
{
    char a[100];
    int n = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        scanf("%s", &a[i]);
        n++;
    }
    int uppercase = 0, lowercase = 0, number = 0, symbol = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            uppercase++;
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            lowercase++;
        }
        else if (a[i] >= '0' && a[i] <= '9')
        {
            number++;
        }
        else
        {
            symbol++;
        }
    }
    printf("uppercase is: %d\nlowercase is: %d\nnumber is: %d\nsymbol is: %d", uppercase, lowercase, number, symbol);
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int a[3][3] = {1, 2, 3, 3, 4, 5, 5, 6, 7}, i, j, s = 0;

//     for (i = 0; i < 3; i++){
//         for (j = i; j < 3; j++){
//             printf("%d ",a[i][j]);
//             s += a[i][j];
//         }
//         printf("\n");
//     }
//     printf("%d\n", s);
//     return 0;
// }

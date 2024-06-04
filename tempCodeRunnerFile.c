#include <stdio.h>
int main()
{

    int a[3][3] = {(1, 2, 3), (3, 4, 5), (5, 6, 7)}, i, j, s = 0;

    for (i = 0; i < 3; i++)

        for (j = i; j < 3; j++)
            s += a[i][j];

    printf("%d\n", s);
    return 0;
}
#include <stdio.h>
int main()
{
    int a, b, tmp;
    a = 10;
    b = 20;
    printf("before swapping: %d %d \n", a, b);
    tmp = a;
    a = b;
    b = tmp;
    printf("after swapping: %d %d \n", a, b);
    return 0;
}
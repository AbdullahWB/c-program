// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     float r=3.14,p=3.14;
//     // float R = (p*(r*r));
//     float R2;
//     R2=sqrt(r/p);
//     // printf("R = %f\n",R);
//     printf("R2 = %f\n",R2);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int i = 1, s = 3;
//     do {
//         s += i++;
//         if (s % 7 == 0)
//             continue;
//         else
//             ++i;
//     } while (s < 15);
//     printf("%d", i);
//     return 0;
// }

// #include <stdio.h>
// #define P 0156
// int main()
// {
//     int a=0, b=5;
//     a=b++;
//     printf("a = %d, b = %d", a,b);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 0, b = 0, s = 0;
//     a = 1;
//     b = 2;
//     s = 2 * a * b;
//     printf("%d", s);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 1, b = 2, c = 3, d = 0;
//     if(a== 1&&b++== 2){
//         if(b!=2||c--!=3){
//             printf("%d,%d,%d", a, b, c);
//         } 
//         else{
//             printf("%d,%d,%d",a,b,c);
//         }
//     }
//     else {
//         printf("%d,%d,%d", a, b, c);
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x-- <5) printf("%d",x);
    else printf("%d",x++);
    return 0;
}
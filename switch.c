// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     char t,a;
//     float n, m;

//     scanf("%c %f %f",&t, &n, &m);
//     switch (t)
//     {
//     case '+':
//         printf("%f*%f = %f\n", n, m, n+m);
//         break;
//     case '-':
//         printf("%f/%f = %f\n", n, m, n/m);
//         break;
//     case '*':
//         printf("operator invalid\n");
//         break;
//     case '/':
//         switch(m==0){
//             case 1: printf("dividend can not be 0\n"); break;
//             default: printf("%f/%f = %f\n", n, m, n/m);
//         }
//         break;
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    float a, b, r;
    char t;
    
    scanf("%f %c %f", &a, &t, &b);
    switch (t)
    {
    case '+':
        r = a + b;
        break;
    case '-':
        r = a - b;
        break;
    case '*':
        r = a * b;
        break;
    case '/':
    {
        if (b != 0)
        {
            r = a / b;
        }
        else
        {
            printf("the dividend can not be 0\n");
            return 1;
        }
    }
    break;
    default:
        printf("operator invalid \n");
        return 1;
    }
    printf("%.2f\n", r);
    return 0;
}

 

// #include<stdio.h>

// int main() {
//     float a, b, d;
//     int r;
//     char c1;
    
//     scanf("%f%c%f", &a, &c1, &b);
    
//     switch(c1) {
//         case '+':
//             r = a + b;
//             printf("%d\n", r);
//             break;
//         case '-':
//             r = a - b;
//             printf("%d\n", r);
//             break;
//         case '*':
//             r = a * b;
//             printf("%d\n", r);
//             break;
//         case '/':
//             if(b != 0) {
//                 d = a / b;
//                 printf("%.1f\n", d);
//             } else
//                 printf("the dividend can not be 0\n");
            
//             break;
//         default:
//             printf("operator invalid\n");
//     }

//     return 0;
// }

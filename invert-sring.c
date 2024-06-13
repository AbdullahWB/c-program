// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char string[1024];
//     gets(string);
//     for(int i = strlen(string)-1; i >= 0; i--){
//         printf("%c", string[i]);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int a[10]={1,2,3,4,5,6},i,j;
//     for(i=0;i<6;i++){
//         j=a[i];
//         a[i]=a[5-i];
// //         // a[5-i]=j;
//     }
//     for(i=0;i<6;i++)
//         printf("%d", a[i]);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a,b[5];
    a=0,b[0]=3;
    printf("%d, %d",b[0],b[1]);
    return 0;
}
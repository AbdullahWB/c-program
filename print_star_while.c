#include <stdio.h>
int main()
{
    int c=0, j=3;
    while(j--){
        for(int i=0;i<3;i++){
            printf("*");
        }
        printf("\n");
        c++;
    }
    return 0;
}
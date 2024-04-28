#include <stdio.h>
int main()
{
    double n=2,sum=0;
    while(n!=0){
        n=n/2;
        printf("div: %.100lf \n",n);
        sum=sum+n;
        printf("Sum: %.100lf \n",sum);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i <=n; i++){
        for(int j = 0; j <=i; j++){
            if(j==0||i==j){
                a[i][j] = 1;
            }else{
                a[i][j] = 0;
            }
        }
    }
    for (int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
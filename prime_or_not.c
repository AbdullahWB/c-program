#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=2; i<=n-1;i++){
        if(n%i==0){
            break;
        }else
        if(i==n-1){
            printf("YES");
        }else{
            printf("NO");
        }
    }
    return 0;
}


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    // Check if n is less than 2
    if (n < 2) {
        printf("NO");
    } else {
        int is_prime = 1; // Assume n is prime

        // Iterate from 2 to sqrt(n)
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = 0; // n is divisible by i, hence not prime
                break;
            }
        }

        // Output the result based on is_prime
        if (is_prime) {
            printf("YES");
        } else {
            printf("NO");
        }
    }
    
    return 0;
}

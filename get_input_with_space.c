#include <stdio.h>

int main() {
    char a[100];
    int n = 0;
    
    fgets(a, sizeof(a), stdin);
    
    while (a[n] != '\0' && a[n] != '\n') {
        n++;
    }
    if (a[n] == '\n') {
        a[n] = '\0';
    }

    int uppercase = 0, lowercase = 0, number = 0, symbol = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            uppercase++;
        } else if (a[i] >= 'a' && a[i] <= 'z') {
            lowercase++;
        } else if (a[i] >= '0' && a[i] <= '9') {
            number++;
        } else {
            symbol++;
        }
    }
    
    printf("uppercase is: %d\nlowercase is: %d\nnumber is: %d\nsymbol is: %d\n", uppercase, lowercase, number, symbol);
    return 0;
}

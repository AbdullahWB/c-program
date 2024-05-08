#include <stdio.h>
#include <string.h>

int is_palindrome(char c[]){
    int charLength= strlen(c);
    for(int i=0; i<charLength/2; i++){
        printf("%c", c[i]);
        printf("\n");
        // printf("%c", c[charLength-i-1]);
        if(c[i] != c[charLength-i-1]){
            printf("%c", c[charLength-i-1]);
            printf("\n");
            printf("%d",charLength);
            printf("\n");
            printf("%d", charLength-i);
            printf("\n");
            printf("%d", charLength-i-1);
            printf("\n");
            printf("%c", c[4]);
            printf("\n");
            return 0;
        }
    }
    return 1;
}

int main()
{
    char c[1001];
    scanf("%s", c);

    int charCount = is_palindrome(c);

    if(charCount == 1){
        printf("Palindrome\n");
    }else{
        printf("Not Palindrome\n");
    }

    return 0;
}
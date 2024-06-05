#include <stdio.h>
#include <string.h>

int main()
{
    char s[1024];
    int k = 2;
    gets(s);
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {   
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            if (s[i] == 'Y' || s[i] == 'Z')
                printf("%c", s[i] - 24);
            else
                printf("%c", s[i] + k);
        }
    }
    return 0;
}
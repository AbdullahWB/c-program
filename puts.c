#include <stdio.h>
#include <string.h>
int main()
{
    char ch[50];
    int i, len;
    gets(ch);
    len = strlen(ch);
    for (i = 0; i < len; i++)
    {
        if (ch[i] <= 'x' && ch[i] >= 'a')
            ch[i] = ch[i] + 2;
        else if (ch[i] <= 'X' && ch[i] >= 'A')
            ch[i] = ch[i] + 2;
        else if (ch[i] <= 'Z' && ch[i] > 'X')
            ch[i] = ch[i] + 2 - 26;
        else if (ch[i] <= 'z' && ch[i] > 'x')
            ch[i] = ch[i] + 2 - 26;
    }
    puts(ch);
    return 0;
}



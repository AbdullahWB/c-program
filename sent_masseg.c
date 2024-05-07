#include <stdio.h>
#define MAX_LIM 100

int main()
{
    char str[MAX_LIM];
    printf("Enter your massage in here: ");
    fgets(str, MAX_LIM, stdin);

    for (int i = 0; i < str[i] != '\0'; i++)
    {
        str[i] += 1;
    }
    printf("Here is your Encrypted massage: ");
    for (int i = 0; i < str[i] != '\0'; i++)
    {
        if (str[i] == '!')
        {
            printf(" ");
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");
    int n;
    printf("can you decrypt the massage?: ");
    scanf("%d", &n);
    if (n == 1)
    {
        for (int i = 0; i < str[i] != '\0'; i++)
        {
            str[i] -= 1;
        }
        printf("Here is your decrypt massage: ");
        for (int i = 0; i < str[i] != '\0'; i++)
        {
            if (str[i] == '!')
            {
                printf(" ");
            }
            else
            {
                printf("%c", str[i]);
            }
        }
    }else{
        printf("okay the massage is expired!!!");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    char message[100];

    printf("Enter the message to encrypt: ");
    scanf("%s", message);

    for (int i = 0; message[i] != '\0'; i++)
    {
        message[i] += 3;
    }

    printf("Encrypted message: %s\n", message);

    printf("Enter the Encrypted message to descript: ");
    scanf("%s", message);

    for (int i = 0; message[i] != '\0'; i++)
    {
        message[i] -= 3;
    }

    printf("Descript message: %s\n", message);

    return 0;
}

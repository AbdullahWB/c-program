#include <stdio.h>

void encrypt(char *message)
{
    while (*message != '\0')
    {
        *message = (*message + 3);
        message++;
    }
}

int main()
{
    char message[] = "go";
    printf("Original message: %s\n", message);

    encrypt(message);

    printf("Encrypted message: %s\n", message);
    return 0;
}

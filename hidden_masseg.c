#include <stdio.h>

int main()
{
    char message[] = "go";

    for (int i = 0; message[i] != '\0'; i++)
    {
        message[i] += 3;
    }

    printf("Encrypted message: %s\n", message);

    return 0;
}

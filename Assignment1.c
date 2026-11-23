#include <stdio.h>

int main()
{
    int login;

    printf("GMAIL LOGIN\n");

    printf("Enter 1 for successful login: ");
    scanf("%d", &login);

    if (login == 1)
    {
        printf("Login Successful!\n");
        printf("Welcome to Gmail Inbox.\n");
    }
    else
    {
        printf("Invalid Credentials!\n");
    }

    return 0;
}

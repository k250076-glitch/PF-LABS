#include <stdio.h>

int main()
{
    char username[30];
    char password[30];

    printf("Enter the username: ");
    scanf("%s", username);
    while (!(username[0] == 'a' &&
             username[1] == 'd' &&
             username[2] == 'm' &&
             username[3] == 'i' &&
             username[4] == 'n' &&
             username[5] == '\0'))
    {
        printf("Incorrect username.\n");
        printf("Enter the username: ");
        scanf("%s", username);
    }
    printf("Enter the password: ");
    scanf("%s", password);
    while (!(password[0] == '1' &&
             password[1] == '2' &&
             password[2] == '3' &&
             password[3] == '4' &&
             password[4] == '\0'))
    {
        printf("Incorrect Password.\n");
        printf("Enter the Password: ");
        scanf("%s", password);
    }
    printf("Welcome, %s\n", username);

    return 0;
}

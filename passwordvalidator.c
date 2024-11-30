#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isValidPassword(char password[]) {
    int length = strlen(password);
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;
    for (int i = 0; i < length; i++) {
        if (isupper(password[i]))
            hasUpper = 1;
        else if (islower(password[i]))
            hasLower = 1;
        else if (isdigit(password[i]))
            hasDigit = 1;
        else if (strchr("!@#$%^&*()-_=+[]{}|;:'\",.<>?/`~", password[i]))
            hasSpecial = 1;
    }
    if (length >= 8 && hasUpper && hasLower && hasDigit && hasSpecial)
        return 1;
    else
        return 0;
}
int main() {
    char password[100];
    printf("Enter a password to validate: ");
    scanf("%s", password);
    if (isValidPassword(password))
        printf("Password is valid.\n");
    else
        printf("Password is invalid. It must:\n"
               "- Be at least 8 characters long\n"
               "- Contain at least one uppercase letter\n"
               "- Contain at least one lowercase letter\n"
               "- Contain at least one digit\n"
               "- Contain at least one special character (!@#$%^&*)\n");
    return 0;
}

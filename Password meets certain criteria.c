#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isValidPassword(char *password) {
    int length = strlen(password);
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    if (length < 8) {
        return 0; 
    }
    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            hasUpper = 1;
        } else if (islower(password[i])) {
            hasLower = 1;
        } else if (isdigit(password[i])) {
            hasDigit = 1;
        } else if (ispunct(password[i])) {
            hasSpecial = 1;
        }
    }
    return hasUpper && hasLower && hasDigit && hasSpecial;
}

int main() {
    char password[100];

    printf("Enter your password: ");
    scanf("%s", password);

    if (isValidPassword(password)) {
        printf("Password is valid.\n");
    } else {
        printf("Password is invalid. Make sure it meets the following criteria:\n");
        printf("- At least 8 characters long\n");
        printf("- Contains at least one uppercase letter\n");
        printf("- Contains at least one lowercase letter\n");
        printf("- Contains at least one digit\n");
        printf("- Contains at least one special character (e.g., !@#$%^&*)\n");
    }

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char *str) {
    int start = 0;              
    int end = strlen(str) - 1;   

    while (start < end) {
        while (start < end && !isalnum(str[start])) start++;
        while (start < end && !isalnum(str[end])) end--;

        if (tolower(str[start]) != tolower(str[end])) {
            return 0; 
        }

        start++;
        end--;
    }

    return 1; // Is a palindrome
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    if (isPalindrome(str)) {
        printf("\"%s\" is a palindrome

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; 
    printf("\nLength of first string: %lu", strlen(str1));
    printf("\nLength of second string: %lu", strlen(str2));

    strcpy(str3, str1);
    printf("\n\nAfter copying, str3 contains: %s", str3);

    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("\n\nThe strings are equal.");
    } else if (result < 0) {
        printf("\n\nThe first string is lexicographically smaller than the second string.");
    } else {
        printf("\n\nThe first string is lexicographically greater than the second string.");
    }

    strcat(str1, str2);
    printf("\n\nAfter concatenation, first string is: %s", str1);

    return 0;
}

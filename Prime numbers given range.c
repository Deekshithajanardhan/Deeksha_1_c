#include <stdio.h>
#include <stdbool.h>
bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;  
        }
    }
    return true;
}

int main() {
    int start, end;
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);
    FILE *file = fopen("primes.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;  
    }
    printf("Prime numbers in the range [%d, %d]:\n", start, end);
    for (int num = start; num <= end; num++) {
        if (is_prime(num)) {
            printf("%d ", num); 
            fprintf(file, "%d\n", num);  
        }
    }
    fclose(file);
    printf("\nPrime numbers have been saved to primes.txt\n");

    return 0;
}

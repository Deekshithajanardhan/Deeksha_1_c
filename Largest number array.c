#include <stdio.h>

int main() {
    int arr[10], i, largest;
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for (i = 1; i < 10; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("The largest number in the array is: %d\n", largest);

    return 0;
}

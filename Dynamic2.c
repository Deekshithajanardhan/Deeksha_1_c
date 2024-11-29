#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, i, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("The sum of the elements is: %d\n", sum);

    free(arr);
    return 0;
}

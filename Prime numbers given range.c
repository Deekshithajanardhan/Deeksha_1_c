#include <stdio.h>
#include <stdbool.h> 
int main() {
    bool is_even = true;
    
    if (is_even) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
    is_even = false;
    if (!is_even) {
        printf("The number is now odd.\n");
    }

    return 0;
}

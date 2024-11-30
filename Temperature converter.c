#include <stdio.h>

void metersToKilometers(float meters) {
    printf("%.2f meters is equal to %.2f kilometers\n", meters, meters / 1000);
}

void gramsToKilograms(float grams) {
    printf("%.2f grams is equal to %.2f kilograms\n", grams, grams / 1000);
}

void centimetersToMeters(float centimeters) {
    printf("%.2f centimeters is equal to %.2f meters\n", centimeters, centimeters / 100);
}

void millilitersToLiters(float milliliters) {
    printf("%.2f milliliters is equal to %.2f liters\n", milliliters, milliliters / 1000);
}

int main() {
    int choice;
    float value;

    printf("Unit Conversion Program\n");
    printf("1. Convert meters to kilometers\n");
    printf("2. Convert grams to kilograms\n");
    printf("3. Convert centimeters to meters\n");
    printf("4. Convert milliliters to liters\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter value in meters: ");
            scanf("%f", &value);
            metersToKilometers(value);
            break;
        case 2:
            printf("Enter value in grams: ");
            scanf("%f", &value);
            gramsToKilograms(value);
            break;
        case 3:
            printf("Enter value in centimeters: ");
            scanf("%f", &value);
            centimetersToMeters(value);
            break;
        case 4:
            printf("Enter value in milliliters: ");
            scanf("%f", &value);
            millilitersToLiters(value);
            break;
        default:
            printf("Invalid choice. Please run the program again.\n");
    }

    return 0;
}

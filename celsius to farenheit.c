#include <stdio.h>

int main() {
    float temp, convertedTemp;
    int choice;

    printf("Temperature Conversion Program\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        convertedTemp = (temp * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f°F\n", convertedTemp);
    }
    else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        convertedTemp = (temp - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f°C\n", convertedTemp);
    }
    else {
        printf("Invalid choice! Please run the program again.\n");
    }

    return 0;
}


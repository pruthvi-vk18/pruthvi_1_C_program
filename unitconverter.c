#include <stdio.h>

void convertLength() {
    float meters, kilometers;
    printf("Enter length in meters: ");
    scanf("%f", &meters);
    kilometers = meters / 1000;
    printf("%.2f meters is equal to %.2f kilometers\n", meters, kilometers);
}

void convertWeight() {
    float grams, kilograms;
    printf("Enter weight in grams: ");
    scanf("%f", &grams);
    kilograms = grams / 1000;
    printf("%.2f grams is equal to %.2f kilograms\n", grams, kilograms);
}

void convertTemperature() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);
}

int main() {
    int choice;

    printf("Unit Converter Program\n");
    printf("1. Convert Meters to Kilometers\n");
    printf("2. Convert Grams to Kilograms\n");
    printf("3. Convert Celsius to Fahrenheit\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            convertLength();
            break;
        case 2:
            convertWeight();
            break;
        case 3:
            convertTemperature();
            break;
        default:
            printf("Invalid choice. Please restart the program and choose 1, 2, or 3.\n");
    }

    return 0;
}

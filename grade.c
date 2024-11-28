#include <stdio.h>

int main() {
    float marks;
    char grade;

    printf("Enter the marks: ");
    scanf("%f", &marks);

    if (marks >= 90) {
        grade = 'A';   // Excellent
    }
    else if (marks >= 80) {
        grade = 'B';   // Good
    }
    else if (marks >= 70) {
        grade = 'C';   // Average
    }
    else if (marks >= 60) {
        grade = 'D';   // Pass
    }
    else {
        grade = 'F';   // Fail
    }
    printf("Your grade is: %c\n", grade);

    return 0;
}
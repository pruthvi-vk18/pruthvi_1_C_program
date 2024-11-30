#include <stdio.h>
#include <stdlib.h>
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; 
    }
    return 1; 
}
void findPrimes(int start, int end, const char* filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    fprintf(file, "Prime numbers between %d and %d:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            fprintf(file, "%d\n", i);
        }
    }
    fclose(file);
    printf("Prime numbers saved to %s successfully.\n", filename);
}
int main() {
    int start, end;
    char filename[100];
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);
    printf("Enter the filename to save the prime numbers: ");
    scanf("%s", filename);
    if (start > end) {
        printf("Invalid range. Start should be less than or equal to end.\n");
        return 1;
    }
    findPrimes(start, end, filename);
    return 0;
}

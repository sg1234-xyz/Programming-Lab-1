#include <stdio.h>
int isBuzz(int num) {
    return (num % 10 == 7 || num % 7 == 0);
}
void checkPositiveNegative(int num) {
    if (num > 0) {
        printf("%d is a positive number.\n", num);
    } else if (num < 0) {
        printf("%d is a negative number.\n", num);
    } else {
        printf("The number is zero.\n");
    }
}

int main() {
    int number;
    int choice;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("\nChoose an operation:\n");
    printf("1. Check if the number is a Buzz number.\n");
    printf("2. Check if the number is positive or negative.\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (isBuzz(number)) {
                printf("%d is a Buzz number.\n", number);
            } else {
                printf("%d is not a Buzz number.\n", number);
            }
            break;
        case 2:
            checkPositiveNegative(number);
            break;
        default:
            printf("Invalid choice. Please enter 1 or 2.\n");
            break;
    }

    return 0;
}
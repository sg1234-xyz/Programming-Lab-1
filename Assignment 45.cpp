#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c) {
        printf("All numbers are equal.\n");
    } else {
        if (a >= b && a >= c)
            printf("The greatest number is: %d\n", a);
        else if (b >= a && b >= c)
            printf("The greatest number is: %d\n", b);
        else
            printf("The greatest number is: %d\n", c);
    }
    if (a > 0 && b > 0 && c > 0)
        printf("All numbers are positive.\n");
    else if (a < 0 && b < 0 && c < 0)
        printf("All numbers are negative.\n");
    else
        printf("The numbers are mixed (positive and negative).\n");

    return 0;
}

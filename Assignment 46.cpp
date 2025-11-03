#include <stdio.h>
int sum of first ten natural numbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (2 * i);
    }
    return sum;
}

int main() {
    int num_even_numbers = 10;
    int result_sum;

    result_sum = sum of first ten natural numbers(num_even_numbers);

    printf("The sum of the first %d even natural numbers is: %d\n", num_even_numbers, result_sum);

    return 0;
}
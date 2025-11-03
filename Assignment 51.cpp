#include <stdio.h>

int main() {
    int arr[100]; 
    int size;      
    int even_count = 0;
    int odd_count = 0; 

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0){
	   even_count++;
        } else { 
            odd_count++;
        }
    }
    printf("\nOccurrence of Even numbers: %d\n", even_count);
    printf("Occurrence of Odd numbers: %d\n", odd_count);

    return 0;
}
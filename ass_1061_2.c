#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];   // Declare array of size n

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];   // Add each element to sum
    }

    // Output the sum
    printf("Sum of array elements = %d\n", sum);

    return 0;
}


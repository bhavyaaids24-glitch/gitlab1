#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        while (num > 0) {
            totalSum += num % 10;  // Add last digit
            num /= 10;             // Remove last digit
        }
    }

    printf("Sum of all digits in the array = %d\n", totalSum);
    return 0;
}


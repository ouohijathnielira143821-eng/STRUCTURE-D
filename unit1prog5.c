/* 5. Create an array of size 10, find the largest value from the array. */
#include <stdio.h>

int main() {
    int arr[10], n = 10, i, largest;

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("\nThe largest element in the array is: %d\n", largest);

    return 0;
}

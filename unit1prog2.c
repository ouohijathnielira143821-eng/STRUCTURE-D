/* 2. Create an array of size 10, input values, and display
      sum and average of all elements in the array. */
#include <stdio.h>

int main() {
    int arr[10], n = 10, i, sum = 0;
    float average;

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    average = (float) sum / n;

    printf("\nSum of elements = %d\n", sum);
    printf("Average of elements = %.2f\n", average);

    return 0;
}

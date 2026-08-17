/* 1. Create an array of size 10, input values, print the array,
      and search an element in the array. */
#include <stdio.h>

int main() {
    int arr[10], n = 10, i, key, found = 0, pos = -1;

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nEnter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            pos = i;
            break;
        }
    }

    if (found)
        printf("Element %d found at position %d (index %d).\n", key, pos + 1, pos);
    else
        printf("Element %d not found in the array.\n", key);

    return 0;
}

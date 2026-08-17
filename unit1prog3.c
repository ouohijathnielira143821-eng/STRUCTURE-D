/* 3. Create arrays A, B and C of size 3, perform C = A + B. */
#include <stdio.h>

int main() {
    int A[3], B[3], C[3], i;

    printf("Enter 3 elements for array A:\n");
    for (i = 0; i < 3; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Enter 3 elements for array B:\n");
    for (i = 0; i < 3; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for (i = 0; i < 3; i++) {
        C[i] = A[i] + B[i];
    }

    printf("\nArray C (A + B) = ");
    for (i = 0; i < 3; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}

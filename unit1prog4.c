/* 4. Create arrays A, B of size 3, C of size 6, merge A and B into C. */
#include <stdio.h>

int main() {
    int A[3], B[3], C[6], i, j;

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

    /* copy A into C */
    for (i = 0; i < 3; i++) {
        C[i] = A[i];
    }

    /* copy B into C right after A */
    for (j = 0; j < 3; j++) {
        C[3 + j] = B[j];
    }

    printf("\nMerged array C = ");
    for (i = 0; i < 6; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}

//program that reads N elements into an array and prints them in reverse order:


#include <stdio.h>

int main() {
    int N, i;
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];

    // Input array elements
    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Output array elements in reverse order
    printf("Array elements in reverse order:\n");
    for (i = N - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}



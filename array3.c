//program that reads N elements into an array and finds the largest element
#include <stdio.h>

int main() {
    int N, i, largest;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];

    // Input array elements
    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest with the first element
    largest = arr[0];

    // Traverse the array to find the largest element
    for (i = 1; i < N; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", largest);

    return 0;
}

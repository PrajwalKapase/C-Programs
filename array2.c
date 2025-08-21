//program that reads N numbers into an array and then counts and prints the number of even and odd elements

#include <stdio.h>

int main() {
    int N, i;
    int evenCount = 0, oddCount = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N]; 

    // Input array elements
    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);

        // Check if element is even or odd
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Output counts
    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d\n", oddCount);

    return 0;
}

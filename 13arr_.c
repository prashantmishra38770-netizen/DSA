#include <stdio.h>
#include <math.h> // Includes sqrt()

int main() {
    int n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int perfectSquare = 0;
    int notPerfectSquare = 0;

    for (i = 0; i < n; i++) {
        int root = sqrt(arr[i]); // Calculate square root

        // If root * root gives back the original number, it's a perfect square!
        if (root * root == arr[i]) {
            perfectSquare++;
        } else {
            notPerfectSquare++;
        }
    }

    printf("\nPerfect square count: %d\n", perfectSquare);
    printf("Non-perfect square count: %d\n", notPerfectSquare);

    return 0;
}
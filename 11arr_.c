#include <stdio.h>

int main() {
    int i, n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    int positivearr[n];
    int negativearr[n];
    int positiveIndex = 0;
    int negativeIndex = 0;

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Separate positives and negatives
    for (i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            positivearr[positiveIndex] = arr[i];
            positiveIndex++;
        } else {
            negativearr[negativeIndex] = arr[i];
            negativeIndex++;
        }
    }

    // Output Original
    printf("\nOriginal array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Output Positives
    printf("\nPositive elements: ");
    for (i = 0; i < positiveIndex; i++) {
        printf("%d ", positivearr[i]);
    }

    // Output Negatives
    printf("\nNegative elements: ");
    for (i = 0; i < negativeIndex; i++) {
        printf("%d ", negativearr[i]);
    }
    printf("\n");

    return 0;
}

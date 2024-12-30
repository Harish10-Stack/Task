// Give an array of integers, find the second largest element.
// Return -1 if there is no second largest element.
#include <stdio.h>

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        return -1;
    }

    int firstLargest = -1, secondLargest = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest; 
            firstLargest = arr[i];  
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];  
        }
    }

    return secondLargest == -1 ? -1 : secondLargest;  
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findSecondLargest(arr, n);
    if (result == -1) {
        printf("No second largest element.\n");
    } else {
        printf("Second largest element is: %d\n", result);
    }

    return 0;
}

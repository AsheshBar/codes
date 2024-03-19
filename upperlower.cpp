# codes
#include <stdio.h>

// Function to find the lower bound of a value in a sorted array
int lowerBound(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int lower_bound = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= target) {
            lower_bound = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return lower_bound;
}

// Function to find the upper bound of a value in a sorted array
int upperBound(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int upper_bound = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] <= target) {
            upper_bound = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return upper_bound;
}

int main() {
    int arr[] = {1, 2, 3, 3, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    int lower = lowerBound(arr, n, target);
    int upper = upperBound(arr, n, target);

    printf("Lower bound of %d is at index %d\n", target, lower);
    printf("Upper bound of %d is at index %d\n", target, upper);

    return 0;
}

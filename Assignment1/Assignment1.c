#include <stdio.h>
#define SIZE 10

int linear_search(int arr[], int size, int x, int index) {
    if (index >= size)
        return -1;
    if (arr[index] == x)
        return index;
    return linear_search(arr, size, x, index + 1);
}

int binary_search(int arr[], int left, int right, int x) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binary_search(arr, left, mid - 1, x);

        return binary_search(arr, mid + 1, right, x);
    }

    return -1;
}

int main() {
    int arr[] = {2, 4, 0, 1, 9, 8, 7, 3, 5, 6};
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int x= 5;
    int result1 = linear_search(arr, SIZE, x, 0);
    int result2 = binary_search(arr1, 0, SIZE - 1, x);

    if (result1 != -1)
        printf("Element found at index linear search =%d\n", result1);
    else
        printf("Element not found\n");

    if (result2 != -1)
        printf("Element found at index binary search =%d\n", result2);
    else
        printf("Element not found\n");

    return 0;
}

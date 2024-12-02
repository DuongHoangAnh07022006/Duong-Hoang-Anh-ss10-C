#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int length = sizeof(arr) / sizeof(arr[0]);
    int x, result;

    printf("Mang ban dau:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSort(arr, length);

    printf("Mang sau khi sap xep:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap vao mot so nguyen bat ky: ");
    scanf("%d", &x);

    result = binarySearch(arr, length, x);
    if (result != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n", x, result);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", x);
    }

    return 0;
}


#include <stdio.h>

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int length = sizeof(arr) / sizeof(arr[0]);
    int i, key, j;

    printf("Mang ban dau:\n");
    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = 1; i < length; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    printf("Mang sau khi sap xep chen:\n");
    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


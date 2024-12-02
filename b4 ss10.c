#include <stdio.h>

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int length = sizeof(arr) / sizeof(arr[0]);
    int i, j, min_idx, temp;

    printf("Mang ban dau:\n");
    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = 0; i < length - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < length; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    printf("Mang sau khi sap xep chon:\n");
    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


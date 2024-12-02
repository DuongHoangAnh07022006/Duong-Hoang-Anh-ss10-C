#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int length = sizeof(arr) / sizeof(arr[0]);
    int x, found = 0;

    printf("Nhap vao phan tu can kiem tra: ");
    scanf("%d", &x);

    for (int i = 0; i < length; i++) {
        if (arr[i] == x) {
            printf("Phan tu %d ton tai trong mang tai vi tri: %d\n", x, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", x);
    }

    return 0;
}


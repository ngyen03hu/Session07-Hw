#include <stdio.h>

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
   if (n <= 0 || n > 100) { 
        printf("So phan tu khong hop le! (0 < n <= 100)\n");
        return 1;
    }
    int arr[100];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Cac phan tu cua mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

#define MAKS 100 // Ubah sesuai kebutuhan
int main() {
    int n;
    printf("Masukkan jumlah data (n): ");
    scanf("%d", &n);

    int arr[MAKS];

    if (n <= MAKS) {
        // Mengisi array dengan n data
        for (int i = 0; i < n; i++) {
            printf("Masukkan data ke-%d: ", i + 1);
            scanf("%d", &arr[i]);
        }

        // Mencari nilai terbesar dalam array
        int max = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        printf("Nilai terbesar dalam array: %d\n", max);
    } else {
        printf("Jumlah data (n) melebihi maksimum yang diizinkan (MAKS).\n");
    }

    return 0;
}

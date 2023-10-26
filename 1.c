#include <stdio.h>

int main() {
    int n; // Jumlah elemen dalam array
    printf("Masukkan jumlah elemen array: ");
    scanf("%d", &n);

    // Deklarasi array of int dengan n elemen
    int arr[n];

    // Mengisi array
    for (int i = 0; i < n; i++) {
        printf("Masukkan nilai untuk elemen ke-%d: ", i);
        scanf("%d", &arr[i]);
    }

    // Menampilkan isi array
    printf("Isi array:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

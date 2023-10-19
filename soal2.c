#include <stdio.h>

// Fungsi untuk menghitung faktorial
int faktorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

// Fungsi untuk menghitung permutasi
int permutasi(int n, int r) {
    if (n >= r) {
        return faktorial(n) / faktorial(n - r);
    } else {
        return 0; // Jika n < r, permutasinya tidak valid
    }
}

// Fungsi untuk menghitung kombinasi
int kombinasi(int n, int r) {
    if (n >= r) {
        return faktorial(n) / (faktorial(r) * faktorial(n - r));
    } else {
        return 0; // Jika n < r, kombinasinya tidak valid
    }
}

int main() {
    int n, r;
    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    printf("Masukkan nilai r: ");
    scanf("%d", &r);

    if (n < 0 || r < 0) {
        printf("Masukkan nilai n dan r yang non-negatif.\n");
    } else {
        int hasilPermutasi = permutasi(n, r);
        int hasilKombinasi = kombinasi(n, r);

        printf("Permutasi = %d\n", hasilPermutasi);
        printf("Kombinasi = %d\n", hasilKombinasi);
    }

    return 0;
}

#include <stdio.h>

// Prototipe fungsi faktorial
long int faktorial(int n);

int main() {
    int n;
    long int hasil;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    // Memanggil fungsi faktorial
    hasil = faktorial(n);

    printf("Hasil faktorialnya = %ld\n", hasil);

    return 0;
}

// Definisi fungsi faktorial
long int faktorial(int n) {
    if (n < 0) {
        // Faktorial tidak terdefinisi untuk nilai negatif
        return -1;
    }
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

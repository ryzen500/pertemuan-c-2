#include <stdio.h>

// Prototipe fungsi
int ganjil(int bilangan);

int main() {
    int bilangan;

    printf("Masukkan sebuah bilangan bulat: ");
    scanf("%d", &bilangan);

    // Memanggil fungsi ganjil() dan menampilkan pesan sesuai hasilnya
    if (ganjil(bilangan) == 1) {
        printf("Bilangan tersebut adalah ganjil.\n");
    } else {
        printf("Bilangan tersebut bukan ganjil.\n");
    }

    return 0;
}

// Definisi fungsi ganjil()
int ganjil(int bilangan) {
    if (bilangan % 2 == 1) {
        return 1; // Bilangan ganjil
    } else {
        return 0; // Bukan bilangan ganjil
    }
}

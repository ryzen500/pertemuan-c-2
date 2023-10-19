#include <stdio.h>

// Prototipe fungsi
int cariBilanganTerbesar(int bilangan1, int bilangan2);

int main() {
    int bilangan1, bilangan2;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bilangan1);

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &bilangan2);

    // Memanggil fungsi untuk mencari bilangan terbesar
    int hasil = cariBilanganTerbesar(bilangan1, bilangan2);

    printf("Bilangan terbesar adalah: %d\n", hasil);

    return 0;
}

// Fungsi untuk mencari bilangan terbesar
int cariBilanganTerbesar(int bilangan1, int bilangan2) {
    if (bilangan1 > bilangan2) {
        return bilangan1;
    } else {
        return bilangan2;
    }
}

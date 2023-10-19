#include <stdio.h>

// Fungsi untuk mengubah dua bilangan masukan dengan pass by reference
void naikkanDuaBilangan(int *bilangan1, int *bilangan2) {
    *bilangan1 += 2;
    *bilangan2 += 2;
}

int main() {
    int bilangan1, bilangan2;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bilangan1);

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &bilangan2);

    // Memanggil fungsi untuk mengubah bilangan
    naikkanDuaBilangan(&bilangan1, &bilangan2);

    printf("Bilangan pertama setelah diubah: %d\n", bilangan1);
    printf("Bilangan kedua setelah diubah: %d\n", bilangan2);

    return 0;
}

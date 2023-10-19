#include <stdio.h>

// Fungsi untuk menentukan apakah sebuah bilangan prima atau bukan
int isPrime(int n) {
    if (n <= 1) {
        return 0; // Angka negatif dan 1 bukan bilangan prima
    }
    if (n <= 3) {
        return 1; // 2 dan 3 adalah bilangan prima
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return 0; // Bilangan kelipatan 2 atau 3 bukan bilangan prima
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0; // Bilangan kelipatan i atau i + 2 bukan bilangan prima
        }
    }
    return 1; // Jika tidak ada faktor yang ditemukan, bilangan tersebut adalah bilangan prima
}

int main() {
    int n;
    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d adalah bilangan prima.\n", n);
    } else {
        printf("%d bukan bilangan prima.\n", n);
    }

    return 0;
}

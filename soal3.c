#include <stdio.h>
#include <string.h>

// Definisi dari tipe data struct untuk menyimpan informasi harga ayam
struct HargaAyam {
    char kode;   // Kode jenis ayam (D, P, S)
    char jenis[10]; // Nama jenis ayam (Dada, Paha, Sayap)
    int harga;   // Harga per item
};

// Fungsi untuk menghitung total pembelian dengan pajak
float hitungTotal(float harga, int jumlah) {
    float total = harga * jumlah;
    return total + (total * 0.1);  // Pajak sebesar 10%
}

int main() {
    // Inisialisasi daftar harga ayam
    struct HargaAyam daftarHarga[] = {
        {'D', "Dada", 5000},
        {'P', "Paha", 4000},
        {'S', "Sayap", 3000}
    };

    // Deklarasi variabel
    char kodePembelian;
    int jumlahPembelian;

    // Menampilkan daftar harga ayam
    printf("Daftar Harga Ayam:\n");
    printf("Kode\tJenis\tHarga\n");
    for (int i = 0; i < sizeof(daftarHarga) / sizeof(daftarHarga[0]); i++) {
        printf("%c\t%s\tRp. %d,-\n", daftarHarga[i].kode, daftarHarga[i].jenis, daftarHarga[i].harga);
    }

    // Meminta input dari pembeli
    printf("\nMasukkan kode ayam yang dibeli (D/P/S): ");
    scanf(" %c", &kodePembelian);
    printf("Masukkan jumlah ayam yang dibeli: ");
    scanf("%d", &jumlahPembelian);

    // Mencari harga ayam berdasarkan kode pembelian
    float hargaAyam = 0;
    for (int i = 0; i < sizeof(daftarHarga) / sizeof(daftarHarga[0]); i++) {
        if (daftarHarga[i].kode == kodePembelian) {
            hargaAyam = daftarHarga[i].harga;
            break;
        }
    }

    // Menampilkan total pembelian dengan pajak
    printf("\nTotal Pembelian: Rp. %.2f\n", hitungTotal(hargaAyam, jumlahPembelian));

    return 0;
}

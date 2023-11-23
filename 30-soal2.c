#include <stdio.h>
#include <string.h>

// Struktur untuk menyimpan data pembelian
struct Pembelian {
    char ukuran[10];
    int jumlah;
    int harga;
};

// Inisialisasi harga baju per potong
int hargaBaju[] = {36000, 43000, 62000};

// Fungsi untuk menghitung diskon
int hitungDiskon(int jumlah) {
    if (jumlah > 10) {
        return 20;  // Diskon 20% jika lebih dari 10 potong
    } else {
        return 0;   // Tidak ada diskon jika 10 potong atau kurang
    }
}

// Fungsi untuk menghitung pajak
int hitungPajak(int harga, int diskon) {
    return (int)(0.1 * (harga - diskon));
}

// Fungsi untuk menginput data pembelian
void input(struct Pembelian pembelian[], int n) {
    int i;
    for (i = 0; i < n; ++i) {
        printf("Masukkan data pembelian baju ke-%d:\n", i + 1);
        printf("Ukuran (S/M/L): ");
        scanf("%s", pembelian[i].ukuran);
        printf("Jumlah potong: ");
        scanf("%d", &pembelian[i].jumlah);
        printf("\n");
    }
}

// Fungsi untuk menampilkan nota pembelian
void nota(const struct Pembelian pembelian[], int n) {
    int i;
    int totalHarga = 0;

    printf("NOTA PEMBELIAN\n");
    printf("--------------------------------------------------------\n");
    printf("No\tUkuran\t\tJumlah\tHarga\t\tDiskon\tPajak\tTotal Harga\n");
    printf("--------------------------------------------------------\n");

    for (i = 0; i < n; ++i) {
        int ukuranIndex;
        if (strcmp(pembelian[i].ukuran, "S") == 0) {
            ukuranIndex = 0;
        } else if (strcmp(pembelian[i].ukuran, "M") == 0) {
            ukuranIndex = 1;
        } else if (strcmp(pembelian[i].ukuran, "L") == 0) {
            ukuranIndex = 2;
        } else {
            printf("Ukuran tidak valid.\n");
            return;
        }

        int harga = pembelian[i].jumlah * hargaBaju[ukuranIndex];
        int diskon = (harga * hitungDiskon(pembelian[i].jumlah)) / 100;
        int pajak = hitungPajak(harga, diskon);
        int totalHargaPotongan = harga - diskon + pajak;

        totalHarga += totalHargaPotongan;

        printf("%d\t%s\t\t%d\tRp. %d\tRp. %d\tRp. %d\tRp. %d\n", i + 1,
               pembelian[i].ukuran, pembelian[i].jumlah, harga, diskon, pajak,
               totalHargaPotongan);
    }

    printf("--------------------------------------------------------\n");
    printf("\t\t\t\t\tTotal Harga: Rp. %d\n", totalHarga);
}

int main() {
    int n;

    printf("Masukkan jumlah baju yang akan dibeli: ");
    scanf("%d", &n);

    struct Pembelian dataPembelian[n];

    // Memanggil fungsi input untuk mengisi data pembelian
    input(dataPembelian, n);

    // Memanggil fungsi nota untuk menampilkan nota pembelian
    nota(dataPembelian, n);

    return 0;
}

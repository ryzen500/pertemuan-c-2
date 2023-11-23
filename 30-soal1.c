#include <stdio.h>

// Struktur untuk menyimpan data mahasiswa
struct Mahasiswa {
    int nrp;
    char nama[50];
    float nilaiTugas;
    float nilaiUTS;
    float nilaiUAS;
    float nilaiAkhir;
    char grade;
};

// Fungsi untuk mengambil input data mahasiswa
void input(struct Mahasiswa mahasiswa[], int n) {
    int i;
    for (i = 0; i < n; ++i) {
        printf("Data Mahasiswa ke-%d\n", i + 1);
        printf("NRP: ");
        scanf("%d", &mahasiswa[i].nrp);
        printf("Nama: ");
        scanf(" %[^\n]s", mahasiswa[i].nama);
        printf("Nilai Tugas: ");
        scanf("%f", &mahasiswa[i].nilaiTugas);
        printf("Nilai UTS: ");
        scanf("%f", &mahasiswa[i].nilaiUTS);
        printf("Nilai UAS: ");
        scanf("%f", &mahasiswa[i].nilaiUAS);

        // Menghitung nilai akhir
        mahasiswa[i].nilaiAkhir = 0.2 * mahasiswa[i].nilaiTugas +
                                  0.4 * mahasiswa[i].nilaiUTS +
                                  0.4 * mahasiswa[i].nilaiUAS;

        // Menentukan grade
        if (mahasiswa[i].nilaiAkhir >= 80) {
            mahasiswa[i].grade = 'A';
        } else if (mahasiswa[i].nilaiAkhir >= 70) {
            mahasiswa[i].grade = 'B';
        } else if (mahasiswa[i].nilaiAkhir >= 60) {
            mahasiswa[i].grade = 'C';
        } else if (mahasiswa[i].nilaiAkhir >= 50) {
            mahasiswa[i].grade = 'D';
        } else {
            mahasiswa[i].grade = 'E';
        }
        printf("\n");
    }
}

// Fungsi untuk menampilkan data dalam bentuk tabel
void tampil(const struct Mahasiswa mahasiswa[], int n) {
    int i;
    printf("%-4s%-8s%-20s%-12s%-12s%-12s%-12s%-8s\n", "No", "NRP", "Nama Mhs", "Nilai Tugas", "Nilai UTS", "Nilai UAS", "Nilai Akhir", "Grade");

    for (i = 0; i < n; ++i) {
        printf("%-4d%-8d%-20s%-12.2f%-12.2f%-12.2f%-12.2f%-8c\n",
               i + 1, mahasiswa[i].nrp, mahasiswa[i].nama,
               mahasiswa[i].nilaiTugas, mahasiswa[i].nilaiUTS,
               mahasiswa[i].nilaiUAS, mahasiswa[i].nilaiAkhir,
               mahasiswa[i].grade);
    }
}

int main() {
    int n;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);

    struct Mahasiswa dataMahasiswa[n];

    // Memanggil fungsi input untuk mengisi data mahasiswa
    input(dataMahasiswa, n);

    // Memanggil fungsi tampil untuk menampilkan data mahasiswa
    tampil(dataMahasiswa, n);

    return 0;
}

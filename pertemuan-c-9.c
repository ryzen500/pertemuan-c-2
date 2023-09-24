#include <stdio.h>

void soal1(){
    
      int n, m;
    
    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Masukkan n yang lebih besar dari 0.\n");
        return 1; // Keluar dengan kode kesalahan
    }
    
    m = 1; // Inisialisasi m dengan bilangan ganjil pertama

    for (int i = 1; i <= n; i++) {
        printf("%d ", m);
        m += 2; // Melanjutkan ke bilangan ganjil berikutnya
    }
    
    printf("\n");
  
}

void soal2(){
     int n, sum = 0;
    
    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Masukkan bilangan bulat positif atau nol.\n");
        return 1; // Keluar dengan kode kesalahan
    }
    
    printf("%d = ", n);
    
    for (int i = n; i >= 1; i--) {
        printf("%d", i);
        sum += i;
        
        if (i > 1) {
            printf(" + ");
        }
    }
    
    printf(" = %d\n", sum);
}

void soal3(){
       char ch;

    printf("Mencetak karakter dari Z sampai A dalam baris-baris yang terpisah:\n");

    for (ch = 'Z'; ch >= 'A'; ch--) {
        printf("%c\n", ch);
    }
}

void soal4(){
    int n;
    
    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    
    printf("Output: ");
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            printf("%d", i);
        } else {
            printf("-%d", i);
        }
        
        if (i < n) {
            printf(" ");
        }
    }
    
    printf("\n");

}

void soal5(){
     int jumlah_matkul;
    printf("Masukkan jumlah mata kuliah: ");
    scanf("%d", &jumlah_matkul);

    double total_nilai_jam = 0;
    double total_jam = 0;

    for (int i = 1; i <= jumlah_matkul; i++) {
        char nilai;
        int jam;
        
        printf("Nilai Mata Kuliah %d: ", i);
        scanf(" %c", &nilai); // Menggunakan spasi sebelum %c untuk menghindari newline
        printf("Jumlah jam Mata Kuliah %d: ", i);
        scanf("%d", &jam);

        double nilai_angka;

        // Konversi nilai huruf ke angka
        switch (nilai) {
            case 'A':
                nilai_angka = 4.0;
                break;
            case 'B':
                nilai_angka = 3.0;
                break;
            case 'C':
                nilai_angka = 2.0;
                break;
            case 'D':
                nilai_angka = 1.0;
                break;
            case 'E':
                nilai_angka = 0.0;
                break;
            default:
                printf("Nilai huruf tidak valid.\n");
                return 1; // Keluar dengan kode kesalahan
        }

        total_nilai_jam += nilai_angka * jam;
        total_jam += jam;
    }

    double ips = total_nilai_jam / total_jam;

    printf("Indeks Prestasi Semester: %.2lf\n", ips);

}

int main() {
    soal5();
    return 0;
}

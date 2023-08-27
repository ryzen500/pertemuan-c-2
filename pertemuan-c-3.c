#include <stdio.h>

int soal1() {
    double uang_dolar, uang_rupiah;
    
    // Meminta pengguna memasukkan jumlah uang dalam dolar AS
    printf("Masukkan jumlah uang dalam dolar AS: ");
    scanf("%lf", &uang_dolar);
    
    // Melakukan konversi ke rupiah
    uang_rupiah = uang_dolar * 11090.0; // Menggunakan tipe data double untuk presisi desimal
    
    // Menampilkan hasil konversi
    printf("%.2lf dolar AS setara dengan %.2lf rupiah\n", uang_dolar, uang_rupiah);
    
    // return 0;
}

int soal2(){
    int jml_uang, ratusanribu, limapuluhribu, duapuluhribu, sepuluhribu, limaribu, duaribu, seribu;

    // Meminta pengguna memasukkan jumlah uang dalam rupiah
    printf("Masukkan jumlah uang dalam rupiah: ");
    scanf("%d", &jml_uang);

    // Menghitung pecahan-pecahan yang dibutuhkan
    ratusanribu = jml_uang / 100000;
    jml_uang %= 100000;

    limapuluhribu = jml_uang / 50000;
    jml_uang %= 50000;

    duapuluhribu = jml_uang / 20000;
    jml_uang %= 20000;

    sepuluhribu = jml_uang / 10000;
    jml_uang %= 10000;

    limaribu = jml_uang / 5000;
    jml_uang %= 5000;

    duaribu = jml_uang / 2000;
    jml_uang %= 2000;

    seribu = jml_uang / 1000;

    // Menampilkan hasil
    printf("%d Lembar 100000\n", ratusanribu);
    printf("%d Lembar 50000\n", limapuluhribu);
    printf("%d Lembar 20000\n", duapuluhribu);
    printf("%d Lembar 10000\n", sepuluhribu);
    printf("%d Lembar 5000\n", limaribu);
    printf("%d Lembar 2000\n", duaribu);
    printf("%d Lembar 1000\n", seribu);

}

int soal3(){
     int a = 12, b = 2, c = 3, d = 4;

    printf("a %% b = %d\n", a % b);
    printf("a - c = %d\n", a - c);
    printf("a + b = %d\n", a + b);
    printf("a / d = %d\n", a / d);
    printf("a / d * d + a %% d = %d\n", a / d * d + a % d);
    printf("a %% d / d * a - c = %d\n", a % d / d * a - c);

}

int soal4(){
    float a, b, c;
    
    // Meminta pengguna memasukkan nilai a, b, dan c
    printf("Masukkan nilai a: ");
    scanf("%f", &a);
    
    printf("Masukkan nilai b: ");
    scanf("%f", &b);
    
    printf("Masukkan nilai c: ");
    scanf("%f", &c);

    // Menghitung diskriminan
    float diskriminan = b * b - 4 * a * c;

    // Menampilkan hasil diskriminan
    printf("Diskriminan = %.2f\n", diskriminan);

    
}

int main(){
    soal1();
    soal2();
    soal3();
    soal4();
    return 0;
}

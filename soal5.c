#include <stdio.h>

// Prototipe fungsi
float konversi(float suhu, char asal, char tuj);

int main() {
    float suhu;
    char asal, tuj;
    
    // Meminta masukan suhu, satuan asal, dan satuan tujuan dari pengguna
    printf("Masukkan suhu: ");
    scanf("%f", &suhu);
    
    printf("Masukkan satuan asal (C/F/R): ");
    scanf(" %c", &asal); // Menggunakan spasi sebelum %c untuk menghindari masalah input
    
    printf("Masukkan satuan tujuan (C/F/R): ");
    scanf(" %c", &tuj); // Menggunakan spasi sebelum %c untuk menghindari masalah input

    // Memanggil fungsi konversi() dan mencetak hasilnya
    float hasil = konversi(suhu, asal, tuj);
    printf("Hasil konversi: %.2f %c ke %.2f %c\n", suhu, asal, hasil, tuj);

    return 0;
}

// Definisi fungsi konversi()
float konversi(float suhu, char asal, char tuj) {
    if (asal == 'C' && tuj == 'F') {
        return (suhu * 9/5) + 32; // Celsius ke Fahrenheit
    } else if (asal == 'C' && tuj == 'R') {
        return suhu * 4/5; // Celsius ke Reamur
    } else if (asal == 'F' && tuj == 'C') {
        return (suhu - 32) * 5/9; // Fahrenheit ke Celsius
    } else if (asal == 'F' && tuj == 'R') {
        return (suhu - 32) * 4/9; // Fahrenheit ke Reamur
    } else if (asal == 'R' && tuj == 'C') {
        return suhu * 5/4; // Reamur ke Celsius
    } else if (asal == 'R' && tuj == 'F') {
        return (suhu * 9/4) + 32; // Reamur ke Fahrenheit
    } else {
        printf("Konversi tidak valid. Masukkan satuan asal dan tujuan yang valid (C/F/R).\n");
        return 0;
    }
}

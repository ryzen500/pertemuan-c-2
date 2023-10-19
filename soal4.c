#include <stdio.h>

// Prototipe fungsi
float radian(float derajat);

// Konstanta PI
#define PI 3.14159f

// Definisi fungsi radian()
float radian(float derajat) {
    return derajat * (PI / 180.0f);
}

int main() {
    float derajat;
    
    // Meminta masukan derajat dari pengguna
    printf("Masukkan besaran sudut dalam derajat: ");
    scanf("%f", &derajat);

    // Memanggil fungsi radian() dan mencetak hasilnya
    float rad = radian(derajat);
    printf("Derajat dalam radian = %.2f\n", rad);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    double sudut_BAC, panjang_AB;
    
    // Menerima input sudut BAC dalam derajat
    printf("Masukkan besar sudut BAC (derajat): ");
    scanf("%lf", &sudut_BAC);
    
    // Menerima input panjang sisi AB dalam meter
    printf("Masukkan panjang sisi AB (meter): ");
    scanf("%lf", &panjang_AB);
    
    // Menghitung panjang sisi BC menggunakan trigonometri
    double sudut_BAC_radian = sudut_BAC * M_PI / 180.0; // Mengubah sudut ke radian
    double panjang_BC = panjang_AB * tan(sudut_BAC_radian);
    
    // Menampilkan panjang sisi BC
    printf("Panjang sisi BC (meter): %.2lf\n", panjang_BC);
    
    return 0;
}

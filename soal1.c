#include <stdio.h>

void input(int nilai[], int n) {
    printf("Masukkan %d bilangan:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nilai[i]);
    }
}

int findmax(int nilai[], int n) {
    int max = nilai[0];
    for (int i = 1; i < n; i++) {
        if (nilai[i] > max) {
            max = nilai[i];
        }
    }
    return max;
}

int main() {
    int n;
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    int nilai[n];

    input(nilai, n);
    int max = findmax(nilai, n); 
    
    printf("Nilai terbesar dalam array adalah: %d\n", max);

    return 0;
}

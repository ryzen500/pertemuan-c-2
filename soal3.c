#include <stdio.h>

#define MAKS 2 // Konstanta untuk ordo matriks

int main() {
    int ordo;
    printf("Masukkan ordo matriks (biasanya 2): ");
    scanf("%d", &ordo);

    int A[MAKS][MAKS];
    int B[MAKS][MAKS];
    int C[MAKS][MAKS];

    printf("Masukkan matriks A:\n");
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Masukkan matriks B:\n");
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Penjumlahan matriks A dan B
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Tampilkan matriks A
    printf("Matriks A:\n");
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Tampilkan matriks B
    printf("Matriks B:\n");
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Tampilkan matriks C (hasil penjumlahan)
    printf("Matriks C (A + B):\n");
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

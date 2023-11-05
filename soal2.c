#include <stdio.h>

int main() {
    
    int data_siswa[4][4];

    for (int i = 0; i < 4; i++) {
        printf("Masukkan data untuk siswa ke-%d:\n", i + 1);
        data_siswa[i][0] = i + 1;

        printf("Nilai BAHASA: ");
        scanf("%d", &data_siswa[i][1]);

        printf("Nilai MATEMATIKA: ");
        scanf("%d", &data_siswa[i][2]);

        printf("Nilai DIGITAL: ");
        scanf("%d", &data_siswa[i][3]);
    }

    printf("No. Mhs   Rata-rata\n");

    for (int i = 0; i < 4; i++) {
        int no_mhs = data_siswa[i][0];
        int total = 0;

        for (int j = 1; j <= 3; j++) {
            total += data_siswa[i][j];
        }

        double rata_rata = (double)total / 3;
        printf("%d\t%.2lf\n", no_mhs, rata_rata);
    }

    return 0;
}

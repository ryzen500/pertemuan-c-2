// Online C compiler to run C program online
#include <stdio.h>

#define MAKS 20

struct date { //definisi dari tipe date
    int month;
    int day;
    int year;
};

struct person { //definisi dari tipe person
    char name[30];
    struct date birthday;
};

int main() {
    //deklarasi dari variabel array student
    struct person student[MAKS];

    for (int i = 0; i < MAKS; i++) {
        printf("Name : ");
        fgets(student[i].name, sizeof student[i].name, stdin);

        printf("Birthday (mm-dd-yyyy): ");
        scanf("%d-%d-%d", &student[i].birthday.month,
                            &student[i].birthday.day,
                            &student[i].birthday.year);

        while (getchar() != '\n'); // Membersihkan sisa karakter dalam buffer stdin
        printf("\n");
    }

    return 0;
}

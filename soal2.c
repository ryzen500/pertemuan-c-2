#include <stdio.h>

// Definisi dari tipe date
struct date {
    int month;
    int day;
    int year;
};

// Fungsi untuk mengecek apakah suatu tahun adalah tahun kabisat
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Fungsi untuk mendapatkan jumlah hari dalam suatu bulan
int daysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return -1; // Jika bulan tidak valid
    }
}

// Fungsi untuk mendapatkan tanggal besok dari suatu tanggal
struct date getNextDate(struct date currentDate) {
    struct date nextDate = currentDate;

    // Cek apakah hari ini adalah akhir bulan
    if (currentDate.day == daysInMonth(currentDate.month, currentDate.year)) {
        nextDate.day = 1;

        // Cek apakah hari ini adalah akhir tahun
        if (currentDate.month == 12) {
            nextDate.month = 1;
            nextDate.year++;
        } else {
            nextDate.month++;
        }
    } else {
        nextDate.day++;
    }

    return nextDate;
}

int main() {
    // Mendapatkan tanggal hari ini (anda bisa menyesuaikan dengan tanggal sekarang)
    struct date today = {11, 23, 2023}; // contoh: 23 November 2023

    // Mendapatkan tanggal besok
    struct date tomorrow = getNextDate(today);

    // Menampilkan hasil
    printf("Today's date: %d-%d-%d\n", today.month, today.day, today.year);
    printf("Tomorrow's date: %d-%d-%d\n", tomorrow.month, tomorrow.day, tomorrow.year);

    return 0;
}

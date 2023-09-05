// Online C compiler to run C program online
#include <stdio.h>


void soal1(){
    
    int suhu; 
    
    printf("Inputan Suhu yang dimasukkan Adalah = ");
    scanf("%d", &suhu);
    
    if(suhu < 0 ){
        printf("Benda berbentuk padat");
    }else if(suhu >= 0 && suhu <= 100){
           printf("Benda berbentuk Cair");
    }else{
            printf("Benda berbentuk Gas");
    }
    
}

void soal2(){
    int test_psikologi, test_akademik,test_keterampilan,rata_rata;

    // Proses Input 
    printf("Masukkan Nilai Test Psikologi Anda Adalah = ");
    scanf("%d",&test_psikologi);
    
    printf("Masukkan Nilai Test Akademik Anda Adalah = ");
    scanf("%d",&test_akademik);
        
    printf("Masukkan Nilai Test Keterampilan Anda Adalah = ");
    scanf("%d",&test_keterampilan);
    
    // Perhiitungan Rata-Rata 
    rata_rata = (test_psikologi + test_akademik + test_keterampilan / 3);
    
    // Nested IF 
    if(rata_rata >= 75 ){
        
        if(test_akademik > test_psikologi && test_keterampilan){
            
    printf("Ditempatkan Bagian administrasi ");
        }else if(test_keterampilan > test_psikologi && test_akademik){
            
    printf("Ditempatkan Bagian Produksi ");
        }else{
            
    printf("Ditempatkan Bagian Pemasaran ");
        }
    }else{
        printf("Maaf Anda belum diterima");
    }
    
    
    
}


void soal3(){
    int bilA, bilB,key,hasil;
    
    // Bikin Tampilan 
    
    printf("Masukkan Bilangan Pertama = ");
    scanf("%d", &bilA);
    
    // Bikin Tampilan 
    
    printf("Masukkan Bilangan Kedua = ");
    scanf("%d", &bilB);
    

    printf("Menu Matematika");    
    
    printf("1.Penjumlahan \n");    
    
    printf("2.Pengurangan \n");    
    
    printf("3.Pembagian \n");    
    
    printf("4.Perkalian \n");    
    
    printf("Masukkan Pilihan Anda : ");    
    scanf("%d", &key);
    
    // Pengkondisian  coba pake switch 
    switch(key){
        case 1 : 
        hasil = bilA + bilB;
        printf("Hasil Operasi adalah = %d ", hasil);
        break;
        
        case 2 : 
        hasil = bilA - bilB;
         printf("Hasil Operasi adalah = %d ", hasil);
        break;
        
        case 3 : 
        hasil = bilA / bilB;
        
         printf("Hasil Operasi adalah = %d ", hasil);
        break;
        
        case 4 : 
        hasil = bilA * bilB;
         printf("Hasil Operasi adalah = %d ", hasil);
        break;
        
        default : 
        printf("Harap Pilih Perhitungan yang sesuai ");
    }
     //    return 0;
    
}

void soal4(){
    int nilai_angka;
    
    
     printf("Inputan nilai Angka yang dimasukkan Adalah = ");
    scanf("%d", &nilai_angka);
    
    if(nilai_angka <=40){
        
     printf("Inputan Hasil yang ditampilkan Adalah E  ");
    }else if (nilai_angka > 40 && nilai_angka <=55  ){
        
     printf("Inputan Hasil yang ditampilkan Adalah D  ");
    }else if(nilai_angka > 55 && nilai_angka <=60  ){
        
     printf("Inputan Hasil yang ditampilkan Adalah C  ");
    }else if(nilai_angka > 60 && nilai_angka <= 80){
        
     printf("Inputan Hasil yang ditampilkan Adalah B  ");
    }else if(nilai_angka > 80 && nilai_angka <= 100){
        
     printf("Inputan Hasil yang ditampilkan Adalah A  ");
    
    }
    
}


void soal5(){
    int nilai_hari;
    
    
     printf("Inputan nilai Angka Hari yang dimasukkan Adalah = ");
    scanf("%d", &nilai_hari);
    
    if(nilai_hari == 1){
        
     printf("Minggu ");
    }else if (nilai_hari == 2){
        printf("Senin");
    }else if(nilai_hari == 3){
        printf("Selasa");
    }else if(nilai_hari == 4){
        
        printf("Rabu");
    }else if(nilai_hari == 5){
        printf("Kamis");
    }else if(nilai_hari == 6){
        printf("Jumat");
    }else if(nilai_hari == 7){
        printf("Sabtu");
    }else{
        printf("Hari tidak valid");
    }
    
}

int main() {
    // Write C code here
    soal5();

    return 0;
}

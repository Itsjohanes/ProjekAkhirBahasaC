#include <stdio.h>

// Fungsi untuk menghitung luas persegi panjang
float hitungLuas(float p, float l) {
    return p * l;
}

// Fungsi untuk menghitung keliling persegi panjang
float hitungKeliling(float p, float l) {
    return 2 * (p + l);
}

int main() {
    float panjang, lebar;
    int pilihan;
    char ulang;
    
    do {
        // Menampilkan menu
        printf("\nPilih operasi:\n");
        printf("1. Hitung Luas\n");
        printf("2. Hitung Keliling\n");
        printf("Masukkan pilihan (1/2): ");
        scanf("%d", &pilihan);
        
        // Input panjang dan lebar
        printf("Masukkan panjang: ");
        scanf("%f", &panjang);
        printf("Masukkan lebar: ");
        scanf("%f", &lebar);
        
        // Percabangan untuk memilih operasi
        if (pilihan == 1) {
            printf("Luas: %.2f\n", hitungLuas(panjang, lebar));
        } else if (pilihan == 2) {
            printf("Keliling: %.2f\n", hitungKeliling(panjang, lebar));
        } else {
            printf("Pilihan tidak valid.\n");
        }
        
        // Menanyakan apakah ingin mengulang
        printf("Ingin menghitung lagi? (y/n): ");
        scanf(" %c", &ulang);
    } while (ulang == 'y' || ulang == 'Y');
    
    printf("Terima kasih telah menggunakan program ini!\n");
    return 0;
}

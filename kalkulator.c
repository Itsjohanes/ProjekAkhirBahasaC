#include <stdio.h>


void tampilkanMenu() {
	
    printf("\n===== KALKULATOR SEDERHANA =====\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Keluar\n");
    printf("Pilih operasi (1-5): ");
}


double hitung(double a, double b, char operator) {
	if(operator == '+'){
		return a+b;
	}else if(operator == '-'){
		return a-b;
	}else if(operator == '*'){
		return a*b;
	}else if(operator == '/' && b != 0){
		return a/b;
	}else{
		return 0;
	}
    
}

int main() {
    int pilihan;
    double angka1, angka2, hasil;
    char op;
    
    do {
        tampilkanMenu();
        scanf("%d", &pilihan);
        
        if (pilihan >= 1 && pilihan <= 4) {
            printf("Masukkan angka pertama: ");
            scanf("%lf", &angka1);
            printf("Masukkan angka kedua: ");
            scanf("%lf", &angka2);
            
            switch (pilihan) {
                case 1: 
					op = '+'; 
					break;
                case 2: 
					op = '-'; 
					break;
                case 3: 
					op = '*'; 
					break;
                case 4: 
					op = '/'; 
					break;
            }
            
            hasil = hitung(angka1, angka2, op);
            printf("%f", hasil);
        } else if (pilihan != 5) {
            printf("Pilihan tidak valid! Silakan coba lagi.\n");
        }
    } while (pilihan != 5);
    
    printf("Terima kasih telah menggunakan kalkulator ini!\n");
    return 0;
}

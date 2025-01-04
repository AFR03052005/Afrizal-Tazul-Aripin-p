#include <stdio.h>
int main() {
    int kode;
    char jenis;
    float harga, diskon, hargaSetelahDiskon;
    // Input kode, jenis, dan harga
    printf("Masukkan kode barang: ");
    scanf("%d", &kode);
    
    printf("Masukkan jenis barang (A/B/C): ");
    scanf(" %c", &jenis);
    
    printf("Masukkan harga barang: ");
    scanf("%f", &harga);
    // Menentukan diskon berdasarkan jenis barang
    if (jenis == 'A' || jenis == 'a') {
        diskon = 0.10;
    } else if (jenis == 'B' || jenis == 'b') {
        diskon = 0.15;
    } else if (jenis == 'C' || jenis == 'c') {
        diskon = 0.20;
    } else {
        printf("Jenis barang tidak valid.\n");
        return 1;
    }
    // Menghitung harga setelah diskon
    hargaSetelahDiskon = harga - (harga * diskon);
    // Menampilkan hasil
    printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah didiskon = %.2f\n", 
           jenis, diskon * 100, hargaSetelahDiskon);
    return 0;
}

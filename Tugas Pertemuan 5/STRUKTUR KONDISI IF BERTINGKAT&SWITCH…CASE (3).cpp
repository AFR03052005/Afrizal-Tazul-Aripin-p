#include <stdio.h>
int hitungLamaParkir(int jamMasuk, int jamKeluar) {
    if (jamKeluar >= jamMasuk) {
        return jamKeluar - jamMasuk;
    } else {
        return (12 - jamMasuk) + jamKeluar;
    }
}
int hitungBiayaParkir(int lama) {
    int biaya;
    if (lama <= 2) {
        biaya = 2000;  // 2 jam pertama
    } else {
        biaya = 2000 + (lama - 2) * 500;  // 2 jam pertama 2000, sisanya 500 per jam
    }
    return biaya;
}
int main() {
    int jamMasuk, jamKeluar, lama, biaya;
    // Input jam masuk dan jam keluar
    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jamMasuk);
    printf("Masukkan jam keluar (1-12): ");
    scanf("%d", &jamKeluar);
    // Hitung lama parkir
    lama = hitungLamaParkir(jamMasuk, jamKeluar);
    // Hitung biaya parkir
    biaya = hitungBiayaParkir(lama);
    // Tampilkan hasil
    printf("Lama parkir = %d jam\n", lama);
    printf("Biaya parkir = %d\n", biaya);
    return 0;
}


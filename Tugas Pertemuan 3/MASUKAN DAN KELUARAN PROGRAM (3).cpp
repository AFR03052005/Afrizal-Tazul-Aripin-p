#include <stdio.h>
#include <math.h>
// Fungsi untuk menghitung keliling segitiga
float hitung_keliling(float a, float b, float c) {
    return a + b + c;
}
// Fungsi untuk menghitung luas segitiga
float hitung_luas(float a, float b, float c) {
    // Menggunakan rumus Heron
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
int main() {
    float alas, tinggi, miring;
    // Input panjang alas dan tinggi segitiga
    printf("Masukkan panjang alas segitiga (dalam cm): ");
    scanf("%f", &alas);
    printf("Masukkan tinggi segitiga (dalam cm): ");
    scanf("%f", &tinggi);
    // Menghitung panjang sisi miring menggunakan teorema Pythagoras
    miring = sqrt(alas * alas + tinggi * tinggi);
    // Menghitung keliling dan luas segitiga
    float keliling = hitung_keliling(alas, tinggi, miring);
    float luas = hitung_luas(alas, tinggi, miring);
    // Menampilkan hasil
    printf("Panjang sisi miring: %.2f cm\n", miring);
    printf("Keliling segitiga: %.2f cm\n", keliling);
    printf("Luas segitiga: %.2f cm^2\n", luas);
    return 0;
}

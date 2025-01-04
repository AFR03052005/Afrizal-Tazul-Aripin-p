#include <stdio.h>
#include <math.h>
int main() {
        // Deklarasi variabel
        float alas, tinggi, miring;
        // Input nilai sisi alas dan sisi tinggi segitiga
        printf("Masukkan nilai sisi alas segitiga (dalam cm) ");
        scanf("%f", &alas);
        printf("Masukkan nilai sisi tinggi segitiga (dalam cm) ");
        scanf("%f", &tinggi);
        // Hitung nilai sisi miring segitiga menggunakan rumus phitagoras
        miring = sqrt(pow(alas, 2) + pow(tinggi, 2));
        // Tampilkan hasil
        printf("Nilai sisi miring segitiga: %.2f cm\n", miring);
        return 0;
}

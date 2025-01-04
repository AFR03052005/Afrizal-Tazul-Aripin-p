#include <stdio.h>
int main() {
        // Deklarasi variabel
        float celcius, fahrenheit, reamur;
        // Input nilai suhu dalam satuan Celcius
        printf("Masukkan nilai suhu dalam satuan celcius: ");
        scanf("%f", &celcius);
        // Hitung nilai suhu dalam satuan Fahrenheit
        fahrenheit = (celcius * 9/5) + 32;
        // Hitung nilai suhu dalam satuan  Reamur
        reamur = celcius * 4/5;
        // Tampilkan hasil
        printf("Nilai suhu dalam satuan Fahrenheit: %.2f°F\n", fahrenheit);
        printf("Nilai suhu dalam satuan Reamur: %.2f°R\n", reamur);
        return 0;
}

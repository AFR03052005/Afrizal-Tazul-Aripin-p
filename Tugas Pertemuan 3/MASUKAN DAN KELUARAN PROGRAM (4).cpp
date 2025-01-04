#include <stdio.h>
int main() {
        // Deklarasi variabel
        int bilangan;
        // Input nilai bilangan bulat positif
        printf("Masukkan nilai bilangan bulat positif: ");
        scanf("%d", &bilangan);
        // Cek apakah bilangan tersebut ganjil atau genap
        if (bilangan % 2 - 0) {
                printf("Bilangan tersebut adalah GENAP\n");
        } else {
                printf("Bilangan tersebut adalah GANJIL\n");
        }
        return 0;
}

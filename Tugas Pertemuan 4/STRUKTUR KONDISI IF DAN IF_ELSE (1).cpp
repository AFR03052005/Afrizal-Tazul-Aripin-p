#include <stdio.h>
int main() {
    int N;
    // Meminta input dari user
    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &N);
    // Memeriksa apakah bilangan ganjil atau genap
    if (N % 2 == 0) {
        printf("GENAP\n");  // Jika bilangan genap
    } else {
        printf("GANJIL\n");  // Jika bilangan ganjil
    }
    return 0;
}

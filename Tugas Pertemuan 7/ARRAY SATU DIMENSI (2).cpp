#include <stdio.h>

int main() {
    int A[11] = {0}; // Inisialisasi array A dengan 11 elemen diisi 0
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35}; // Data awal sesuai soal
    int i, j = 0; // j untuk indeks elemen genap di array A

    // Memproses data dan hanya menyimpan bilangan genap ke array A
    for (i = 0; i < 11; i++) {
        if (data[i] % 2 == 0) { // Memeriksa apakah data[i] genap
            A[j] = data[i];    // Simpan ke array A
            j++;               // Pindah ke indeks berikutnya di A
        }
    }

    // Menampilkan isi array A
    printf("Isi array A (hanya bilangan genap):\n");
    for (i = 0; i < 11; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}

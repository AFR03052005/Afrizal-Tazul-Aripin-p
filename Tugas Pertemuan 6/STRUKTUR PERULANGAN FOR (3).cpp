#include <stdio.h>

int main() {
	//inisialisasi variabel
	int i, nilai = 1;
	
	//Loop untuk mencetak deret
	for (i = 0; i < 11; i++) { // 11 elemen dari 1 hingga 1024
	printf("%d ", nilai);
	nilai *= 2; // Nilai berikutnya adalah kelipatan dua
	}
	
	// Pindah ke baris baru setelah mencetak deret
	printf("\n");
	
	return 0;
}

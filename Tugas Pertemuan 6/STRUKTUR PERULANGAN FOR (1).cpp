#include <stdio.h>

int main() {
	//Inisialisasi variabel
	int i;
	
	//Loop untuk mencetak deret
	for (i = 10; i <= 100; i += 10) {
		printf("%d ", i);
	}
	
	//Pindah ke baris baru setelah mencetak deret
	printf("\n");
	
	return 0;
}
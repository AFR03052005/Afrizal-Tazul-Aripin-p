#include <stdio.h>

int main() {
	//Inisialisasi variabel
	int i;
	
	//Loop untuk mencetak deret
	for (i = 100; i >= 55; i -= 5) {
		printf("%d ", i);
	}
	
	//Pindah ke baris baru setelah mencetak deret
	printf("\n");
	
	return 0;
}

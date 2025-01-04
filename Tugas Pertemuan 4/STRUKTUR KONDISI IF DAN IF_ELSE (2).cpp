#include <stdio.h>
int main() {
	int N;
	
	//Input nilai N
	printf("Masukkan nilai N: ");
	scanf("%d", &N);
	
	//Proses berdasarkan flowchart
	if (N > 50) {
		N = N + 10;
	} else {
		N = N - 25;
	}
	
	//Cetak nilai akhir N
	printf("Nilai akhir N: %d\n",N);
	
	return 0;
}

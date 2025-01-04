#include <stdio.h>

int main() {
	// Saldo awal
	double saldo = 1000000; // dalam rupiah
	
	// Bunga per bulan
	double bunga = 0.02; // 2%
	
	// Lama waktu dalam satu bulan
	int bulan = 10;
	
	// Menghitung saldo setelah 10 bulan
	for (int i = 0; i < bulan; i++) {
		saldo += saldo * bunga;
	}
	
	// Mencari hasil
	printf("Jumlah uang setelah %d bulan adalah Rp. %.2f\n", bulan, saldo);
	
	return 0;
}

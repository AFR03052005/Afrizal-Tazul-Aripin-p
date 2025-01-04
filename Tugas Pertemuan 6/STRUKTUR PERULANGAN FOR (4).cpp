#include <stdio.h>

int main() {
	//Kecepatan sepeda dalam meter per detik
	int kecepatan = 2; // meter /detik
	
	//Waktu bersepeda dalam detik
	int waktu = 100; // detik
	
	//Menghitung jarak tempuh
	int jarak = kecepatan * waktu;
	
	//Mencetak hasil
	printf("Jarak yang di tempuh setelah %d detik adalah %d meter.\n", waktu, jarak);
	
	return 0;
}

#include <stdio.h>
#define SIZE 11

int main() {
    // Initialize array with given values
    int A[SIZE] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int N;
    int found = 0;
    
    // Get input from user
    printf("Masukkan bilangan integer = ");
    scanf("%d", &N);
    
    // Print the array
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    
    // Search for N in array
    found = 0;  // Reset found flag
    for(int i = 0; i < SIZE; i++) {
        if(A[i] == N) {
            if(!found) {
                printf("ADA\n");
                printf("Lokasi bilangan yang sama: ");
                found = 1;
            }
            printf("%d ", i);
        }
    }
    
    // If number wasn't found
    if(!found) {
        printf("TIDAK ADA\n");
    } else {
        printf("\n");  // New line after printing locations
    }
    
    return 0;
}
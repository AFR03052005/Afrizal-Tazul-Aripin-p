#include <stdio.h>
#define SIZE 11
#define END_MARKER 999

int main() {
    // Initialize the array with zeros
    int A[SIZE] = {0};
    
    // Original data sequence
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    
    // Fill array consecutively with numbers greater than 9
    int j = 0;  // Index for array A
    for(int i = 0; data[i] != END_MARKER && j < SIZE; i++) {
        if(data[i] > 9) {
            A[j] = data[i];
            j++;
        }
    }
    
    // Print the array
    printf("A ");
    for(int i = 0; i < SIZE; i++) {
        if(A[i] != 0) {
            printf("%d ", A[i]);
        } else {
            printf("  "); // Print spaces for empty positions
        }
    }
    printf("\n");
    
    return 0;
}
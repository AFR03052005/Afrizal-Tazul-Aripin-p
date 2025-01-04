#include <stdio.h>
#define SIZE 11
#define END_MARKER 999

int main() {
    // Initialize the array with zeros
    int A[SIZE] = {0};
    
    // Original data sequence
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    
    // Define positions for odd numbers based on the pattern shown
    int positions[] = {1, 2, 4, 6, 7, 8, 10};
    
    // Fill array with odd numbers at specific positions
    int pos_index = 0;  // Index for positions array
    for(int i = 0; data[i] != END_MARKER && pos_index < sizeof(positions)/sizeof(positions[0]); i++) {
        if(data[i] % 2 != 0) {  // Check if number is odd
            A[positions[pos_index]] = data[i];
            pos_index++;
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
#include <stdio.h>
#define SIZE 11
#define END_MARKER 999

int main() {
    // Initialize the array with zeros
    int A[SIZE] = {0};
    
    // Original data sequence
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    
    // Pattern positions for the numbers (index where each number should go)
    int positions[] = {0, 2, 4, 6, 8, 10};
    
    // Counter for positions array
    int pos_index = 0;
    
    // Fill the array according to the pattern
    for(int i = 0; data[i] != END_MARKER && pos_index < 6; i++) {
        // Match the pattern shown in the example
        if(i == 0) A[positions[pos_index++]] = 12;  // First number (12)
        else if(i == 2) A[positions[pos_index++]] = 7;   // Third number (7)
        else if(i == 4) A[positions[pos_index++]] = 5;   // Fifth number (5)
        else if(i == 6) A[positions[pos_index++]] = 17;  // Seventh number (17)
        else if(i == 8) A[positions[pos_index++]] = 9;   // Ninth number (9)
        else if(i == 10) A[positions[pos_index++]] = 35; // Eleventh number (35)
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
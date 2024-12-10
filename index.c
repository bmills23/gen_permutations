#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

// Attempt to generate a fast program of time complexity O(n!) 

// Generates permutations of input array of strings

void gen_permutations(char* arr[], int length, int permutations);

int main() {
    
    char* arr[] = {"a", "b", "c"};
    int length = (sizeof(arr) / sizeof(arr[0]));
    int permutations = 1;

    for (int i = 1; i <= length; i++)
    {
        permutations *= i;
    }

    gen_permutations(arr, length, permutations);

    return 0;
}

void gen_permutations(char* arr[], int length, int permutations) {
    // 32-bit # to keep track of bits
    uint32_t x = 0;
    // To keep track of loops
    int i = 0;

    do {
        // Location of bit to manipulate
        int position = (*arr[i] % 32) - 1;
        x ^= (1 << position);
        i++;
    }
    while (i < length);    

    printf("x: %i\n", x);
    
    printf("length: %i\n", length);

    printf("Permutations: %i\n", permutations);
}
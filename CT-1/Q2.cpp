/*Q2: Merging Sorted Arrays
You are given three integer arrays:

A of size N (sorted in ascending order)
B of size M (sorted in ascending order)
C of size M+N (initially empty)
Write a C++ function that merges A and B into C such that C is sorted in ascending order, 
without using built-in sorting functions.

For example:
A = {2, 3, 5, 8, 10, 12}
B = {1, 5, 7, 9, 13}
Merged C = {1, 2, 3, 5, 5, 7, 8, 9, 10, 12, 13}*/

#include <iostream>

void mergeSortedArrays(int A[], int sizeA, int B[], int sizeB, int C[]) {
    int i = 0, j = 0, k = 0;

    // Merge A and B into C
    while (i < sizeA && j < sizeB) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    // Copy remaining elements from A
    while (i < sizeA) {
        C[k++] = A[i++];
    }

    // Copy remaining elements from B
    while (j < sizeB) {
        C[k++] = B[j++];
    }
}

int main() {
    int A[] = {2, 3, 5, 8, 10, 12};
    int B[] = {1, 5, 7, 9, 13};
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);
    int* C = new int[sizeA + sizeB];

    mergeSortedArrays(A, sizeA, B, sizeB, C);

    std::cout << "Merged Sorted Array: ";
    for (int i = 0; i < sizeA + sizeB; i++) {
        std::cout << C[i] << " ";
    }
    std::cout << std::endl;

    delete[] C;
    return 0;
}

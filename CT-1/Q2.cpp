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
    int sizeA, sizeB;

    std::cout << "Enter the size of array A: ";
    std::cin >> sizeA;
    int* A = new int[sizeA];
    std::cout << "Enter elements of array A (sorted in ascending order): ";
    for (int i = 0; i < sizeA; i++) {
        std::cin >> A[i];
    }

    std::cout << "Enter the size of array B: ";
    std::cin >> sizeB;
    int* B = new int[sizeB];
    std::cout << "Enter elements of array B (sorted in ascending order): ";
    for (int i = 0; i < sizeB; i++) {
        std::cin >> B[i];
    }

    int* C = new int[sizeA + sizeB];

    mergeSortedArrays(A, sizeA, B, sizeB, C);

    std::cout << "Merged Sorted Array: ";
    for (int i = 0; i < sizeA + sizeB; i++) {
        std::cout << C[i] << " ";
    }
    std::cout << std::endl;

    delete[] A;
    delete[] B;
    delete[] C;
    return 0;
}

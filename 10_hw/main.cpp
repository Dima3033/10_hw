#include <iostream>
using namespace std;

int main() {
    int M, N;
    cout << "Enter the size of array A: ";
    cin >> M;
    int* A = new int[M];
    cout << "Enter the elements of array A: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }
    cout << "Enter the size of array B: ";
    cin >> N;
    int* B = new int[N];
    cout << "Enter the elements of array B: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    int* C = new int[M + N]; // Third array of minimum possible size
    int index = 0;
    for (int i = 0; i < M; i++) {
        C[index] = A[i];
        index++;
    }
    for (int i = 0; i < N; i++) {
        C[index] = B[i];
        index++;
    }
    cout << "Elements of array C: " << endl;
    for (int i = 0; i < M + N; i++) {
        cout << C[i] << endl;
    }
    delete[] A; // free dynamically allocated memory
    delete[] B;
    delete[] C;
    return 0;
}

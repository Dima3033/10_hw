#include <iostream>
using namespace std;

int main() {
    int M, N;
    cout << "Size array A ";
    cin >> M;
    int* A = new int[M];
    cout << "Nums array A -> ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }
    cout << "Size array B -> ";
    cin >> N;
    int* B = new int[N];
    cout << "Nums array B -> ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    int* C = new int[M + N];
    int index = 0;
    for (int i = 0; i < M; i++) {
        bool found = false;
        for (int j = 0; j < index; j++) {
            if (C[j] == A[i]) {
                found = true;
                break;
            }
        }
        if (!found) {
            C[index] = A[i];
            index++;
        }
    }
    for (int i = 0; i < N; i++) {
        bool found = false;
        for (int j = 0; j < index; j++) {
            if (C[j] == B[i]) {
                found = true;
                break;
            }
        }
        if (!found) {
            C[index] = B[i];
            index++;
        }
    }
    cout << "Res " << endl;
    for (int i = 0; i < index; i++) {
        cout << C[i] << endl;
    }
    delete[] A,B,C; 
    return 0;
}

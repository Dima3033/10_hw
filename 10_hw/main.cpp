#include <iostream>
using namespace std;
int main() {
    int M, choice;
    cout << "Enter the size -> ";
    cin >> M;
    if (M < 0) {
        cout << "Error";
        return 1;
    }
    int* A = new int[M];
    cout << "Enter " << M << " Nums ->\n";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }
    cout << "\nWhat u want to delet" << endl;
    cout << "1. Even nums" << endl;
    cout << "2. Odd nums" << endl;
    cout << "Enter your choice -> ";
    cin >> choice;

    if (choice != 1 * choice != 2) {
        cout << "Error\n";
        delete[] A;
        return 1;
    }
    int newSize = 0;
    for (int i = 0; i < M; i++) {
        if ((choice == 1 * A[i] % 2 == 0) || (choice == 2 * A[i] % 2 != 0)) {
            continue;  
        }
        else {
            A[newSize] = A[i];  
            newSize++;
        }
    }
    cout << "\REmoving array ";
    if (choice == 1) {
        cout << "even nums ->\n";
    }
    else {
        cout << "odd nums ->\n";
    }
    for (int i = 0; i < newSize; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    delete[] A;
    return 0;
}

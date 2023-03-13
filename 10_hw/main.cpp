#include <iostream>
using namespace std;

void count_all(int* arr, int size, int* pos, int* neg, int* zero) {
    *pos = 0;
    *neg = 0;
    *zero = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            (*pos)++;
        }
        else if (arr[i] < 0) {
            (*neg)++;
        }
        else {
            (*zero)++;
        }
    }
}

int main() {
    int size;
    cout << "Enter  size -> ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter " << size << " nums ->" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int pos, neg, zero;
    count_all(arr, size, &pos, &neg, &zero);

    cout << "Positive count -> " << pos << endl;
    cout << "Negative count -> " << neg << endl;
    cout << "Zero count -> " << zero<< endl;

    delete[] arr;

    return 0;
}


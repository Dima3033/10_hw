#include <iostream>

using namespace std;

int* multi(int* first, int* second, int size_first, int size_second) {
    for (int i = 0; i < size_first - size_second + 1; i++) {
        int j;
        for (j = 0; j < size_second; j++) {
            if (first[i + j] != second[j])
                break;
        }
        if (j == size_second)
            return &first[i];
    }
    return 0;
}

int main() {
    int first[] = { 10, 45, 4, 23, 1, 5, 7, 9 };
    int second[] = { 8, 6, 2, 123 };
    int size_first = sizeof(first) / sizeof(first[0]);
    int size_second = sizeof(second) / sizeof(second[0]);
    int* ptr = multi(first, second, size_first, size_second);
    if (ptr != 0) {
        cout << "Second size is multi to first " << ptr - first << endl;
    }
    else {
        cout << "Second size isnt multipl to first" << endl;
    }
    return 0;
}

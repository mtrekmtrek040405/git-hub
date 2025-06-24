#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int array1D[9];
    int index = 0;

    cout << "Masukkan elemen matriks 3x3:\n";
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j) {
            cout << "Elemen [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }

    cout << "\nMatriks sebelum diurutkan:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            array1D[index++] = matrix[i][j];

    cout << "\nMatriks ID sebelum diurutkan:\n";
    for (int i = 0; i < 9; ++i)
        cout << array1D[i] << " ";
    cout << endl;

    for (int i = 0; i < 8; ++i)
        for (int j = 0; j < 8 - i; ++j)
            if (array1D[j] < array1D[j + 1])
                swap(array1D[j], array1D[j + 1]);

    cout << "\nMatriks ID setelah diurutkan (descending):\n";
    for (int i = 0; i < 9; ++i)
        cout << array1D[i] << " ";
    cout << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {

    // Matrix 3x5
    int matrix[3][5] = {
        {2, 4, 6, 8, 10},
        {1, 3, 5, 7, 9},
        {11, 13, 15, 17, 19}
    };

    int jumlah = 0;
    int jumlahBaris2 = 0;
    int terbesar = matrix[0][0];
    int terkecil = matrix[0][0];
    float rataRata;

    // Perulangan matrix
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {

            // 28. Jumlah seluruh elemen
            jumlah += matrix[i][j];

            // 29. Jumlah baris kedua
            if(i == 1) {
                jumlahBaris2 += matrix[i][j];
            }

            // 30. Nilai terbesar
            if(matrix[i][j] > terbesar) {
                terbesar = matrix[i][j];
            }

            // 31. Nilai terkecil
            if(matrix[i][j] < terkecil) {
                terkecil = matrix[i][j];
            }
        }
    }

    // 32. Rata-rata
    rataRata = (float)jumlah / (3 * 5);

    // Output
    cout << "28. Jumlah seluruh elemen = " << jumlah << endl;
    cout << "29. Jumlah baris kedua = " << jumlahBaris2 << endl;
    cout << "30. Nilai terbesar = " << terbesar << endl;
    cout << "31. Nilai terkecil = " << terkecil << endl;
    cout << "32. Rata-rata matrix = " << rataRata << endl;

    return 0;
}
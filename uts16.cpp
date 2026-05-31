//16.	Buat 14 deret angka lompat sebagai berikut: 2 3 4 6 6 9 8 12 10 15 ... ... ... ...

#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = 3;

    // Menampilkan 14 angka
    for (int i = 0; i < 7; i++) {
        cout << a << " ";
        cout << b << " ";

        a += 2; // deret genap
        b += 3; // kelipatan 3
    }

    return 0;
}
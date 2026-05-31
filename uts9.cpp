//9.	Buat program untuk menentukan bilangan terbesar dan terkecil dari 3 input. 
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Masukkan 3 bilangan:\n";
    cin >> a >> b >> c;

    int terbesar = a;
    int terkecil = a;

    // Cek terbesar
    if (b > terbesar ) {
        terbesar = b;
    }
    if (c > terbesar ) {
        terbesar = c;
    }

    // Cek terkecil
    if (b < terkecil) {
        terkecil = b;
    }
    if (c < terkecil) {
        terkecil = c;
    }

    cout << "Bilangan terbesar = " << terbesar << endl;
    cout << "Bilangan terkecil = " << terkecil << endl;

    return 0;
}
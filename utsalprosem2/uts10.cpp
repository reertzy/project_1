//10.	Buat program untuk menentukan jenis segitiga berdasarkan panjang sisi (segitiga sama sisi, segitiga sama kaki, segitiga sembarang).

//9.	Buat program untuk menentukan bilangan terbesar dan terkecil dari 3 input. 
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Masukkan 3 sisi:\n";
    cin >> a >> b >> c;

    // Cek terbesar
    if (a == b && b == c && a == c ) {
        cout << "sama sisi" << endl;
    }else if (a == b || b == c || a == c) {
        cout << "sama kaki" << endl;
    }else{
        cout << "sembarang" << endl;
    }
    return 0;
}
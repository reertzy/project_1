//14.	Buat program untuk menghitung jumlah bilangan genap dari 1 sampai n.
#include <iostream>
using namespace std;

int main() {
    int n, jumlah = 0;

    cout << "Masukkan nilai n: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            jumlah += i;
        }
    }

    cout << "Jumlah bilangan genap dari 1 sampai " << n << " = " << jumlah << endl;

    return 0;
}
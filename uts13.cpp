//13.Buat program untuk menampilkan bilangan genap dari 1 sampai n. 
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan nilai n: ";
    cin >> n;

    cout << "Bilangan genap dari 1 sampai " << n << " adalah:\n";

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            cout << "Bilangan ke-" << i << endl;
        }
    }

    return 0;
}
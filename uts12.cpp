//12.Buat program untuk menghitung faktorial suatu bilangan n. 
#include <iostream>
using namespace std;

int main() {
    int n;
    int faktorial = 1;

    cout << "Masukkan nilai n: ";
    cin >> n;

        for(int i = 1; i <= n; i++) {
            faktorial *= i;
        }

        cout << "Faktorial dari " << n << " = " << faktorial << endl;
    
    return 0;
}
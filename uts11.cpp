//11.	Buat program untuk menghitung jumlah bilangan dari 1 sampai n.

#include <iostream>
using namespace std;

int main(){
    int n = 0;
    
    cout << "Masukkan angka : ";
    cin >> n;

    for(int i=0;i<n;i++){
        cout << "1 + " << i << " = " << 1+i << endl;
    }
}
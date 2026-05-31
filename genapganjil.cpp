//1.	Buat program untuk menentukan apakah sebuah bilangan genap atau ganjil. 

#include <iostream>
using namespace std;

int main(){
    int angka;

    cout << "Masukkan angka : ";
    cin >> angka;

    if(angka % 2 == 0){
        cout << angka << " Adh genap" << endl;
    }else{
        cout << angka << " Adh ganjil" << endl;
    }
}
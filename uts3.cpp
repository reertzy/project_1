//3.	Buat program untuk menentukan nilai terbesar dari tiga bilangan
#include <iostream>
using namespace std;

int main(){
    int angka1,angka2,angka3;

    cout << "Masukkan angka ke-1 : ";
    cin >> angka1;
    cout << "Masukkan angka ke-2 : ";
    cin >> angka2;
    cout << "Masukkan angka ke-3 : ";
    cin >> angka3;

    if(angka1 > angka2 && angka1 > angka3){
        cout <<" angka ke-1 lebih besar" << endl;
    }else if(angka2 > angka1 && angka2 > angka3){
        cout <<" angka ke-2 lebih besar" << endl;
    }else{
        cout <<" angka ke-3 lebih besar" << endl;
    }
}
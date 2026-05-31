//2.	Buat program untuk menentukan nilai terbesar dari dua bilangan. 
#include <iostream>
using namespace std;

int main(){
    int angka1,angka2;

    cout << "Masukkan angka ke-1 : ";
    cin >> angka1;
    cout << "Masukkan angka ke-2 : ";
    cin >> angka2;


    if(angka1 > angka2){
        cout <<" angka ke-1 lebih besar" << endl;
    }else{
        cout <<" angka ke-2 lebih besar" << endl;
    }
}
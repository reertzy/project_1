//4.	Buat program untuk menentukan apakah suatu bilangan positif, negatif, atau nol. 
//2.	Buat program untuk menentukan nilai terbesar dari dua bilangan. 
#include <iostream>
using namespace std;

int main(){
    int angka1;

    cout << "Masukkan angka ke-1 : ";
    cin >> angka1;

    if(angka1 > 0){
        cout <<"bilangan positif" << endl;
    }else  if(angka1 < 0){
        cout <<"bilangan negatif" << endl;
    } else {
        cout <<"bilangan noll" << endl;
    }
}
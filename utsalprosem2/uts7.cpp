//7.	Buat program untuk menghitung diskon belanja: 
//o	≥ 100.000 diskon 10%, selain itu tidak ada diskon 

#include <iostream>
using namespace std;

int main(){
    int total, diskon;

    cout << "Masukkan total belanja : ";
    cin >> total;

    if(total >= 100000){
        diskon = total*0.1;
        cout << "total bayar: " << total-diskon <<  endl;
    } else {
        cout << "total bayar: " << total <<  endl;
    }
   
}
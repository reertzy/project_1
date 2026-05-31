//8.	Buat program untuk menentukan apakah suatu tahun adalah tahun kabisat. 

#include <iostream>
using namespace std;

int main(){
    int tahun;

    cout << "Masukkan tahun : ";
    cin >> tahun;

    if(tahun % 4 == 0){
        cout << "tahun kabisat" <<  endl;
    } else {
        cout << "bukan kabisat" <<  endl;
    }
   
}
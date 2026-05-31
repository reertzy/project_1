//6.	Buat program untuk menentukan kategori nilai: 
//o	A (≥ 85), B (≥ 70), C (≥ 60), D (< 60) 

#include <iostream>
using namespace std;

int main(){
    int nilai;
    cout << "Masukkan Nilai : ";
    cin >> nilai;

    if(nilai >= 85){
        cout << "Nilai A" << endl;
    }else if(nilai >= 70){
        cout << "Nilai B" << endl;
    }else if (nilai >= 60){
        cout << "Nilai C" << endl;
    }else{
        cout << "Nilai D" << endl;
    }

    return 0;
    
}
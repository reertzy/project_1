//5.	Buat program untuk menentukan apakah seseorang lulus atau tidak (nilai ≥ 60 lulus). 
#include <iostream>
using namespace std;

int main(){
    int nilai;
    cout << "Masukkan nilai : ";
    cin >> nilai;

    if(nilai >= 60){
        cout << "lulus Ujian" << endl;
    }else{
        cout << "Tidak Lulus Ujian" << endl;
    }

    return 0;
}
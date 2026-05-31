#include <iostream>
using namespace std;

int main(){
    int num[]={10,20,30,40,50,60,70,80,90,100};
    
    int n = sizeof(num) / sizeof(num[0]);//menghitung jumlah atau total bilangan(ada berapa bilangan) keseluruhan bilangan dalam array

    int num1;
    
    cout << "masukkan angka : ";
    cin >> num1;

    //variabel binary search
    int kiri = 0; //0 termasuk index array posisi ke 1/index ke 0;
    int kanan = n - 1; //n = total 
    int tengah;
    bool ditemukan = false;

    //proses binary search
    while(kiri <= kanan){ //<- proses binary, angka yang berada dikanan lebih besar dari angka yang dikiri
        tengah = (kiri + kanan) / 2; //mencari index tengah, tengah = (kiri+kanan)/2, 
    
    if(num[tengah] == num1){ //jika angka ada pada array
        ditemukan = true;
        break;

    }else if(num[tengah] < num1){ //jika target lebih besar
        kiri = tengah + 1;

    }else{ //jika target lebih kecil
        kanan = tengah - 1;
    }
    }
    //{10,20|30|<-(2.nilai tengah 2) 40,50|<-(1.nilai tengah) 60,70|80|<-(2.nilai tengah 2) 90,100}
    //(3.cek kondisi apakah bil yg kita input masuk kekategori bil kanan / kiri) 
    
    //output hasil pencarian
    if(ditemukan){
        cout << "data ditemukan pada index ke - " << tengah << endl;
    }else{
        cout << "data tidak ditemukan." << endl;
    }
}
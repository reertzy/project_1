//27.	Buat program untuk mencari apakah angka X (diinput user) 
//ada di dalam array tersebut. 
//Jika ada, tampilkan indeksnya. Jika tidak, tampilkan "Data tidak ditemukan”;

#include<iostream>
using namespace std;

int main(){
    int arr[] ={10,20,30,40,50};
    int n;
    int indeks=-1;

    cout << "Masukkan angka array :";
    cin >> n;

    for(int i=0;i<5;i++){
        if(arr[i]==n){
            indeks = i;
        }
    }
    if(indeks != -1){
        cout << "Angka ditemukan pada indeks " << indeks << endl;
    }else{
        cout << "Angka tidak ditemukan" << endl;
    }
}
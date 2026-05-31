//21.	Buat program untuk menghitung jumlah seluruh elemen array. 

#include<iostream>
using namespace std;

int main(){
    int a [] = {10,15,20,25,30};
    int jumlah = 0;

    for(int i = 0;i<5;i++){
        jumlah += a[i];
    }
    cout << "Jumlah array adalah : " << jumlah;
}
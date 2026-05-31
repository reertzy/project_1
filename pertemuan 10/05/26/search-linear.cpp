#include <iostream>
using namespace std;

int main(){
    int angka[]={1,3,5,7,9,10,8,6,4,2};
    int angka1;

    cout << "Masukkan Angka : ";
    cin >> angka1;

    for(int i=0;i<=9;i++){
        if(angka[i] == angka1){
            cout << "angka tersedia di index ke - " << i << endl;
            break;
        }
    }
}
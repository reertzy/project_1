//23.	Buat program untuk mencari nilai terkecil dalam array. 

#include <iostream>
using namespace std;

int main(){
    int arr[] = {50,60,70,80,90};
    int terkecil = arr[0];

    for(int i=1;i<5;i++){
        if(arr[i]<terkecil){
            terkecil = arr[i];
        }
    }
    cout<<"Nilai Terkecil : " << terkecil;
}
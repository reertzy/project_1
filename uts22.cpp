//22.	Buat program untuk mencari nilai terbesar dalam array. 

#include<iostream>
using namespace std;

int main(){
    int arr[] = {50,60,70,80,90};
    int terbesar = arr[0];

    for(int i=1;i<5;i++){
        if(arr[i]>terbesar){
            terbesar=arr[i];
        }
    }
    cout << "Nilai terbesar = " << terbesar;
}
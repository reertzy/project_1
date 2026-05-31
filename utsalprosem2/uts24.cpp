//24.	Buat program untuk menghitung rata-rata nilai dalam array. 

#include <iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int jumlah = 0;
    float rata_rata;

    for(int i=0;i<9;i++){
        jumlah = jumlah + arr[i];
        rata_rata = jumlah/9;
    }
    cout << "Hasil rata' = " << rata_rata;
}
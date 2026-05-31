//26.	Buat program untuk menghitung jumlah bilangan ganjil dalam array. 

#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int jumlahGanjil=0;

    for(int i=0;i<10;i++){
        if(arr[i]%2==1){
            jumlahGanjil = jumlahGanjil + arr[i];
        }
    }
    cout << "Hasil jumlah bil ganjil : " << jumlahGanjil << endl;
}
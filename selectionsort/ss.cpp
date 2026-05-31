#include <iostream>
using namespace std;

//fungsi untuk melakukan selection sort
void selectionSort(int arr[], int n){
    //perulangan untuk menelusuri seluruh elemen array
    for(int i = 0; i < n - 1; i++){
        //anggap elemen pertama dari sisa array sebagai yang terkecil
        int min_idx = i;

        //perulangan untuk mencari elemen terkecil disisa array
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }

        //tukar elemen terkecil yang ditemukan dengan elemen pertama(i)
        //menggunakan fungsi bawaan C++ 'swap'
        swap(arr[i], arr[min_idx]);
    }
}

//fungsi pembantu untuk mencetak isi array
void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int data[] = {20,57,23,35,40};
    int n = sizeof(data) / sizeof(data[0]); //menghitung jumlah array

    cout << "Data sebelum disorting: ";
    printArray(data, n);

    //memanggil fungsi selection sort
    selectionSort(data, n);

    cout << "Data sesudah disorting: ";
    printArray(data, n);

    return 0;
}

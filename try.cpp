#include <iostream>
using namespace std;

int main(){
    
    int matrix[3][5]={
        {10,20,35,40,25},
        {40,55,61,70,85},
        {72,92,30,45,10},
    };
    
    int jumlah=0;
    float rata_rata;
    
    jumlah += matrix[3][5];
    
    rata_rata = (float)jumlah / 15;

    cout << "Hasil rata-rata : " << rata_rata <<endl;
    
}
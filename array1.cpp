#include <iostream>
using namespace std;

int main(){
    int jumlah=0;
    int jbaris1=0;
    int jbaris2=0;

    int data[2][4] = {
        {2,5,10,11},
        {6,3,5,7}
    };

    int min = data[0][0];
    int max = data[0][0];

    //Transpose array
    int transpose[4][2];

    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout << data[i][j] <<" ";

            //Jumlah per baris
            if(i == 0){
                jbaris1 += data[i][j];
            }
            if(j == 1){
                jbaris2 += data[i][j];
            }

            //total semua data
            jumlah += data[i][j];

            // cari min
            if(data[i][j] < min){
                min = data[i][j];
            }

            // cari max
            if(data[i][j] > max){
                max = data[i][j];
            }

             // transpose
            transpose[j][i] = data[i][j];
        }
        cout<<endl;        
    }

    //rata-rata
    float rata = jumlah / 8.0;

    cout<<"total data array = "<<jumlah<<endl;
    cout<<"total data baris1 = "<<jbaris1<<endl;
    cout<<"total data baris2 = "<<jbaris2<<endl;

    cout << "Nilai terkecil = " << min << endl;
    cout << "Nilai terbesar = " << max << endl;
    cout << "Rata-rata = " << rata << endl;

    // tampilkan transpose
    cout << "\nMatriks Transpose (4x2):" << endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            cout << transpose[i][j] << "  ";
        }
        cout << endl;
    }

}
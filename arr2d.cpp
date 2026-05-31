#include <iostream>
using namespace std;

int main(){
    string huruf[2][4]={
        //[2] = baris
        //[4] = kolom
        {"A","B","C","D"},
        {"E","F","G","H"}
    };
    //cout << huruf[0][0] << huruf[0][3] << huruf[1][0];
    for(int i=0;i<2;i++){ //proses mencetak baris ex :  A - D & E - H
        for(int j=0;j<4;j++){ //proses mencetak kolom ex : A B C D & E F G H 
            cout << huruf[i][j] <<" ";//mencetak output
        }
        cout << endl;
    }
    return 0;
}
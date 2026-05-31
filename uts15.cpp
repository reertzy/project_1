//15.	Cetak angka 1-50 dengan aturan 
//mengganti kelipatan 3 dengan "Fizz", 
//kelipatan 5 dengan "Buzz", dan 
//kelipatan keduanya (3 dan 5) dengan "FizzBuzz. 
//Angka yang lain tetap tercetak biasa.

#include<iostream>
using namespace std;

int main(){
    int n = 50;

    for(int i = 0;i<=n;i++){
        if(i % 3 == 0){
            cout << i << " Fizz" << endl;
        }else if(i % 5 == 0){
            cout << i << " Buzz" << endl;
        }else if(i % 3 && i % 5 == 0){
            cout << i << " FizzBuzz" << endl;
        }else{
            cout << i << endl;
        }
    }
}
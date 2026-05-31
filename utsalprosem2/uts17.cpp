//17.	Buat deret angka fibonaci 10 angka pertama, dimulai dari 0, 1, 1, …., …..

#include<iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int a = 0, b = 1, c;

    for(int i = 0; i < n; i++) {
        cout << a << " ";

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
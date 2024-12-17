#include <iostream>
using namespace std;



string cekGanjilGenap(int a){
    if( a % 2 == 0){
        cout << " genap ";
    } else {
    cout << " ganjil ";
    }
}
int main(){
    int a;
    cout << "masukkan bilangan bulat: ";
    cin >> a;
    cout << " angka " << a << " adalah bilangan" << cekGanjilGenap(a) << endl;


    return 0;
    }



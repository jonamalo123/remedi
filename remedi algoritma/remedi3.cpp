#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Masukkan nilai n: ";
    cin >> n;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    cout << "Jumlah bilangan genap dari 1 hingga " << n << " adalah: " << sum << endl;

    return 0;
}


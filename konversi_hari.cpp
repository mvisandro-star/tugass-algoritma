#include <iostream>
using namespace std;

int main() {
    int x, tahun, bulan, hari, sisa;

    cout << "Masukkan jumlah hari: ";
    cin >> x;

    tahun = x / 365;
    sisa = x % 365;

    bulan = sisa / 30;
    hari = sisa % 30;

    cout << "Tahun: " << tahun << endl;
    cout << "Bulan: " << bulan << endl;
    cout << "Hari: " << hari << endl;

    return 0;
}

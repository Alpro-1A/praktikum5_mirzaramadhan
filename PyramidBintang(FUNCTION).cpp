// PROGRAM PYRAMID BINTANG
#include <iostream>
using namespace std;

// Function buat pyramid bintang
void pyramidBintang(int tinggi) {

    for (int i = 1; i <= tinggi; i++) {
        // function untuk membuat spasi pada sisi kirip pada setiap baris agar terbentuk segitiga
        for (int j = 1; j <= tinggi - i; j++) {
            cout << " ";
        }

        // Operasi untuk membuat bintang pada setiap garis yang telah diberi spasi tadi
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }

        cout << endl;
    }
}

int main() {
    int tinggi;

    // Masukkan tinggi pyramid bintang yang diinginkan
    cout << "Masukkan tinggi pyramid bintang yang diinginkan: ";
    cin >> tinggi;

    // Memanggil fungsi untuk membuat pyramid bintang yang berbentuk segitiga
    pyramidBintang(tinggi);

    return 0;
}

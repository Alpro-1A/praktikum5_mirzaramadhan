#include <iostream>
using namespace std;

// Function yang berfungsi untuk menghitung bilangan ganjil sampe faktor yang ditentukan oleh user.

void bilanganGanjil (int limit, int & sumGanjil) {
    cout << "Bilangan Ganjil: ";
    for (int i = 0; i <= limit; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            sumGanjil += i;
        }
    }
    cout << endl;
}

// Function yang berfungsi untuk menghitung bilangan genap sampe faktor yang ditentukan oleh user.

void bilanganGenap (int limit, int & sumGenap) {
    cout << "Bilangan Genap: ";
    for (int i = 0; i <= limit; i += 2) {
        cout << i << " ";
        sumGenap += i;
    }
    cout << endl;
}

// Function yang berfungsi untuk menghitung & nampilin jumlah bilangan prima sampe limit yang ditentukan oleh user.

void bilanganPrima (int limit, int & sumPrima) {
    cout << "Bilangan Prima: ";
    for (int i = 2; i <= limit; i++) {
        int j;
        for (j = 2; j * j <= i && i % j != 0; j++) {
        }

        if (j * j > i) {
            cout << i << " ";
            sumPrima += i;
        }
    }
    cout << endl;
}

// Function yang berfungsi untuk menampilkan faktor dari bilangan ganjil

void faktorGanjil (int sumGanjil) {
    cout << "Faktor-faktor penjumlahan bilangan ganjil: ";
    for (int i = 1; i <= sumGanjil; i++) {
        if (sumGanjil % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

// Function yang berfungsi untuk menampilkan faktor dari bilangan genap.

void faktorGenap (int sumGenap) {
    cout << "Faktor-faktor penjumlahan bilangan genap: ";
    for (int i = 1; i <= sumGenap; i++) {
        if (sumGenap % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

// Function  yang berfungsi untuk menampilkan faktor dari bilangan prima.

void faktorPrima (int sumPrima) {
    cout << "Faktor-faktor penjumlahan bilangan prima: ";
    for (int i = 1; i <= sumPrima; i++) {
        if (sumPrima % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

// OUTPUT

int main() {
    int limit;
    int sumGanjil = 0, sumGenap = 0, sumPrima = 0;

    cout << "[ Program Bilangan Ganjil, Genap, dan Prima ]" << endl;
    cout << "Masukkan limit akhir: ";
    cin >> limit;

    // Memanggil function - function buat nampilin hasil .

    bilanganGanjil(limit, sumGanjil);
    bilanganGenap(limit, sumGenap);
    bilanganPrima(limit, sumPrima);

    cout << "Jumlah bilangan ganjil: " << sumGanjil << endl;
    cout << "Jumlah bilangan genap: " << sumGenap << endl;
    cout << "Jumlah bilangan Prima: " << sumPrima << endl;

    // Memanggil function - function buat nampilin hasil faktor .

    faktorGanjil(sumGanjil);
    faktorGenap(sumGenap);
    faktorPrima(sumPrima);

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int angka = 5;

    // Increment menggunakan operator ++
    angka++; // Post-increment, nilai angka akan ditambah 1 setelah digunakan
    cout << "Nilai setelah post-increment: " << angka << endl;

    ++angka; // Pre-increment, nilai angka akan ditambah 1 sebelum digunakan
    cout << "Nilai setelah pre-increment: " << angka << endl;

    return 0;
}

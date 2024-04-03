#include <iostream>
#include <string>

using namespace std;

int main() {
    // Deklarasi variabel
    string nim, nama;
    double nilai_tugas1, nilai_tugas2, nilai_tugas3, rata_rata;

    // Input data dari siswa
    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << "Nim Siswa : ";
    getline(cin, nim); // Menggunakan getline untuk menerima input string (spasi pada nama)
    cout << "Nama Siswa : ";
    getline(cin, nama);
    cout << "Nilai Tugas I : ";
    cin >> nilai_tugas1;
    cout << "Nilai Tugas II : ";
    cin >> nilai_tugas2;
    cout << "Nilai Tugas III : ";
    cin >> nilai_tugas3;

    // Menghitung rata-rata
    rata_rata = (nilai_tugas1 + nilai_tugas2 + nilai_tugas3) / 3;

    // Menampilkan output
    cout << "Nim " << nim << " Siswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << rata_rata << " dari hasil tugas yang diikutinya." << endl;

    return 0;
}

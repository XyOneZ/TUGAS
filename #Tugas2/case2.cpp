#include <iostream>
#include <string>
using namespace std;

int main ()
{
    // Deklarasi
    string Nama_Siswa;
    double keaktifan, tugas, ujian, nilai_keaktifan, nilai_tugas, nilai_ujian, nilai_akhir;

    // Input Data
    cout << "PROGRAM HITUNG NILAI AKHIR\n";
    cout << "Nama Siswa : ";
    getline(cin, Nama_Siswa);
    cout << "Nilai Keaktifan : ";
    cin >> keaktifan;
    cout << "Nilai Tugas : ";
    cin >> tugas;
    cout << "Nilai Ujian : ";
    cin >> ujian;

    // Menghitung Nilai
    nilai_keaktifan = keaktifan * 0.2;
    nilai_tugas = tugas * 0.5;
    nilai_ujian = ujian * 0.3;
    nilai_akhir = nilai_keaktifan + nilai_tugas + nilai_ujian;

    // Tampilan Output
    cout << "\nSiswa yang bernama " << Nama_Siswa;
    cout << "\nDengan Nilai Persentase Yang dihasilkan.\n";
    cout << "Nilai Keaktifan * 20% : " << nilai_keaktifan << "\n";
    cout << "Nilai Tugas * 50% : " << nilai_tugas << "\n";
    cout << "Nilai Ujian * 30% : " << nilai_ujian << "\n";
    cout << "Jadi Siswa yang bernama " << Nama_Siswa << " memperoleh nilai akhir sebesar " << nilai_akhir << endl;

    return 0;
}

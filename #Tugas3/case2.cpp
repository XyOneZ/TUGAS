#include <iostream>
#include <string>

using namespace std;

int main() {
    // Deklarasi variabel untuk menyimpan input dari pengguna
    string namaSiswa;
    float nilaiKeaktifan, nilaiTugas, nilaiUjian;

    // Meminta input dari pengguna
    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "Nama Siswa: ";
    getline(cin, namaSiswa);
    cout << "Nilai Keaktifan: ";
    cin >> nilaiKeaktifan;
    cout << "Nilai Tugas: ";
    cin >> nilaiTugas;
    cout << "Nilai Ujian: ";
    cin >> nilaiUjian;

    // Proses untuk mendapatkan nilai murni dari masing-masing nilai
    float nilaiMurniKeaktifan = nilaiKeaktifan * 0.2;
    float nilaiMurniTugas = nilaiTugas * 0.3;
    float nilaiMurniUjian = nilaiUjian * 0.5;

    // Hitung nilai akhir
    float nilaiAkhir = nilaiMurniKeaktifan + nilaiMurniTugas + nilaiMurniUjian;

    // Tentukan nilai huruf berdasarkan nilai akhir
    string grade;
    if (nilaiAkhir > 80) {
        grade = "A";
    } else if (nilaiAkhir > 70) {
        grade = "B";
    } else if (nilaiAkhir > 56) {
        grade = "C";
    } else if (nilaiAkhir > 46) {
        grade = "D";
    } else {
        grade = "E";
    }

    // Menampilkan output
    cout << "Siswa yang bernama " << namaSiswa << endl;
    cout << "Dengan Nilai Persentasi Yang dihasilkan. " << endl;
    cout << "Nilai Keaktifan * 20%: " << nilaiMurniKeaktifan << endl;
    cout << "Nilai Tugas * 30%: " << nilaiMurniTugas << endl;
    cout << "Nilai Ujian * 50%: " << nilaiMurniUjian << endl;
    cout << "Jadi Siswa yang bernama " << namaSiswa << " memperoleh nilai akhir sebesar " << nilaiAkhir << " dengan grade " << grade << "." << endl;

    return 0;
}

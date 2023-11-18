#include <iostream>
#include <string>

using namespace std;

int main() {
    // Deklarasi variabel
    string nama;
    string tipe;
    int jamKerja;

    // Input data
    cout << "Masukkan nama pegawai: ";
    getline(cin, nama);

    cout << "Masukkan tipe pegawai (biasa/pejabat): ";
    cin >> tipe;

    cout << "Masukkan jam kerja pegawai dalam sehari: ";
    cin >> jamKerja;

    // Konstanta gaji pokok
    const int gajiPokokBiasa = 75000;
    const int gajiPokokPejabat = 95000;
    const int hariKerjaPerBulan = 21;
    const double bonusBiasa = 0.09;
    const double potonganAsuransi = 0.05;

    // Hitung gaji perbulan
    int gajiPerBulan;
    if (tipe == "biasa") {
        gajiPerBulan = (gajiPokokBiasa * jamKerja * hariKerjaPerBulan) * (1 + bonusBiasa);
    } else if (tipe == "pejabat") {
        gajiPerBulan = gajiPokokPejabat * jamKerja * hariKerjaPerBulan;
    } else {
        cout << "Tipe pegawai tidak valid." << endl;
        return 1; // Keluar dengan kode error
    }

    // Hitung potongan asuransi
    double potonganAsuransiTotal = gajiPerBulan * potonganAsuransi;

    // Hitung gaji bersih perbulan
    int gajiBersihPerBulan = gajiPerBulan - potonganAsuransiTotal;

    // Hitung gaji pertahun
    int gajiPerTahun = gajiBersihPerBulan * 12;

    // Output hasil
    cout << "Nama pegawai: " << nama << endl;
    cout << "Gaji perbulan: " << gajiBersihPerBulan << endl;
    cout << "Gaji pertahun: " << gajiPerTahun << endl;

    return 0; // Program berakhir tanpa error
}
// TUGAS PRAKTIKUM 4
// TUGAS 1&2
// RIFQI FAIRUZZABADY
// 065123034
// B ILKOM 2023

//TUGAS 1
#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    int angka = 42;
    double bilangan_desimal = 3.14159;
    char karakter = 'A';
    string kata = "Hello, World!";
    bool status = true;

    // Deklarasi konstanta
    const int konstanta_integer = 100;
    const double konstanta_double = 3.14;

    // Menampilkan variabel dan konstanta
    cout << "Variabel int: " << angka << endl;
    cout << "Variabel double: " << bilangan_desimal << endl;
    cout << "Variabel char: " << karakter << endl;
    cout << "Variabel string: " << kata << endl;
    cout << "Variabel bool: " << (status ? "True" : "False") << endl;

    cout << "Konstanta integer: " << konstanta_integer << endl;
    cout << "Konstanta double: " << konstanta_double << endl;

    return 0;
}


//Tugas 2
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Mendefinisikan variabel untuk biodata
    string nama = "Rifqi Fairuzzabady";
    int usia = 20;
    float tinggi = 178.9;
    char golongan_darah = 'O';
    bool menikah = false;

    // Menampilkan biodata
    cout << "Biodata:" << endl;
    cout << "Nama: " << nama << endl;
    cout << "Usia: " << usia << " tahun" << endl;
    cout << "Tinggi: " << tinggi << " cm" << endl;
    cout << "Golongan Darah: " << golongan_darah << endl;
    cout << "Status Pernikahan: " << (menikah ? "Menikah" : "Belum Menikah") << endl;

    return 0;
}

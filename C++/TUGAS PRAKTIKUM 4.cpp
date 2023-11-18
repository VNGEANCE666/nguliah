  // KONVERSI SUHU
// TUGAS PRAKTIKUM 4
//AUTHOR RIFQI FAIRUZZABADY
/*#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    cout << "Masukkan suhu dalam Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9/5) + 32;

    cout << "Suhu dalam Fahrenheit adalah: " << fahrenheit << " F" << endl;

    return 0;
}


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double alas, tinggi, sisi1, sisi2, sisi3;

    cout << "Masukkan panjang alas segitiga: ";
    cin >> alas;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    cout << "Masukkan panjang sisi pertama segitiga: ";
    cin >> sisi1;
    cout << "Masukkan panjang sisi kedua segitiga: ";
    cin >> sisi2;
    cout << "Masukkan panjang sisi ketiga segitiga: ";
    cin >> sisi3;

    double luas = 0.5 * alas * tinggi;

    double keliling = sisi1 + sisi2 + sisi3;

    // Menampilkan hasil perhitungan
    cout << "Luas segitiga adalah: " << luas << endl;
    cout << "Keliling segitiga adalah: " << keliling << endl;

    return 0;
}




/*#include <iostream>

using namespace std;

int main() {
    double panjang, lebar;
    
    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjang;
    
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;
    
    double luas = panjang * lebar;
    double keliling = 2 * (panjang + lebar);
    
    cout << "Luas persegi panjang: " << luas << endl;
    cout << "Keliling persegi panjang: " << keliling << endl;
    
    return 0;
}*/

#include <iostream>
using namespace std;

const double PI = 3.14159; // Nilai pi

int main() {
    double jari_jari;
    double luas, keliling;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jari_jari;

    luas = PI * jari_jari * jari_jari;
    keliling = 2 * PI * jari_jari;

    cout << "Luas lingkaran adalah: " << luas << endl;
    cout << "Keliling lingkaran adalah: " << keliling << endl;

    return 0;
}







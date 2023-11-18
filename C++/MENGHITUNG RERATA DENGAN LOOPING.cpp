// PROJECT  : 04
// PROGRAM : MENGHITUNG NILAI RERATA MENGGUNAKAN LOOPING
// AUTHOR : RIFQI FAIRUZZABADY
// NPM : 065123034
// TANGGAL : 18 OKTOBER 2023
/*#include <iostream>

using namespace std;

int main() {
	int n;

	cout << "Masukkan Jumlah Data : ";
	cin >> n;
	cout << endl;

	float total = 0.0;
	for (int i = 1; i <= n; i++) {
		float bilangan;
		cout << "Data{} << i << " : ";
		cin >> bilangan;
		total = total + bilangan;
	}

	total = total / n;
	cout << "\nHasil rata-rata dari nilai-nilai tersebut adalah : " << total << endl;
	return 0;
}*/




#include <iostream>
#include <fstream>
using namespace std;
int main() {
    // Mendefinisikan array untuk menyimpan 10 data
    int Data[10];

    // Membaca 10 data dari pengguna dan menyimpannya dalam array
    for (int i = 0; i < 10; ++i) {
        cout << "Masukkan data ke-" << (i + 1) << ": ";
        cin >> Data[i];
    }
ifstream file_in("input.txt");
    // Menghitung jumlah dan nilai rata-rata
    int jumlah = 0;
    for (int i = 0; i < 10; ++i) {
        jumlah += Data[i];
    }

    double rataRata = static_cast<double>(jumlah) / 10;
ofstream file_output;
file_output.open("output.txt");
    // Menampilkan hasil
    cout << "Jumlah data: " << jumlah << "\n";
    cout << "Nilai rata-rata: " << rataRata << "\n";

    return 0;
}

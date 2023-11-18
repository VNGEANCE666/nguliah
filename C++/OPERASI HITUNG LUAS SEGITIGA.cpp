// PROJEK: 01
// PROGRAM: MENGHITUNG LUAS SEGITIGA
// AUTHOR: RIFQI FAIRUZZABADY
// NPM: 065123034
//TANGGAL: 28/09/2023

// MEMASANG HEADER/LIBRARY
#include <iostream>
using namespace std;

//MENGAWALI PROGRAM
int main() {
	//MENDEKLARASIKAN KONSTANTA ATAU VARIABEL
	double alas, tinggi, luas;
	
	cout << "=============================================" << endl;
	cout << "PROJEK: 01 OPERASI HITUNG SEGITIGA" << endl;
	cout << "NAMA: RIFQI FAIRUZZABADY" << endl;
	cout << "NPM: 065123034" << endl;
	cout << "=============================================" << endl;
	//MEMINTA INPUT DARI USER/PENGGUNA
	//MASUKKAN INPUT
	
	cout << " masukkan panjang alas segitiga";
	cin >> alas;
	
	cout << "masukkan tinggi segitiga";
	cin >> tinggi;
	
	//MENGHITUNG LUAS SEGITIGA
	//MEMPROSES DATA
	luas= 0.5 * alas * tinggi;
	
	//MENAMPILAKN OUTPUT
	//MENULIS HASIL PADA OUTPUT FILE
	cout << "luas segitiga adalah" << luas << endl;
	
	return 0;
}
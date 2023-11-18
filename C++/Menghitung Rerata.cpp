// PROJECT: 3 
// PRORGRAM: MENGHITUNG NILAI RERATA
// AUTHOR: RIFQI FAIRUZZABADY
// NPM: 065123034


#include <iostream>
using namespace std;

int main() {
	
	cout << "=============================================" << endl;
	cout << "PROJEK 3 MENGHITUNG NILAI RERATA MENGGUNAKAN C++" << endl;
	cout << "NAMA: RIFQI FAIRUZZABADY" << endl;
	cout << "NPM: 065123034" << endl;
	cout << "=============================================" << endl;
	
    double X1, X2, X3, X4, X5, rerata, jumlah;
    cout << "Masukkan nilai X1 : ";
    cin >> X1;
    cout << "Masukkan nilai X2 : ";
    cin >> X2;
    cout << "Masukkan nilai X3 : ";
    cin >> X3;
    cout << "Masukkan nilai X4 : ";
    cin >> X4;
    cout << "Masukkan nilai X5 : ";
    cin >> X5;
    
    
    jumlah = X1 + X2 + X3 + X4 + X5 ;
    rerata = jumlah/5;
    
    cout << "jumlah =" << jumlah << endl;
    cout << "hasil =" << rerata << endl;
    
	    return 0;
}


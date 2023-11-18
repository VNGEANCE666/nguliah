#include <iostream>

using namespace std;

int main() {
  int item1, item2, item3, item4, total,Harga_Akhir;

  cout << "---------- TOKO MAROON LABKOM ----------\n";
  cout << "Katalog Barang : \n";
  cout << "1) Bakso = Rp 10.000\n";
  cout << "2) Mie Ayam Bakso = Rp 30.000\n";
  cout << "3) Bakso Bakar = Rp 20.000\n";
  cout << "4) Bakso Beranak = Rp 150.000\n";
  cout << "5) Mie Ayam Bakso Keju = Rp 50.000\n";
  cout << "----------------------------------------\n";

  cout << "Masukkan item 1 : "; cin >> item1;
  switch (item1){
  case 1:
    item1 = 10000; break;
  case 2:
    item1 = 30000; break;
  case 3:
    item1 = 20000; break;
  case 4:
    item1 = 150000; break;
  case 5:
    item1 = 50000; break;
  default: 
    cout << "Terima Kasih Telah Belanja" << endl;
    return 0; break;
  }

  cout << "Masukkan item 2 : "; cin >> item2;
  switch (item2){
  case 1:
    item2 = 10000; break;
  case 2:
    item2 = 30000; break;
  case 3:
    item2 = 20000; break;
  case 4:
    item2 = 150000; break;
  case 5:
    item2 = 50000; break;
  default: 
    cout << "Terima Kasih Telah Belanja!!!" << endl;
    return 0; break;
  }

  cout << "Masukkan item 3 : "; cin >> item3;
  switch (item3){
  case 1:
    item3 = 10000; break;
  case 2:
    item3 = 30000; break;
  case 3:
    item3 = 20000; break;
  case 4:
    item3 = 150000; break;
  case 5:
    item3 = 50000; break;
  default: 
    cout << "Terima Kasih Telah Belanja" << endl;
    return 0; break;
    
  }
cout << "Masukkan item 4 : "; cin >> item4;
  switch (item4){
  case 1:
    item4 = 10000; break;
  case 2:
    item4 = 30000; break;
  case 3:
    item4 = 20000; break;
  case 4:
    item4 = 150000; break;
  case 5:
    item4 = 50000; break;
  default: 
    cout << "Terima Kasih Telah Belanja" << endl;
    return 0; break;
  }
  cout << "----------------------------------------\n";
  
  total = item1 + item2 + item3 + item4;
  if (total > 300000) {
 Harga_Akhir = total - (total * 15 / 100);
 cout<< "Harga Akhir : ";
    cout << "Selamat, kamu mendapatkan diskon 15%" << endl;
    
  } 
  else if (total > 200000 ) {
    cout << "Belanja Kamu Banyak Banget" << endl;
  } 
  else if (total > 100000) {
    cout << "Belanja Kamu Lumayan Banyak" << endl;
  }
  else if (total <= 50000) {
    cout << "Belanja Kamu Sedikit Banget Tambah lagi" << endl;
  }
else {
	cout <<"Terima Kasih Telah belanja ";
}
  cout << "Total belanja kamu adalah : " << Harga_Akhir<< endl;
  return 0;
}
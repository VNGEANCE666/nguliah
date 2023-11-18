//QUIZ PERTEMUAN 06 PRAKITKUM ALGORITMA
// NAMA: RIFQI FAIRUZZABADY
//NPM  : 065123034
//KELAS : B

#include <iostream>
using namespace std;

int main () 
{
	int item1, item2, item3, item4, total;
	cout<<"------------TOKO MAROON LABKOM------------\n";
	cout<<"Daftar Harga Barang : \n";
	cout<<"1) VGA = Rp 50.000\n";
	cout<<"2) CPU = Rp 100.000\n";
	cout<<"3) MONITOR = Rp 200.000\n";
	cout<<"4) MOTHERBOARD = Rp 300.000\n";
	cout<<"--------------------------------------------\n";
	
	cout<<"Masukkan item 1 : "; 
	cin >> item1;
	switch (item1){
		case 1 :
			item 1= 50000; break;
			case 2 :
				item 1= 100000; break;
				case 3 :
				item 1= 200000; break;
				case 4 :
				item 1= 300000; break;
				default :
					cout<<"Terima Kasih Telah Belanja" << endl;
					return 0; break;
	}
	cout <<"Masukkan item 2 : ";
	cin >> item2;
	switch (item2){
		case 1 :
			item 2= 50000; break;
			case 2 :
				item 2= 100000; break;
				case 3 :
				item 2= 200000; break;
				case 4 :
				item 2= 300000; break;
				default :
					cout<<"Terima Kasih Telah Belanja" << endl;
					return 0; break;
				}
		out <<"Masukkan item 3 : ";
	cin >> item 3;
	switch (item 3){
		case 1 :
			item 3= 50000; break;
			case 2 :
				item 3= 100000; break;
				case 3 :
				item 3= 200000; break;
				case 4 :
				item 3= 300000; break;
				default :
					cout<<"Terima Kasih Telah Belanja" << endl;
					return 0; break;
				}	
				cout <<"Masukkan item 4 : ";
	cin >> item 4;
	switch (item 4){
		case 1 :
			item 4= 50000; break;
			case 2 :
				item 4= 100000; break;
				case 3 :
				item 4= 200000; break;
				case 4 :
				item 4= 300000; break;
				default :
					cout<<"Terima Kasih Telah Belanja" << endl;
					return 0; break;
				}	
				cout<<"-----------------------------------\n";
				
	total = item1 + item2 + item3 + item4;
  if (total > 300000 ) {
    cout << "Selamat, kamu mendapatkan diskon 15%" << endl;
  } 
  if (total >2000000) {
    cout << "Belanja Kamu Banyak Banget" << endl;
  } 
  if (total > 100000 ) {
    cout << "belanja kamu lumayan banyak" << endl;
  }
if (total <= 50000 ) {
    cout << "Belanja Kamu Sedikit Banget, Tambah Lagi" << endl;
  }
  cout << "Total belanja kamu adalah : " << total << endl;
  return 0;
}

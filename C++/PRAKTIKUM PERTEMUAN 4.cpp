/*#include <iostream>
using namespace std;

int main() {
	int angka1,angka2;
	cout<<"MASUKKAN ANGKA PERTAMA: ";
	cin>>angka1;
	cout<<"MASUKKAN ANGKA KEDUA: ";
	cin>>angka2;
	
	cout<<"HASIL ARITMATIKA"<< endl;
	cout<<"======================"<< endl;
	cout<<" PENJUMLAHAN   : " << angka1 + angka2 << " | MENGGUNAKAN OPERATOR +" << endl;
	cout<<" PENGURANGAN   : " << angka1 - angka2 << " | MENGGUNAKAN OPERATOR -" << endl;
	cout<<" PERKALIAN     : " << angka1 * angka2 << " | MENGGUNAKAN OPERATOR *" << endl;
	cout<<" PEMBAGIAN     : " << angka1 / angka2 << " | MENGGUNAKAN OPERATOR /" << endl;
	cout<<" MODULO        : " << angka1 % angka2 << " | MENGGUNAKAN OPERATOR %" << endl;
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	//operator assignment
	int a,b;
	cout<<"MASUKKAN ANGKA A : ";
	cin>> a;
	cout<<"MASUKKAN ANGKA B : ";
	cin>> b;
	
	//operator increment
	cout<<"a = " << a << endl;
	cout<<"Pre - Increment a : " << ++a << endl;
	cout<<"b = " << b << endl;
	cout<<"Post - Increment b : " << b++ << endl;
	cout<<"b = " << b << endl;
	
	cout << endl;
	//operator decrement
	cout<<"a = " << a << endl;
	cout<<"Pre - Increment a : " << --a << endl;
	cout<<"b = " << b << endl;
	cout<<"Post - Increment b : " << b-- << endl;
	cout<<"b = " << b << endl;
	
	return 0;
}

  #include <iostream>
  
  using namespace std;
  int main(){
  	int a;
  	cout <<"PROGRAM OPERATOR LOGIKA SEDERHANA" << endl;
  	
  	a = 0 && 1; //false
  	cout<<"HASIL OPERATOR AND : " << a << endl;
  	a = 0 && 0; //false
  	cout<<"HASIL OPERATOR AND : " << a << endl;
  	a = 1 && 1; //true
  	cout<<"HASIL OPERATOR AND : " << a << endl;
  	
  	cout << endl;
  	
  	a = 0 || 1; //true
  	cout<<"HASIL OPERATOR ORb : " << a << endl;
  	a = 0 || 0; //false
  	cout<<"HASIL OPERATOR OR : " << a << endl;
  	a = 1 || 1; //true
  	cout<<"HASIL OPERATOR OR : " << a << endl;
  	
  	cout << endl;
  	
  	a = !0; //true
  	cout<<"HASIL OPERATOR NOT : " << a << endl;
  	a= !1; //false
  	cout<<"HASIL OPERATOR NOT : " << a << endl;
  	
  	cout << endl;
  	
  return 0;
  }*/
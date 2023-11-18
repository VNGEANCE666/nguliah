/*#include <iostream>
using namespace std;

int main() {
    int Bilangan;
    cout << "menentukan bilangan bulat positif/negatif/nol \n";
    cout << "masukkan bilangan : "; cin >> Bilangan;
    
    if (Bilangan == 0 )
        cout << "bilangan nol " << endl;
    else if ( Bilangan % 2 == 0 && Bilangan > 0 )
        cout << "bilangan genap positif " << endl;
    else if ( Bilangan % 2 == 0 && Bilangan < 0 )
        cout << "bilangan genap negatif " << endl;
    else if ( Bilangan % 2 != 0 && Bilangan > 0 )
        cout << "bilangan ganjil positif " << endl;
    else
        cout << "bilangan ganjil negatif " << endl;
    return 0;
}*/
#include <iostream>
using namespace std;

int main() {
    char Huruf_Alphabet;
	cout << "Masukkan Huruf Alphabet\n";
    cout << "Masukkan huruf : ";
    cin >> Huruf_Alphabet;

    if (Huruf_Alphabet == 'a' || Huruf_Alphabet == 'e' || Huruf_Alphabet == 'i' || Huruf_Alphabet == 'o' || Huruf_Alphabet == 'u' ||
        Huruf_Alphabet == 'A' || Huruf_Alphabet == 'E' || Huruf_Alphabet == 'I' || Huruf_Alphabet == 'O' || Huruf_Alphabet == 'U') {
        cout << "Merupakan Huruf vokal" << endl;
    } else if ((Huruf_Alphabet >= 'a' && Huruf_Alphabet <= 'z') || (Huruf_Alphabet >= 'A' && Huruf_Alphabet <= 'Z')) {
        cout << "Merupakan Huruf konsonan" << endl;
    } else {
        cout << "Bukan huruf alphabet" << endl;
    }

    return 0;
}

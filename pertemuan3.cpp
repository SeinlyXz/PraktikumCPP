#include <iostream>

using namespace std;

int main() {
    //int A = 10, B = 10;
//    A++;
//    B--;
//    cout << "Nilai A akhir: " << A << endl;
//    cout << "Nilai B akhir: " << B << endl;
	int a = 5, b = 10;
	
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	
//	cout << "Hasil a + b = " << a + b << endl;
//	cout << "Hasil a - b = " << a - b << endl;
//	cout << "Hasil a * b = " << a * b << endl;
//	cout << "Hasil a / b = " << a / b << endl;
//	cout << "Hasil a % b = " << a % b << endl;
////	cout << "Hasil b % a = " << b % a << endl;
	b += a;
	cout << "Hasil dari b += a = " << b << endl;
	
	b = 10;
	b -= a;
	cout << "Hasil dari b -= a = " << b << endl;
	
	b = 10;
	b *= a;
	cout << "Hasil dari b *= a = " << b << endl;
	
	b = 10;
	b /= a;
	cout << "Hasil dari b /= a = " << b << endl;
	
	b = 10;
	b %= a;
	cout << "Hasil dari b %= a = " << b << endl;
	//int a = 4, b = 3;
//	bool hasil;
//	
//	hasil = a > b;
//	cout << "Hasil dari a > b: " << hasil << endl;

//	hasil = a < b;
//	cout << "Hasil dari a < b: " << hasil << endl;
//	
//	hasil = a >= b;
//	cout << "Hasil dari a >= b: " << hasil << endl;
//	
//	hasil = a <= b;
//	cout << "Hasil dari a <= b: " << hasil << endl;
//	
//	hasil = a == b;
//	cout << "Hasil dari a == b: " << hasil << endl;

//	hasil = a != b;
//	cout << "Hasil dari a != b: " << hasil << endl;
	
	system("pause");
	
    return 0; // Untuk memberi sinyal kepada komputer bahwa kode sudah berakhir
}

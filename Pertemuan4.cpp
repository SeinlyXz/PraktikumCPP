#include <iostream>

using namespace std;

int main(){
	int tinggi, baris, kolom;
	menu:
	cout << "Masukkan jumlah tinggi: ";
	cin >> tinggi;
//	for (baris = 1; baris <= tinggi; baris++){
//		for (kolom = tinggi; kolom > baris; kolom--){
//			cout << " ";
//		}
//		for (int j = 1)
//		cout << endl;
//	}
	for (baris = 1; baris <= tinggi; baris++){
		for (kolom = tinggi; kolom > baris; kolom--){
			cout << " ";
		}
		for (kolom = 1; kolom <= baris*2-1; kolom++){
			cout << "*";
		}
		cout << endl;
	}
	for (baris = 2; baris <= tinggi; baris++){
		for (kolom = 1; kolom < baris; kolom++){
			cout << " ";
		}
		for (kolom = tinggi; kolom >= baris * 2-tinggi; kolom = kolom - 1){
			cout << "*";
		}
		cout << endl;
	}
	goto menu;
}



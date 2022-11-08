#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	float panjang, lebar, jari;
	int pilihan;
	const float phi = 3.14;
	menu:
	system("cls");
	cout << "==========================================\n";
	cout << "1. Menghitung luas dan keliling persegi panjang\n";
	cout << "2. Menghitung luas dan keliling Lingkaran\n";
	cout << "3. Exit/Keluar\n";
	cout << "==========================================\n";
	cout << "Masukkan pilihan Anda: ";
	cin >> pilihan;
	system("cls");
	
	switch(pilihan) {
		case 1:
			cout << "==========================================\n";
			cout << "Menghitung Luas dan Keliling Persegi Panjang\n";
			cout << "==========================================\n";
			cout << "Masukkan Nilai Panjang\t\t= ";
			cin >> panjang;
			cout << "Masukkan Nilai Lebar\t\t= ";
			cin >> lebar;
			cout << "Luas Persegi Panjang\t\t= " << panjang * lebar << endl;
			cout << "Keliling Persegi Panjang\t= " << 2*(panjang+lebar) << endl;
			system("pause");
			goto menu;
		case 2:
			cout << "==========================================\n";
			cout << "Menghitung Luas dan Keliling Lingkaran\n";
			cout << "==========================================\n";
			cout << "Masukkan Nilai Jari-Jari\t= ";
			cin >> jari;
			cout << "Luas Lingkaran\t\t\t= " << phi*jari*jari << endl;
			cout << "Keliling Lingkaran\t\t= " << 2*phi*jari << endl;
			system("pause");
			goto menu;
		case 3:
			cin.ignore();
			break;
		default:
			cin.ignore();
			cout << "Pilihan salah, tekan enter untuk melanjutkan...";
			cin.get();
			system("cls");
			goto menu;	
	}
	return 0;
}

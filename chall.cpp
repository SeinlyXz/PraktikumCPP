#include <iostream>

using namespace std;

int main(){
	char asal[10], jenisKelamin;
	string Nama, NIM, Jurusan;
	system("cls");
	cout << "Masukkan Nama: ";
	cin >> Nama;
	cout << "Masukkan NIM: ";
	cin >> NIM;
	cout << "Masukkan Jurusan: ";
	cin >> Jurusan;
	cout << "Masukkan Asal: ";
	cin >> asal;
	cout << "Masukkan Jenis Kelamin [L/P]: ";
	cin >> jenisKelamin;
	system("cls");
	cout << "============================\n";
	cout << "\tBiodata saya\n";
	cout << "============================\n";
	cout << "Masukkan Nama\t\t\t: " << Nama << endl;
	cout << "Masukkan NIM\t\t\t: " << NIM << endl;
	cout << "Masukkan Jurusan\t\t: " << Jurusan << endl;
	cout << "Masukkan Asal\t\t\t: " << asal << endl;
	cout << "Masukkan Jenis Kelamin\t\t: " << jenisKelamin << endl;
	return 0;
}

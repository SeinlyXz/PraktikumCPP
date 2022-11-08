#include <iostream> // Library

using namespace std;

int main(){
	string nama, NIM; // maks. 255 character
	char asal[10], jenisKelamin[2] = {};
	system("color a"); 
	cout << "=============\n";
	cout << "Biodata Saya" << endl;
	cout << "=============\n";
	cout << "Masukkan Nama\t:";
	getline(cin,nama);
	// getline(std::ostream, std::string)
	// cin (see in >> variabel)
	// cout (see out << apa aja)
	// cin >> nama;
	cout << "Masukkan Asal\t:";
	// Kode di bawah ini untuk membuat input Asal
	cin >> asal;
	cout << "Masukkan NIM\t:";
	cin >> NIM;
	cout << "=============\n";
	//system("cls");
	//cout << "Halo nama saya " << nama << " (" << NIM << ") " << "Asal saya dari " << asal;	
	return 0;
}

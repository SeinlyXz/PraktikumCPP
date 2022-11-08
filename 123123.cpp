#include <iostream>

using namespace std;

int main() {
	const char* x[5] = {};
	int a = 5, b = 10;
	for (int i = 0; i < sizeof(x); i++) {
		cout << "Hasil: "<< x[i] << endl;
	}
	system("pause");
	return 0;
}

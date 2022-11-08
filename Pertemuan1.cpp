#include <iostream>

using namespace std;

int main(){
	int p,q,r,s;
	cin >> p;
	cin >> q;
	
	if (p == q){
		cin >> r;
		cin >> s;
		if (r > s) {
			cout << "You Solved The Puzzle";	
		} else {
			cout << "Almost There";
		}
	} else {
		cout << "Try Again";
	}
}

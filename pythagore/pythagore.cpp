#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double a, b, c;
	cout << "entrez les cathetes b et c: ";
	cin >> b >> c;
	a = sqrt(pow(b, 2) + pow(c, 2));
	cout << "\n hypothenuse: " << a << "\n";
	system("pause");
}
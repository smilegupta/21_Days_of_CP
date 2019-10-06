#include <iostream>

using namespace std;
int main() {
	int a;
	float b;
	char c[50];
	cin >> a;
	cin >> b;
	cin >> c;
	int d = 4;
	char e[50]= " is the favourite fest of all developers.";
	cout << a + d << "\n";
	cout << b + d << "\n";
	strcat_s(c, e);
	cout << c << "\n";
}

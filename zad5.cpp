#include <iostream>
#include <cmath>

using namespace std;


int main() {
	long n, m, a, hor, ver;
	int plits;
	setlocale(LC_ALL, "russian");
	cout << "Введите числа n, m, a(1<=n, m, a <=10^9)" << endl;
	cin >> n;
	cin >> m;
	cin >> a;
	hor = (n + a - 1) / a;//вертикально 
	ver = (m + a - 1) / a;//горизонтально

	plits = hor * ver;
	cout << "Количесвто плит: " << plits << endl;
	return 0;
}
//выведем искомое количсевто плит

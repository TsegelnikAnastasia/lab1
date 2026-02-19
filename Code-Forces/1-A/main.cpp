#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long n, m, a, hor, ver;
	int plits;
	setlocale(LC_ALL, "russian");
	cout << "Введите числа n, m, a(1<=n, m, a <=10^9)" << endl;
	cin >> n >> m >> a;
	hor = (n + a - 1) / a;
	ver = (m + a - 1) / a;

	plits = hor * ver;
	cout << "Количесвто плит: " << plits;
	return 0;
}

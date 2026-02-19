#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long n, m, a, hor, ver;
	int plits;
	cin >> n >> m >> a;
	hor = (n + a - 1) / a;
	ver = (m + a - 1) / a;

	plits = hor * ver;
	cout << plits;
	return 0;
}

#include <iostream>

using namespace std;

int main() {
	long long n, m, a, hor, ver;
	long long plits;
	cin >> n >> m >> a;
	hor = (n + a - 1) / a;
	ver = (m + a - 1) / a;

	plits = hor * ver;
	cout << plits << endl;
	return 0;
}


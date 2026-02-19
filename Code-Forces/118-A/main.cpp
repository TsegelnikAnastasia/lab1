#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main() {
	string strpeti;
	string result = "";
	string glasnie = "aeiouyAEIOUY";
	cin >> strpeti;
	if (strpeti.length() > 100 ) {
		cout << "Ошибка! ";
		return 1;
	}
	for (int i = 0; i < strpeti.length(); i++) {

		if (glasnie.find(strpeti[i]) == string::npos) {
			strpeti[i] = tolower(strpeti[i]);
			result = result + "." + strpeti[i];

		}
	}
	cout << result;
	return 0;
}

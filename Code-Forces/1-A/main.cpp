#include <iostream>

using namespace std;

long long calculateTiles(int n, int m, int a) {
	long long or = (n + a - 1) / a;
	long long ver = (m + a - 1) / a;
	return hor * ver;
}

void RunAllTsets() {
	cout << "ЗАПУСК ТЕСТОВ" << endl;
	int PassedTests = 0;
	int AllTests = 0;

	{
		AllTests++;
		long long result = calculateTiles(10, 10, 3);
		if (result == 16) {
			cout << "Тест 1пройден успешно" << endl;
			PassedTests++;
		}
		else cout << "Тест 1 НЕ ПРОЙДЕН!" << endl;
	}

	{
		AllTests++;
		long long result = calculateTiles(1, 1, 100);
		if (result == 1) {
			cout << "Тест 2 пройжен успешно" << endl;
			PassedTests++;
		}
		else cout << "Тест 2 НЕ ПРОЙДЕН! " << endl;
	}
}


int main() {
	int choice;
	cout << "1 - запуск тестов, 2 - подсчет" << endl;
	cin >> choice;
	if (choice == 1) {
		RunAllTests();
	}
	else {
		int n, m, a;
		cout << "Введите n, m, a:" << endl;
		cin >> n >> m >> a;

		long long result = calculateTiles(n, m, a);
		cout << "Нудно плиток      " << result << endl;
	}
	return 0;
}


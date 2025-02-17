#include <iostream>
using namespace std;

void hanoi(int a, int b, int n) {
	if (n == 1) {
		cout << a << ' ' << b << '\n';
		return;
	}
	hanoi(a, 6 - a - b, n - 1);
	cout << a << ' ' << b << '\n';
	hanoi(6 - a - b, b, n - 1);
}

int main() {
	int n;
	cin >> n;

	// 옮긴 횟수 출력
	cout << (1 << n) - 1 << '\n';

	// 수행 과정 출력
	hanoi(1, 3, n);
}
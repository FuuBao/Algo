#include <bits/stdc++.h>
using namespace std;



void print(int i, int j, int n) {
	if (i % 3 == 1 && j % 3 == 1) {
		cout << " ";
		return;
	}
	else if (n == 1) {
		cout << "*";
		return;
	}
	else print(i / 3, j / 3, n / 3);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			print(i, j, n);
		}
		cout << '\n';
	}
}
// A+B (7)
#include <iostream>
using namespace std;

int main(void) {
	int t;
	cin >> t;
	int a, b;

	for (int i = 1; i <= t; i++) {
		cin >> a >> b;
		cout << "Case #" << i << ": " << a + b << endl;
	}

	return 0;
}
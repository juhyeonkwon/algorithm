#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define A 300
#define B 60
#define C 10


int main() {

	int num;

	cin >> num;

	int a, b, c;

	if (num % 10 != 0) {
		printf("-1\n");
	}
	else {
		a = num / A;
		b = (num % A) / B;
		c = ((num % A) % B) / C;
	}

	cout << a << " " << b << " " << c;



	return 0;

}

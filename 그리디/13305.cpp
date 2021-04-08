#include <iostream>
#include <vector>
using namespace std;


int main() {
	int N;

	cin >> N;

	vector<long long> price(N, 0);
	vector<long long> len(N - 1, 0);

	for (int i = 0; i < N - 1; i++) {
		cin >> len[i];
	}

	for (int i = 0; i < N; i++) {
		cin >> price[i];
	}

	int min = price[0];

	for (int i = 1; i < N - 1; i++) {
		if (price[i] < min) {
			min = price[i];
		}
		else {
			price[i] = min;
		}
	}


	long long result = 0;

	for (int i = 0; i < N - 1; i++) {
		result = result + price[i] * len[i];
	}

	cout << result;

	return 0;


}
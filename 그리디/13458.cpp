#include <iostream>
#include <vector>
using namespace std;


int main() {

	int N, B, C;

	cin >> N;

	vector<int> arr;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	cin >> B >> C;

	long long sum = 0;

	for (int i = 0; i < N; i++) {
		if ((arr[i] - B) <= 0) {
			sum = sum + 1; continue;
		}
		else {
			sum = sum + 1;
			arr[i] = arr[i] - B;
		}

		if (arr[i] % C == 0) {
			sum = sum + (arr[i] / C);
		}
		else {
			sum = sum + (arr[i] / C) + 1;
		}

	}

	cout << sum;

}
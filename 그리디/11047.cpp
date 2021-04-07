#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, K;

	int count = 0;

	cin >> N >> K;


	vector<int> arr(N, 0);

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	
	for (int i = N - 1; i >= 0; i--) {
		if (K == 0) {
            break;
        } else if(arr[i] > K) {
            continue;
        } else {
            count = count + (K / arr[i]);
            K = K % arr[i];
        }

	}

	cout << count;

	return 0;

}
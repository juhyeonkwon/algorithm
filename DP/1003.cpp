#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	
	int num;

	scanf_s("%d", &num);

	int* dp = new int[41];

	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 1;

	for (int i = 3; i < num; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	int n;
	for (int i = 0; i < num; i++) {
		scanf_s("%d", &n);

		if (n == 0) {
			printf("1 0\n");
		}
		else if (n == 1) {
			printf("0 1\n");
		}
		else {
			printf("%d %d\n", dp[n - 1], dp[n]);
		}
	}

	return 0;

}
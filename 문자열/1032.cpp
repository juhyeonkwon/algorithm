#include <iostream>
using namespace std;
#define MAX 51

char text[MAX][MAX];

int main() {

	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		scanf("%s", text[i]);
	}

	char* result = text[0];

	if (N == 1) {
		cout << result;
	}
	else {
		for (int i = 1; i < N; i++) {
			for (int k = 0; k < MAX; k++) {
				if(result[k] != text[i][k]) {
					result[k] = '?';
				}
			}
		}

		cout << result;
	}



	return 0;

}

bool compare(char a, char b) {
	if (a == b) {
		return true;
	}
	else {
		return false;
	}
}
#include <iostream>
#include <stack>
using namespace std;
#define MAX 51


int main() {

	int N;

	cin >> N;

	char text[MAX];

	for (int i = 0; i < N; i++) {
		scanf("%s", text);
		int k = 0;

		char c = text[0];
		stack<char> a;


		while (true) {
			
			if (c == '(') {
				a.push('(');
			}
			else if (c == ')') {
				if (a.empty()) {
					printf("NO\n");
					break;
				}
				else {
					a.pop();
				}
			}
			else if(c == '\0') {
				if (a.empty()) {
					printf("YES\n");
					break;
				}
				else {
					printf("NO\n");
					break;
				}
			}

			k++;
			c = text[k];


		}
	}

	return 0;

}

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;


int main() {

	string str;

	getline(cin, str);

	bool minus = false;

	string temp = "";
	int num = 0;

	for (int i = 0; i <= str.length(); i++) {
		if (str[i] == '+' || str[i] == '-' || str[i] == '\0') {
			if (minus) {
				num = num - stoi(temp);
			}
			else {
				num = num + stoi(temp);
			}

			temp = "";

			if (str[i] == '-') {
				minus = true;
			}
		}
		else {
			temp = temp + str[i];
		}
	}

	cout << num;

}
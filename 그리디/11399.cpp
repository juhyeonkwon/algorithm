#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 1000

int main() {
	int arr[MAX];

	int num;

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + num);

	int sum = arr[0];

	for (int i = 1; i < num; i++) {
		arr[i] = arr[i - 1] + arr[i];
		sum = sum + arr[i];
	}

	cout << sum;

	   	 
}
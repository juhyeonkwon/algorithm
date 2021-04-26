#include <iostream>
using namespace std;

#define MAX 9

int arr[MAX][MAX];

int main() {
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			scanf_s("%d", &arr[i][j]);
		}
	}

    
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            if(arr[i][j] == 0) {

            }
        }
    }











	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}


}
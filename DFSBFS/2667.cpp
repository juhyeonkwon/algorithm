#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 25

using namespace std;

int arr[MAX][MAX];
bool visited[MAX][MAX] = { false, };

int x[] = { -1, 1, 0, 0 };
int y[] = { 0, 0, -1, 1 };

int cnt = 0;
int N;


/*
	위 0, -1
	아래 0, 1
	왼 -1, 0
	오른쪽 1,0

*/

vector<int> vil;

void DFS(int x, int y) {

	if ((x >= 0 && x < N) && (y >= 0 && y < N)) {
		if (arr[x][y] == 1 && !visited[x][y]) {
			vil[cnt - 1]++;
			visited[x][y] = true;

			DFS(x + 1, y);
			DFS(x - 1, y);
			DFS(x, y + 1);
			DFS(x, y - 1);
		}
	}
    
}


int main() {

	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%1d", &arr[i][j]);
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == 1 && !visited[i][j]) {
				cnt++;
				vil.push_back(0);
				DFS(i, j);
			}
		}
	}

	cout << cnt << endl;

	sort(vil.begin(), vil.end());

	for (int i = 0; i < vil.size(); i++) {
		cout << vil[i] << endl;
	}

}
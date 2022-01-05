#include <iostream>
#include <algorithm>
#include <cstring>
#define MAX 50

using namespace std;

int arr[MAX][MAX] = { 0, };
bool visited[MAX][MAX] = { false , };

int M, N, K;

int cnt = 0;


void DFS(int x, int y) {

	if ((x >= 0 && x < M) && (y >= 0 && y < N)) {
		if (arr[x][y] == 1 && !visited[x][y]) {
			visited[x][y] = true;

			DFS(x - 1, y);

			DFS(x + 1, y);

			DFS(x, y - 1);

			DFS(x, y + 1);
		}
	}
}



int main() {

	int T;

	cin >> T;


	for (int i = 0; i < T; i++) {
		cin >> M >> N >> K;

		for (int k = 0; k < K; k++) {
			int x, y;
			cin >> x >> y;

			arr[x][y] = 1;
		}

		//dfs 시작

		for (int a = 0; a < MAX; a++) {
			for (int b = 0; b < MAX; b++) {
				if (arr[a][b] == 1 && !visited[a][b]) {
					cnt++;
					DFS(a, b);
				}
			}
		}

		cout << cnt << "\n";

		//dfs 끝나면 초기화
		memset(arr, 0, sizeof(arr));
		memset(visited, false, sizeof(visited));

	}
}
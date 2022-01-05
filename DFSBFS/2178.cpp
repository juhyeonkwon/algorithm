#include <iostream>
#include <queue>
#define MAX 101

using namespace std;

int arr[MAX][MAX] = { 0, };
char maze[MAX][MAX];
int dist[MAX][MAX];
bool visited[MAX][MAX] = { false , };

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };


queue<int> qx;
queue<int> qy;

int M, N, K;

void BFS(int x, int y) {
	visited[x][y] = true;

	dist[x][y] = 1;

	qx.push(x);
	qy.push(y);

	while (!qx.empty()) {

		int fx = qx.front();
		int fy = qy.front();

		qx.pop();
		qy.pop();


		for (int i = 0; i < 4; i++) {
			int nx = fx + dx[i];
			int ny = fy + dy[i];

			if ((nx >= 0 && nx < N) && (ny >= 0 && ny < M)) {

				if (maze[nx][ny] == '1' && !visited[nx][ny]) {
					visited[nx][ny] = true;
					dist[nx][ny] = dist[fx][fy] + 1;
					qx.push(nx);
					qy.push(ny);
				}
			}
		}

	}
}

int main() {

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		scanf("%s", maze[i]);
	}

	BFS(0, 0);


	printf("%d", dist[N - 1][M - 1]);

}
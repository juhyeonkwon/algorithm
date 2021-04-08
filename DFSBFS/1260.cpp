
#include <iostream>
#include <queue>
using namespace std;

int N, M, V;
int node[1001][1001] = { 0, };
bool visit[1001] = { false, };

queue<int> q;

void DFS(int idx) {

	cout << idx << " ";
	visit[idx] = true;

	for (int i = 1; i <= N; i++) {
		if (node[idx][i] && !visit[i]) {
			DFS(i);
		}
	}

}

void BFS(int idx) {


	visit[idx] = true;
	q.push(idx);

	while (!q.empty()) {
		int u = q.front();
		cout << u << " ";

		q.pop();


		for (int i = 1; i <= N; i++) {
			if (node[u][i] && !visit[i]) {
				q.push(i);
				visit[i] = true;
			}
		}
	}


}

int main() {

	cin >> N >> M >> V;

	for (int i = 0; i < M; i++) {
		int from, to;

		cin >> from >> to;

		node[from][to] = 1;
		node[to][from] = 1;

	}

	visit[V] = true;

	DFS(V);

	for (int i = 0; i < N+1; i++) {
		visit[i] = false;
	}


	cout << endl;

	BFS(V);

}
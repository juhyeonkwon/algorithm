#include <iostream>
using namespace std;

#define MAX 101


int virus = 0;
int num, edge;

int arr[MAX][MAX] = { 0, };
bool visited[MAX] = { false, };



void DFS(int idx) {

	visited[idx] = true;



	for (int i = 1; i <= num; i++) {
		if (arr[idx][i] && !visited[i]) {
			visited[i] = true;
			virus++;
			DFS(i);
		}
	}

}

int main() {


	cin >> num;

	cin >> edge;

	for (int i = 0; i < edge; i++) {
		int from, to;
		cin >> from >> to;

		arr[from][to] = 1;
		arr[to][from] = 1;
	}

	visited[1] = true;

	DFS(1);

	cout << virus;


}
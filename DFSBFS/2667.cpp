#include <iostream>
#include <vector>
#define MAX 25

using namespace std;

int arr[MAX][MAX];
bool visited[MAX][MAX] = { false, };

int x[] = { -1, 1, 0, 0};
int y[] = { 0, 0, -1, 1};

int cnt = 0;

vector<int> vil;

void DFS(int x, int y) {

}


int main () {
    int N;

    cin >> N;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%1d", &arr[i][j]);
        }
    }

    for(int i = 0; i < N; i++) {
       for(int j = 0; j < N; j++) {
           if(arr[i][j] && !visited[i][j]) {
               visited[i][j] = true;
               vil.push_back(1);
               DFS(i, j);

           }
       } 
    }



}
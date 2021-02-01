//#include <bits/stdc++.h>
//using namespace std;
//
//int adj[205][205];
//
//int solution(int n, int s, int a, int b, vector<vector<int>> fares) {
//	int answer = 1e9;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (i == j)adj[i][j] = 0;
//			else adj[i][j] = 1e8;
//		}
//	}
//
//	for (auto i : fares) {	
//		adj[i[0]][i[1]] = i[2];
//		adj[i[1]][i[0]] = i[2];
//	}
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			for (int k = 1; k <= n; k++) {
//				adj[j][k] = min(adj[j][k], adj[j][i] + adj[i][k]);
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		answer = min(answer, adj[s][i] + adj[i][a] + adj[i][b]);
//	}
//	return answer;
//}
//
//int main() {
//	cout << solution(6, 4, 6, 2, { {4, 1, 10} ,{3, 5, 24},
//		{5, 6, 2},{3, 1, 41},{5, 1, 24},{4, 6, 50},
//		{2, 4, 66},{2, 3, 22},{1, 6, 25} });
//
//	cout << solution(7, 3, 4, 1, { {5, 7, 9}, {4, 6, 4}, {3, 6, 1}, {3, 2, 3}, {2, 1, 6} });
//
//	cout << solution(6, 4, 5, 6, { {2, 6, 6}, {6, 3, 7}, {4, 6, 7},
//		{6, 5, 11}, {2, 5, 12}, {5, 3, 20}, {2, 4, 8}, {4, 3, 9} });
//}
//#include <bits/stdc++.h>
//using namespace std;
//
//char arr[7][7];
//int visited[7][7];
//queue<pair<int, int>> q;
//int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
//
//bool BFS() {
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		if (arr[x][y] == 'P' && visited[x][y] > 1 && visited[x][y] <= 3) {
//			return 0;
//		}
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			if (0 <= nx && nx < 5 && 0 <= ny && ny < 5) {
//				if (arr[nx][ny] != 'X' && visited[nx][ny] == 0) {
//					q.push({ nx,ny });
//					visited[nx][ny] = visited[x][y] + 1;
//				}
//			}
//		}
//	}
//	return 1;
//}
//
//void reset() {
//	for (int j = 0; j < 5; j++) {
//		for (int k = 0; k < 5; k++) {
//			visited[j][k] = 0;
//		}
//	}
//	while (!q.empty())q.pop();
//}
//
//vector<int> solution(vector<vector<string>> places) {
//	vector<int> answer;
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			for (int k = 0; k < 5; k++) {
//				arr[j][k] = places[i][j][k];
//			}
//		}
//
//		for (int j = 0; j < 5; j++) {
//			for (int k = 0; k < 5; k++) {
//				if (arr[j][k] == 'P') {
//					q.push({ j,k });
//					visited[j][k] = 1;
//					if (!BFS()) {
//						answer.push_back(0);
//						goto out;
//					}
//					reset();
//				}
//			}
//		}
//		answer.push_back(1);
//	out:;
//		reset();
//	}
//	return answer;
//}
//
//int main() {
//	for (auto i : solution({ {"POOOP", "OXXOX", "OPXPX", "OOXOX", "POXXP"} ,
//		{"POOPX", "OXPXP", "PXXXO", "OXXXO", "OOOPP"},
//		{"PXOPX", "OXOXP", "OXPXX", "OXXXP", "POOXX"},
//		{"OOOXX", "XOOOX", "OOOXX", "OXOOX", "OOOOO"},
//		{"PXPXP", "XPXPX", "PXPXP", "XPXPX", "PXPXP"} }))cout << i << ' ';
//}
//#include <bits/stdc++.h>
//using namespace std;
//
//int MAP[105][105][4];
//int N;
//
//bool condition() {
//	for (int i = 0; i <= N; i++) {
//		for (int j = 0; j <= N; j++) {
//			if (MAP[i][j][1] == 1) {
//				if (MAP[i][j][0] == 1 || MAP[i + 1][j][0] == 1 ||
//					(MAP[i][j][2] == 1 && MAP[i + 1][j][1] == 1)) {
//				}
//				else {
//					return 1;
//				}
//			}
//			if (MAP[i][j][3] == 1) {
//				if (MAP[i][j][0] == 1 || MAP[i][j][1] == 1 || MAP[i][j][2] == 1) {
//					
//				}
//				else {
//					return 1;
//				}
//			}
//		}
//	}
//	return 0;
//}
//
//vector<vector<int>> solution(int n, vector<vector<int>> build_frame) {
//	vector<vector<int>> answer;
//	N = n;
//	for (int i = 0; i <= n; i++) {
//		MAP[i][0][0] = 1;
//	}
//	for (auto i : build_frame) {
//		int x = i[0], y = i[1], a = i[2], b = i[3];
//		if (a == 0 && b == 1) {
//			if (MAP[x][y][0] == 1 || MAP[x][y][1] == 1 || MAP[x][y][2] == 1) {
//				MAP[x][y + 1][0] = 1;
//				MAP[x][y][3] = 1;
//			}
//		}
//		if (a == 1 && b == 1) {
//			if (MAP[x][y][0] == 1 || MAP[x + 1][y][0] == 1 ||
//				(MAP[x][y][2] == 1 && MAP[x + 1][y][1] == 1)) {
//				MAP[x][y][1] = 1;
//				MAP[x + 1][y][2] = 1;
//			}
//		}
//		if (a == 0 && b == 0) {
//			MAP[x][y][3] = 0;
//			MAP[x][y + 1][0] = 0;
//			if (condition()) {
//				MAP[x][y][3] = 1;
//				MAP[x][y + 1][0] = 1;
//			}
//		}
//		if (a == 1 && b == 0) {
//			MAP[x][y][1] = 0;
//			MAP[x + 1][y][2] = 0;
//			if (condition()) {
//				MAP[x][y][1] = 1;
//				MAP[x + 1][y][2] = 1;
//			}
//		}
//	}
//
//	for (int i = 0; i <= n; i++) {
//		for (int j = 0; j <= n; j++) {
//			if (MAP[i][j][3] == 1)answer.push_back({ i,j,0 });
//			if (MAP[i][j][1] == 1)answer.push_back({ i,j,1 });
//		}
//	}
//
//	return answer;
//}
//
//int main() {
//	//for (auto i : solution(5, { {1, 0, 0, 1}, {1, 1, 1, 1}, {2, 1, 0, 1},
//	//	{2, 2, 1, 1}, {5, 0, 0, 1}, {5, 1, 0, 1}, {4, 2, 1, 1}, {3, 2, 1, 1} })) {
//	//	for (auto j : i) {
//	//		cout << j << ' ';
//	//	}
//	//	cout << endl;
//	//}
//	cout << endl;
//	for (auto i : solution(5, { {0, 0, 0, 1}, {2, 0, 0, 1}, {4, 0, 0, 1}, {0, 1, 1, 1}, {1, 1, 1, 1},
//		{2, 1, 1, 1}, {3, 1, 1, 1}, {2, 0, 0, 0}, {1, 1, 1, 0}, {2, 2, 0, 1} })) {
//		for (auto j : i) {
//			cout << j << ' ';
//		}
//		cout << endl;
//	}
//
//}
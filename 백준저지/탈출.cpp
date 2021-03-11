//#include <bits/stdc++.h>
//using namespace std;
//
//int r, c;
//int tmp1, tmp2;
//char MAP[55][55];
//int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
//queue<pair<int, int>> water;
//queue<pair<int, int>> GO;
//
//void WATER(int x, int y) {
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dir[i][0];
//		int ny = y + dir[i][1];
//		if (0 <= nx && nx < r && 0 <= ny && ny < c) {
//			if (MAP[nx][ny] != 'X' && MAP[nx][ny] != 'D' && MAP[nx][ny] != '*') {
//				MAP[nx][ny] = '*';
//				water.push({ nx,ny });
//			}
//		}
//	}
//}
//
//int MOVE(int x, int y) {
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dir[i][0];
//		int ny = y + dir[i][1];
//		if (0 <= nx && nx < r && 0 <= ny && ny < c) {
//			if (MAP[nx][ny] != 'X' && MAP[nx][ny] != '*' && MAP[nx][ny] != 'S') {
//				if (MAP[nx][ny] == 'D')return 1;
//				MAP[nx][ny] = 'S';
//				GO.push({ nx,ny });
//			}
//		}
//	}
//	return 0;
//}
//
//void print() {
//	cout << endl;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cout << MAP[i][j] << ' ';
//		}
//		cout << endl;
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);
//	cin >> r >> c;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cin >> MAP[i][j];
//			if (MAP[i][j] == 'D') {
//				tmp1 = i;
//				tmp2 = j;
//			}
//			if (MAP[i][j] == 'S')GO.push({ i,j });
//			if (MAP[i][j] == '*')water.push({ i,j });
//		}
//	}
//	int cnt = 0;
//	while (1) {
//		cnt++;
//		//print();
//		int watersize = water.size();
//		while (watersize--) {
//			int x = water.front().first;
//			int y = water.front().second;
//			water.pop();
//			WATER(x, y);
//		}
//
//		int GOsize = GO.size();
//		while (GOsize--) {
//			int x = GO.front().first;
//			int y = GO.front().second;
//			GO.pop();
//			if (MOVE(x, y)) {
//				cout << cnt;
//				return 0;
//			}
//		}
//
//		if (GO.empty()) {
//			cout << "KAKTUS";
//			return 0;
//		}
//	}
//}
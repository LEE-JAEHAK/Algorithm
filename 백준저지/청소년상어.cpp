//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int dir[9][2] = { {0,0}, {-1,0},{-1,-1},{0,-1},{1,-1},{1,0},{1,1},{0,1},{-1,1} };
//int map[4][4];
//int way[4][4];
//int sum;
//void print() {
//	cout << '\n';
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			cout << map[i][j] << ' ';
//			cout << way[i][j] << ' ';
//		}
//		cout << '\n';
//	}
//}
//void movefish() {
//	for (int k = 1; k <= 16; k++) {
//	b:;
//		for (int i = 0; i < 4; i++) {
//			for (int j = 0; j < 4; j++) {
//				if (k == map[i][j]) {
//					int d = way[i][j];
//					int orgd = d;
//				a:;
//					int nx = i + dir[d][0];
//					int ny = j + dir[d][1];
//					if (0 <= nx && nx < 4 && 0 <= ny && ny < 4 && map[nx][ny] != 0) {
//						swap(map[i][j], map[nx][ny]);
//						swap(way[i][j], way[nx][ny]);
//						k++;
//						goto b;
//					}
//					else {
//						d++;
//						if (d == 9)d = 1;
//						way[i][j] = d;
//						if (d == orgd) { k++; goto b; }
//						goto a;
//					}
//				}
//			}
//		}
//	}
//}
//
//bool ext(int x, int y, int d) {
//	bool flag = 1;
//	for (int i = 1; i <= 3; i++) {
//		int nx = x + (dir[d][0] * i);
//		int ny = y + (dir[d][1] * i);
//		if (0 <= nx && nx < 4 && 0 <= ny && ny < 4 && map[nx][ny] != -1) {
//			flag = 0;
//		}
//	}
//	return flag;
//}
//
//int maxx = 0;
//void moveshark(int map[4][4], int way[4][4], int sum) {
//	movefish();
//
//	int x = 0, y = 0;
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			if (map[i][j] == 0) {
//				x = i;y = j;
//			}
//		}
//	}
//	maxx = max(maxx, sum);
//	//cout << '\n' << sum << '\n';print();
//	int d = way[x][y];
//	if (ext(x, y, d)) { return; } // 상어가 갈 곳이 없으면 
//	for (int w = 1; w <= 3; w++) {
//		int nx = x + (dir[d][0] * w);
//		int ny = y + (dir[d][1] * w);
//		if (0 <= nx && nx < 4 && 0 <= ny && ny < 4 && map[nx][ny] != -1) {
//			int tmpmap[4][4], tmpway[4][4];
//			for (int i = 0; i < 4; i++) {
//				for (int j = 0; j < 4; j++) {
//					tmpmap[i][j] = map[i][j];
//					tmpway[i][j] = way[i][j];
//				}
//			}
//			int a = map[nx][ny];
//			map[nx][ny] = 0;
//			map[x][y] = -1;
//			way[x][y] = 0;
//			moveshark(map, way, sum + a);
//			for (int i = 0; i < 4; i++) {
//				for (int j = 0; j < 4; j++) {
//					map[i][j] = tmpmap[i][j];
//					way[i][j] = tmpway[i][j];
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			cin >> map[i][j] >> way[i][j];
//		}
//	}
//	sum += map[0][0];
//	map[0][0] = 0;
//
//	moveshark(map, way, sum);
//	cout << maxx;
//}
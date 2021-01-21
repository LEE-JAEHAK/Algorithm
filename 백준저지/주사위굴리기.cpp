//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//int n, m, x, y, k;
//int map[25][25];
//int dice[6];
//int dir[5][2] = { {0,0}, {0,1},{0,-1},{-1,0},{1,0} };
//
//void move1() {
//	int temp = dice[5];
//	dice[5] = dice[0];
//	dice[0] = dice[4];
//	dice[4] = dice[2];
//	dice[2] = temp;
//}
//void move2() {
//	int temp = dice[4];
//	dice[4] = dice[0];
//	dice[0] = dice[5];
//	dice[5] = dice[2];
//	dice[2] = temp;
//}
//void move3() {
//	int temp = dice[3];
//	dice[3] = dice[0];
//	dice[0] = dice[1];
//	dice[1] = dice[2];
//	dice[2] = temp;
//}
//void move4() {
//	int temp = dice[1];
//	dice[1] = dice[0];
//	dice[0] = dice[3];
//	dice[3] = dice[2];
//	dice[2] = temp;
//}
//
//int main() {
//	cin >> n >> m >> x >> y >> k;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> map[i][j];
//		}
//	}
//	while (k--) {
//		int no;
//		cin >> no;
//		int nx = x + dir[no][0];
//		int ny = y + dir[no][1];
//		if (0 <= nx && nx < n && 0 <= ny && ny < m) {
//			if (no == 1)move1();
//			if (no == 2)move2();
//			if (no == 3)move3();
//			if (no == 4)move4();
//
//			if (map[nx][ny] == 0) {
//				map[nx][ny] = dice[2];
//			}
//			else {
//				dice[2] = map[nx][ny];
//				map[nx][ny] = 0;
//			}
//			x = nx, y = ny;
//			cout << dice[0] << endl;
//		}
//	}
//}
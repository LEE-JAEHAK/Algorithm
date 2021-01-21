//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int r, c, t;
//int dir[4][2] = { {-1,0},{0,1},{1,0},{0,-1} };
//int topx, topy = 1, botx, boty = 1;
//struct DUST {
//	int x;
//	int y;
//	int m;
//};
//vector<DUST> v;
//vector<int> MAP[55][55];
//
//void spread() {
//	//for (int i = 1; i <= r; i++) {
//	//	for (int j = 1; j <= c; j++) {
//	//		if (MAP[i][j][0] == -1)continue;
//	//		MAP[i][j].clear();
//	//	}
//	//}
//	//vector<DUST> temp;
//
//	for (int i = 0; i < v.size(); i++) {
//		int x = v[i].x;
//		int y = v[i].y;
//		int mass = v[i].m;
//		int cnt = 0;
//		for (int j = 0; j < 4; j++) {
//			int nx = x + dir[j][0];
//			int ny = y + dir[j][1];
//			if (0 < nx && nx <= r && 0 < ny && ny <= c && MAP[nx][ny][0] != -1) {
//				cnt++;
//				MAP[nx][ny].push_back(mass / 5);
//			}
//		}
//		int num = -1 * cnt * (mass / 5);
//		MAP[x][y].push_back(num);
//	}
//
//	for (int i = 1; i <= r; i++) {
//		for (int j = 1; j <= c; j++) {
//			if (MAP[i][j].size() == 0)continue;
//			if (MAP[i][j].size() == 1 && MAP[i][j][0] > 0) {
//				//temp.push_back({ i, j, MAP[i][j][0] });
//				continue;
//			}
//			int tmass = 0;
//			for (int k = 0; k < MAP[i][j].size(); k++) {
//				tmass += MAP[i][j][k];
//			}
//			//if (tmass > 0)temp.push_back({ i,j,tmass });
//			MAP[i][j].clear();
//			MAP[i][j].push_back(tmass);
//		}
//	}
//	//v = temp;
//}
//
//void AIR() {
//	topx = botx - 1; // 3
//	for (int i = topx - 1; i > 1; i--) {
//		MAP[i][1][0] = MAP[i - 1][1][0];
//	}
//	for (int j = 1; j < c; j++) {
//		MAP[1][j][0] = MAP[1][j + 1][0];
//	}
//	for (int i = 1; i < topx; i++) {
//		MAP[i][c][0] = MAP[i + 1][c][0];
//	}
//	for (int j = c; j > 2; j--) {
//		MAP[topx][j][0] = MAP[topx][j - 1][0];
//	}
//	MAP[topx][2][0] = 0;
//
//	for (int i = botx + 1; i < r; i++) {
//		MAP[i][1][0] = MAP[i + 1][1][0];
//	}
//	for (int j = 1; j < c; j++) {
//		MAP[r][j][0] = MAP[r][j + 1][0];
//	}
//	for (int i = r; i > botx; i--) {
//		MAP[i][c][0] = MAP[i - 1][c][0];
//	}
//	for (int j = c; j > 2; j--) {
//		MAP[botx][j][0] = MAP[botx][j - 1][0];
//	}
//	MAP[botx][2][0] = 0;
//
//	v.clear();
//	for (int i = 1; i <= r; i++) {
//		for (int j = 1; j <= c; j++) {
//			if (MAP[i][j][0] > 0) {
//				v.push_back({ i,j,MAP[i][j][0] });
//			}
//		}
//	}
//}
//
//int main() {
//	cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
//	cin >> r >> c >> t;
//	for (int i = 1; i <= r; i++) {
//		for (int j = 1; j <= c; j++) {
//			int a;
//			cin >> a;
//			MAP[i][j].push_back(a);
//			if (a > 0)v.push_back({ i,j,a });
//			if (a == -1)botx = i;
//		}
//	}
//
//	while (t--) {
//		spread();
//		//cout << endl;
//		//for (int i = 1; i <= r; i++) {
//		//	for (int j = 1; j <= c; j++) {
//		//		cout << MAP[i][j][0] << ' ';
//		//	}
//		//	cout << endl;
//		//}
//		//cout << endl;
//		//for (int i = 0; i < v.size(); i++)cout << v[i].m << ' ';
//
//		AIR();
//		//cout << endl;
//		//for (int i = 1; i <= r; i++) {
//		//	for (int j = 1; j <= c; j++) {
//		//		cout << MAP[i][j][0] << ' ';
//		//	}
//		//	cout << endl;
//		//}
//		//cout << endl;
//		//for (int i = 0; i < v.size(); i++)cout << v[i].m << ' ';
//	}
//	int ans = 0;
//	for (int i = 1; i <= r; i++) {
//		for (int j = 1; j <= c; j++) {
//			if (MAP[i][j][0] > 0)ans += MAP[i][j][0];
//		}
//	}
//	cout << ans;
//}
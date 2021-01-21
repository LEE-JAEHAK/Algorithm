//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <deque>
//#include <cmath>
//#include <math.h>
//using namespace std;
//
//int n, m, k;
//
//struct FIREBALL {
//	int x;
//	int y;
//	int m;
//	int s;
//	int d;
//};
//
//vector<FIREBALL> v;
//vector<FIREBALL> MAP[55][55];
//int dir[8][2] = { {-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1} };
//
//void MOVE() {
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			MAP[i][j].clear();
//		}
//	}
//
//	for (int i = 0; i < v.size(); i++) {
//		int no = v[i].d;
//		v[i].x = v[i].x + (v[i].s % n) * dir[no][0];
//		v[i].y = v[i].y + (v[i].s % n) * dir[no][1];
//		if (v[i].x > n)v[i].x -= n;
//		if (v[i].x < 1)v[i].x += n;
//		if (v[i].y > n)v[i].y -= n;
//		if (v[i].y < 1)v[i].y += n;
//		MAP[v[i].x][v[i].y].push_back(v[i]);
//	}
//}
//
//void MERGE() {
//	vector<FIREBALL> temp;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (MAP[i][j].size() == 0)continue;
//			if (MAP[i][j].size() == 1) {
//				temp.push_back(MAP[i][j][0]);
//				continue;
//			}
//			int mSum = 0, sSum = 0, cnt = MAP[i][j].size();
//			bool EVEN = 1, ODD = 1;
//			for (int k = 0; k < cnt; k++) {
//				mSum += MAP[i][j][k].m;
//				sSum += MAP[i][j][k].s;
//				if (MAP[i][j][k].d % 2 == 1)EVEN = 0;
//				if (MAP[i][j][k].d % 2 == 0)ODD = 0;
//			}
//
//			int mass = mSum / 5;
//			int speed = sSum / cnt;
//			if (mass == 0)continue;
//			if (EVEN || ODD) {
//				temp.push_back({ i,j,mass,speed,0 });
//				temp.push_back({ i,j,mass,speed,2 });
//				temp.push_back({ i,j,mass,speed,4 });
//				temp.push_back({ i,j,mass,speed,6 });
//			}
//			else {
//				temp.push_back({ i,j,mass,speed,1 });
//				temp.push_back({ i,j,mass,speed,3 });
//				temp.push_back({ i,j,mass,speed,5 });
//				temp.push_back({ i,j,mass,speed,7 });
//			}
//		}
//	}
//	v = temp;
//}
//
//int main() { //65 90
//	cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
//	cin >> n >> m >> k;
//	for (int i = 0; i < m; i++) {
//		int r, c, m, s, d;
//		cin >> r >> c >> m >> s >> d;
//		v.push_back({ r,c,m,s,d });
//		MAP[r][c].push_back(v.back());
//	}
//	while (k--) {
//		MOVE();
//		MERGE();
//		//cout << endl;
//		//for (int i = 1; i <= n; i++) {
//		//	for (int j = 1; j <= n; j++) {
//		//		cout << MAP[i][j].size() << ' ';
//		//	}
//		//	cout << endl;
//		//}
//		//cout << endl;
//	}
//	int ans = 0;
//	for (int i = 0; i < v.size(); i++) {
//		ans += v[i].m;
//	}
//	cout << ans;
//}
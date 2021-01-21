//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//int n, k;
//int dir[4][2] = { {-1,0}, {0,1},{1,0},{0,-1} };
//int headx = 1, heady = 1, tailx = 1, taily = 1;
//int d = 1;
//int td = 1;
//int map[105][105];
//queue<int> v;
//
//void print() {
//	cout << endl;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			cout << map[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//int main() {
//	cin >> n >> k;
//	map[1][1] = 1;
//	for (int i = 0; i < k; i++) {
//		int x, y;
//		cin >> x >> y;
//		map[x][y] = 2;
//	}
//	int l;
//	cin >> l;
//	int ans = 0, prev = 0;
//	for (int i = 0; i < l; i++) {
//		int no; char c;
//		cin >> no >> c; 
//		int cnt = no - prev; 
//		prev = no; 
//		for (int j = 0; j < cnt; j++)v.push(1);
//		v.push(c);
//		while (cnt--) {
//			ans++;
//			headx += dir[d][0];
//			heady += dir[d][1];
//			if (headx<1 || headx>n || heady<1 || heady>n || map[headx][heady] == 1) {
//				goto fin;
//			}
//			if (map[headx][heady] == 2) {
//				map[headx][heady] = 1;
//			}
//			if (map[headx][heady] == 0) {
//				map[headx][heady] = 1;
//				int tmp = v.front();
//				if (tmp == 1) {
//					v.pop();
//					map[tailx][taily] = 0;
//					tailx += dir[td][0];
//					taily += dir[td][1];
//				}
//				else {
//					v.pop();
//					v.pop();
//					if (tmp == (int)'D')td += 1;
//					if (tmp == (int)'L')td -= 1;
//					if (td == -1)td = 3;
//					if (td == 4)td = 0;
//					map[tailx][taily] = 0;
//					tailx += dir[td][0];
//					taily += dir[td][1];
//				}
//			}
//			//cout << "-----" << ans << "-----\n";
//			//print();
//		}
//		if (c == 'D')d += 1;
//		if (c == 'L')d -= 1;
//		if (d == -1)d = 3;
//		if (d == 4)d = 0;
//	}
//	while (1) {
//		ans++;
//		v.push(1);
//		headx += dir[d][0];
//		heady += dir[d][1];
//		if (headx<1 || headx>n || heady<1 || heady>n || map[headx][heady] == 1) {
//			goto fin;
//		}
//		if (map[headx][heady] == 2) {
//			map[headx][heady] = 1;
//		}
//		if (map[headx][heady] == 0) {
//			map[headx][heady] = 1;
//			int tmp = v.front();
//			if (tmp == 1) {
//				v.pop();
//				map[tailx][taily] = 0;
//				tailx += dir[td][0];
//				taily += dir[td][1];
//			}
//			else {
//				v.pop();
//				v.pop();
//				if (tmp == (int)'D')td += 1;
//				if (tmp == (int)'L')td -= 1;
//				if (td == -1)td = 3;
//				if (td == 4)td = 0;
//				map[tailx][taily] = 0;
//				tailx += dir[td][0];
//				taily += dir[td][1];
//			}
//		}
//		//cout << "-----" << ans << "-----\n";
//		//print();
//	}
//fin:;
//	cout << ans;
//}
//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//#include <map>
//using namespace std;
//
//int n, m, k;
//char arr[15][15];
//bool visited[15][15];
//map<string, int> ma;
//int dir[8][2] = { {0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,1},{1,-1},{-1,-1} };
//map<string, int>::iterator it;
//string arrs[1005];
//int ans;
//
//void DFS(int x, int y, string s, int no, int cnt) {
//	if (cnt == no) {
//		ans++;
//		return;
//	}
//	for (int i = 0; i < 8; i++) {
//		int nx = (x + dir[i][0]) % n;
//		if (nx < 0)nx = n - 1;
//		int ny = (y + dir[i][1]) % m;
//		if (ny < 0)ny = m - 1;
//		if (arr[nx][ny] == s[cnt])
//			DFS(nx, ny, s, no, cnt + 1);
//	}
//}
//
//int main() {
//	cin >> n >> m >> k;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m;j++) {
//			cin >> arr[i][j];
//		}
//	}
//	for (int i = 0; i < k; i++) {
//		string s;
//		cin >> s;
//		ma[s] = 0;
//		arrs[i] = s;
//	}
//	for (int w = 0; w < k; w++) {
//		string s = arrs[w];
//		int no = s.length();
//		if (ma[s] != 0) {
//			cout << ma[s] << '\n';
//			continue;
//		}
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				if (s[0] == arr[i][j])
//					DFS(i, j, s, no, 1);
//			}
//		}
//		cout << ans << '\n';
//		ma[s] = ans;
//		ans = 0;
//	}
//	
//}
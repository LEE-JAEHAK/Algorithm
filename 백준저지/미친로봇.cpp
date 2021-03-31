//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//double arr[4];
//vector<int> v;
//int dir[4][2] = { {0,1},{0,-1},{-1,0},{1,0} };
//double sum = 0;
//int visited[40][40];
//
//void dfs(int cnt, double tmp, int x, int y) {
//	if (cnt == n) {
//		//for (auto i : v)cout << i << ' ';
//		//cout << endl;
//		sum += tmp;
//		return;
//	}
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dir[i][0];
//		int ny = y + dir[i][1];
//		if (visited[nx][ny] == 0) {
//			v.push_back(i);
//			visited[nx][ny] = 1;
//			dfs(cnt + 1, tmp * arr[i], nx, ny);
//			visited[nx][ny] = 0;
//			v.pop_back();
//		}
//		else {
//			continue;
//		}
//	}
//}
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < 4; i++) {
//		double a;
//		cin >> a;
//		arr[i] = a / 100;
//	}
//	visited[20][20] = 1;
//	dfs(0, 1, 20, 20);
//	cout << setprecision(10);
//	cout << fixed;
//	cout << sum;
//}
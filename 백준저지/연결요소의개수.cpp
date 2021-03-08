//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m;
//vector<int> v[1005];
//int visited[1005];
//queue<int> q;
//
//void BFS() {
//	while (!q.empty()) {
//		int x = q.front();
//		q.pop();
//		for (auto i : v[x]) {
//			int nx = i;
//			if (visited[nx] == 0) {
//				q.push(nx);
//				visited[nx] = 1;
//			}
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		int a, b;
//		cin >> a >> b;
//		v[a].push_back(b);
//		v[b].push_back(a);
//	}
//	int ans = 0;
//	for (int i = 1; i <= n; i++) {
//		if (visited[i] == 0) {
//			ans++;
//			visited[i] = 1;
//			q.push(i);
//			BFS();
//		}
//	}
//	cout << ans;
//}
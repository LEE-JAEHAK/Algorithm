//#include <bits/stdc++.h>
//using namespace std;
//
//int visited[20005];
//vector<int> v[20005];
//queue<int> q;
//bool flag;
//
//void bfs() {
//	while (!q.empty()) {
//		int x = q.front();
//		q.pop();
//		for (int i = 0; i < v[x].size(); i++) {
//			int nx = v[x][i];
//			if (visited[nx] == 0) {
//				visited[nx] = visited[x] + 1;
//				q.push(nx);
//			}
//			else {
//				if (visited[nx] % 2 == visited[x] % 2) {
//					flag = 1;
//					goto out;
//				}
//			}
//		}
//	}
//out:;
//}
//void reset() {
//	flag = 0;
//	while (!q.empty())q.pop();
//	for (int i = 0; i <= 20000; i++) {
//		visited[i] = 0;
//		v[i].clear();
//	}
//}
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	int t;
//	cin >> t;
//	while (t--) {
//		reset();
//		int n, m;
//		cin >> n >> m;
//		for (int i = 0; i < m; i++) {
//			int a, b;
//			cin >> a >> b;
//			v[a].push_back(b);
//			v[b].push_back(a);
//		}
//		for (int i = 1; i <= n; i++) {
//			if (flag == 1)break;
//			if (visited[i] == 0) {
//				q.push(i);
//				visited[i] = 1;
//				bfs();
//			}
//		}
//		if (flag == 1)cout << "NO\n";
//		else cout << "YES\n";
//	}
//}
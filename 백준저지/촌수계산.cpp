//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m, a, b;
//vector<int> v[105];
//int visited[105];
//queue<int> q;
//
//void BFS() {
//	while (!q.empty()) {
//		int x = q.front();
//		if (x == b) {
//			cout << visited[x] - 1;
//			exit(0);
//		}
//		q.pop();
//		for (auto i : v[x]) {
//			if (visited[i] == 0) {
//				q.push(i);
//				visited[i] = visited[x] + 1;
//			}
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);
//	cin >> n;
//	cin >> a >> b;
//	cin >> m;
//	for (int i = 0; i < m; i++) {
//		int c, d;
//		cin >> c >> d;
//		v[c].push_back(d);
//		v[d].push_back(c);
//	}
//	visited[a] = 1;
//	q.push(a);
//	BFS();
//	cout << -1;
//}
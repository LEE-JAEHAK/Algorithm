//#include <iostream>
//#include <algorithm>
//#include <queue>
//#include <vector>
//using namespace std;
//
//int n, m, k, x;
//vector<int> adj[300005];
//queue<int> q;
//vector<int> dist(300005, 1e9);
//
//void BFS() {
//	while (!q.empty()) {
//		int here = q.front();
//		q.pop();
//		for (int i = 0; i < adj[here].size(); i++) {
//			int next = adj[here][i];
//			if (dist[next] > dist[here] + 1) {
//				dist[next] = dist[here] + 1;
//				q.push(next);
//			}
//		}
//	}
//	bool flag = 0;
//	for (int i = 1; i <= n; i++) {
//		if (dist[i] == k) { cout << i << '\n'; flag = 1; }
//	}
//	if (flag == 0)cout << -1;
//}
//
//int main() {
//	cin >> n >> m >> k >> x; // 4 4 2 1
//	for (int i = 0; i < m; i++) {
//		int a, b;
//		cin >> a >> b;
//		adj[a].push_back(b);
//	}
//	dist[x] = 0;
//	q.push(x);
//	BFS();
//}
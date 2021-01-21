//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//vector<int> adj[1005];
//vector<int> dist(1005, 1e9);
//queue<int> q;
//int a, b, n, m;
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
//	if (dist[b] == 1e9)cout << -1;
//	else cout << dist[b];
//}
//
//int main() {
//	cin >> a >> b >> n >> m;
//	for (int i = 0; i < m; i++) {
//		int c, d;
//		cin >> c >> d;
//		adj[c].push_back(d);
//		adj[d].push_back(c);
//	}
//	dist[a] = 0;
//	q.push(a);
//	BFS();
//}
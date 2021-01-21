//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int n, m;
//vector<int> adj[105];
//queue<int> q;
//int ans[105];
//
//int BFS(int start) {
//	vector<int> dist(105, 1e9);
//	dist[start] = 0;
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
//	int sum = 0;
//	for (int i = 1; i <= n; i++) {
//		sum += dist[i];
//	}
//	return sum;
//}
//
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		int a, b;
//		cin >> a >> b;
//		adj[a].push_back(b);
//		adj[b].push_back(a);
//	}
//	int minn = 1e9;
//	for (int i = 1; i <= n; i++) {
//		q.push(i);
//		int tmp = BFS(i);
//		minn = min(minn, tmp);
//		ans[i] = tmp;
//	}
//	for (int i = 1; i <= n; i++) {
//		if (minn == ans[i]) {
//			cout << i;
//			return 0;
//		}
//	}
//}
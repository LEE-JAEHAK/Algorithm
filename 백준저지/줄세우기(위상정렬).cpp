//#include <bits/stdc++.h>
//using namespace std;
//
//vector<int> v[32005];
//int degree[32005];
//int n, m;
//
//void BFS() {
//	queue<int> q;
//	for (int i = 1; i <= n; i++) {
//		if (!degree[i])q.push(i);
//	}
//
//	while (!q.empty()) {
//		int cur = q.front();
//		q.pop();
//		cout << cur << ' ';
//
//		for (int i = 0; i < v[cur].size(); i++) {
//			degree[v[cur][i]]--;
//			if (!degree[v[cur][i]])q.push(v[cur][i]);
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0);
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		int a, b;
//		cin >> a >> b;
//		v[a].push_back(b);
//		degree[b]++;
//	}
//
//	BFS();
//}